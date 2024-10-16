# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.txt                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 13:37:49 by thofstet          #+#    #+#              #
#    Updated: 2024/10/16 17:19:44 by thofstet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Fonctions variadiques :

C'est le nouveau concept que l'on apprend durant ce projet. C'est très important
à comprendre !

Les fonctions que nous avons faites jusqu'ici avaient des arguments "fixes".
Il peut y en avoir plusieurs, mais l'on savait toujours à l'avance combien
d'arguments il y allait y avoir.

Par exemple, ft_strlen ne prends qu'une string en input :
int	ft_strlen(char *str);
et ft_split ne prends que 2 elements en input
**ft_split(char const *s, char c);
Pour bien comprendre l'idée.

Une fonction "variadique" est une fonction qui accepte un nombre variable d'arguments.
C'est caracterisé par les "..." dans une fonction.

int	ft_printf(const char *format, ...);
const char *format est l'argument obligatoire de printf.

Une fonction variadique doit avoir au moins un argument obligatoire. Il n'y a pas
de minimum en termes de variable d'arguments.

Quand quelqu'un appelle la fonction printf, on ne sait pas à l'avance combien
d'élements la personne veut afficher. Dis autrement, on ne sait pas combien de
fois le "format specifier" va être utilisé.

printf("hello my name is %s and I am %d old \n", "Thomas", 23);

Dans le cas ci-dessus, la fonction prends deux arguments, en + de la string initiale.
Si l'on savait à l'avance combien d'arguments allaient être utilisés et de quels types ils sont,
la fonction pourrait être ré-écrite de cette façon :

int	ft_printf(const char *format, char *string, int age);

Mais heureusement, le langage C est bien fait. Il n'y a pas besoin de réécrire la fonction printf
à chaque fois que l'on change le nombre d'arguments en input. Nous n'avons qu'à inclure la library
"stdarg", qui nous permet d'utiliser un nouveau type de variables, va_list, et 3 macros très utiles :
va_start, va_arg et va_end.

#include <stdarg.h>

Voyons voir comment les utiliser :

------------va_list - nouveau type d'objet -------------------

va_list est un type d'objet utile pour retenir les informations nécessaires aux macros
va_start, va_copy, va_arg et va_end (que l'on va bientôt comprendre). Autrement dit,
c'est une liste qui va contenir tous les arguments dynamiques.

Pour créer une variable de ce type, nous devons le faire de la même façon que pour
n'importe quelle autre variable :

va_list	any_name_you_want;
// On va l'appeler args pour le prochain exemple :
va_list	args;

Cela va créer la liste d'arguments dynamiques qui peut être illustré ainsi :

printf("hello my name is %s and I'm %d years old", Thomas, 23);
       |________________________________________|  |_____||__|
	   		argument obligatoire                     args  args
		(la string qui va être utilisée en tant que
		   base pour l'output)                        (va_list type)

Dans cet exemple, la fonction printf prends 2 arguments "extra", en + de l'argument obligatoire.
Ces 2 arguments sont les variables-arguments et vont être stockées dans la variable crée précédemment
de type va_list, grâce à va_start.


----------va_start - fonction macro----------------

La fonction-macro va_start va d'une certaine manière tout initializer, avant que l'on commence à bouger
dans notre liste de variables-arguments (va_list). Nous devons l'écrire ainsi :

va_start ( va_list var, parameterN);

// Dans notre exemple, cela serait :
va_start( args, format);

- var est une variable de type arg_list(args pour nous)
- parameterN est le paramètre nommé avant le premier paramètre dynamique (dans notre cas, avec printf,
cela serait la string initiale) - en d'autres mots, c'est l'argument obligatoire.

Son but est de préparer le terrain et définir quels élements vont être "fixes" et lesquels vont varier.
C'est quand notre va_list va avoir tous les élements sur la table.

va_start doit être appelé avant tout usage de va_arg. Car sinon, notre variable / tableau sera vide.


-------va_arg - fonction macro--------------------

Maintenant que tout est prêt, nous pouvons commencer à utiliser et jouer avec nos arguments-variables.
Cela peut être fait avec va_arg.

Cette macro nous permet l'accès aux arguments de la fonction variadique. À chaque fois que va_arg est
appelée, nous bougeons au prochain argument.

va_arg va d'abord prendre en arguments la liste des arguments dynamiques que nous avons définie au
tout début (va_list objects) et le type de la variable du prochain argument.

va_arg( va_list var, type_of_the_variable )

Retournons à notre exemple :


printf("hello my name is %s and I'm %d years old", Thomas, 23);
       |________________________________________|  |_____||__|
	   		argument obligatoire                     args  args
		(la string qui va être utilisée en tant que
		   base pour l'output)                        (va_list type)

La longueur de notre liste de variables-arguments (args) est de 2. Il y a un argument de chaîne
en première position et un argument int en seconde position.

Si nous voulons avoir accès au premier argument, nous devons appeler va_arg une fois et spécifier le
type de l'argument. Dans ce cas le premier argument est une chaîne, qui sera définie par un pointeur.

Si nous voulons accéder au second argument, nous faisons la même chose. Mais cette fois-ci le type de l'argument
est un "int".

// accéder au premier argument (type "string")
va_arg( args, char *) // "Thomas"

// acceder au second argument (type "int")
va_arg( args, int ) // 23

Évidemment, c'est juste un exemple théorique de façon à ce que l'on comprenne comment va_arg fonctionne.
En pratique, vu que l'on ne sait pas en avance combien d'arguments la fonction va prendre, nous pouvons imaginer
que l'on devra créer des conditions pour chaque format spécifique.

-------------va_end - fonction macro ------------------

Une fois que l'on a fini notre programme, il ne faut pas oublier de clean up les objets que l'on a
initialisés en appelant va_start.

va_end peut modifier l'objet, qui était appelé "args" dans notre exemple précédent, afin que cela ne soit
plus utilisable.

va_end( va_list var);

// et dans notre exemple:
va_end(args);

va_end() va free la mémoire allouée.


----------Construire le truc --------------

Les fonctions autorisées pour ce projet sont :

- malloc

- free

- write

- va_start

- va_arg

- va_copy

- va_end

N'importe quelle autre fonction utilisée causera l'échec du projet.

Nous devons aussi faire un Makefile et un fichier header avec toutes les fonctions que nous allons utiliser.


Formulation Générale -------------------------

1. La fonction printf va écrire chaque caractère de la string initiale, un par un, jusqu'à ce qu'elle
trouve un "%".

2. Quand elle trouve un "%", elle va chercher l'élément qui se trouve à la prochaine position / index.
Elle va trouver le caractère qui va définir le type du premier argument-variable.

3. Dépendemment de ce qu'elle trouve, elle va appeler une méthode qui va afficher l'argument du
type particulier à l'output.
-> Si il y a un "s" après le "%", alors nous aurons besoin d'une fonction qui permet d'afficher des strings.

-> Si il y a un "d" après le "%", alors nous aurons besoin d'une fonction qui permet d'afficher des nombres.

4. Une fois que le premier argument a été affiché, nous retournons à l'étape 1, jusqu'à ce que la
string soit terminée (autrement dit, jusqu'à ce qu'on trouve un caractère null).

(1-4) : N'oubliez pas de compter le nombre de caractères imprimés chaque fois, afin de retourner le
nombre final de caractères à la fin de la fonction.

--------Exemples spécifiques --------------

Regardons cet exemple de plus près et essayons de traduire les phrases suivantes en code :


printf("hello my name is %s and I'm %d years old", "Thomas", 23);

INDEX "hello my name is [%s] and I'm [%d] years old"\0
	   123456789.....

OUTPUT : hello my name is Thomas and I'm 23 years old
COUNT    01234......                                 ->42 chars imprimés
(de chars)


1. Notre programme va écrire les caractères de l'index 0 à 16, un par un,
en incrémentant la variable "count".
-> À cette étape du programme la fonction printf devrait avoir affiché "hello my name is"
et le nombre que la fonction retourne est 17.

2. Une fois qu'il rencontre le caractère "%", il arrête d'écrire et va regarder une position
+ loin.
-> À cette étape nous pointons à la position / index 18.

3. Le programme va maintenant checker le type de l'élements à cette position
(la position après le "%"). Dans notre cas, le type du premier argument dynamique est 's' (%s).

4. Nous allons devoir imprimer un-par-un les caractères que le programme vient de trouver.
Vu que c'est une string, nous pouvons par exemple utiliser la fonction "ft_putstr" que nous avons
créée dans libft pour imprimer chaque caractère. N'oublions pas d'aussi compter le nombre de caractères
qui seront imprimés depuis cette string et de l'ajouter au count initiale.

5. Une fois que le premier argument dynamique (celui qui correspont au %s) a été affiché,
nous pouvons revenir à la phrase initiale et continuer le travail.
-> À cette étape du programme la fonction printf devrait avoir affiché "hello my name is Thomas"
et le nombre que la fonction retourne est 22 (= le nombre total de caractères affichés).

6. Notre programme va alors encore écrire chaque caractère, un par un, de l'index 20 à 27
tout en incrémentant la variable "count".

7. Le programme va encore trouver un "%" (position 28 ish), arrêter d'écrire et chercher pour
le prochain élement.

8. Le programme va maintenant chercher le type d'élément à cette position (la position après le %).
Dans notre cas, le type du deuxième argument dynamique est 'd' (%d). Cela veut dire que nous allons
appeler une fonction qui imprime le nombre.
-> À cette étape du programme, la fonction printf devrait avoir affiché
"hello my name is Thomas and I'm 23".

9. Notre programme va alors encore écrire chaque caractère, un par un, de l'index 30
jusqu'à la fin tout en incrémentant la variable "count".
-> À cette étape du programme, la fonction printf devrait avoir affiché
"hello my name is Thomas and I'm 23 years old" et le nombre que la fonction retourne est
42 (environ, j'ai changé le prénom de Laura à Thomas) car il a imprimé 42 (ish) caractères.
