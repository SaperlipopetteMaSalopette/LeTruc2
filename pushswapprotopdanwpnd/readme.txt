liste chainees juste contenir adresses l'une après l'autre

struct '->' element = element au sein de structure struct

struct doit contenir variable 'next' qui pointe à la prochaine struct
	au sein de la liste chaînée

	Node = exemplaire d'une struct, mais pas un pointeur qui renvoie à la struct

	(*element) = dereferencement

	dereferencement = extraire


tempo_val = head->value; //on remplit la var tempo avec ce qui est contenu dans la var value
							//de la struct head

head = *stack   pointeur sur le premier noeud
	de la pile (*stack)
----------------------------------------------------------------------
if (!head_to)
{
    head_to = tmp;
    head_to->next = NULL;
    *stack_to = head_to;
}
Pourquoi une '*' devant stack_to et pas devant head_to ?


Excellente question ! Cela vient de la façon dont les pointeurs fonctionnent en C. Voyons cela pas à pas, comme si on jouait avec des adresses et des valeurs.

---

### **Différence entre `*stack_to` et `head_to`**

- **`stack_to`** est un **pointeur vers un pointeur**, donc pour modifier ce qu'il pointe (la tête de la pile), il faut utiliser `*stack_to`. Cela signifie : "Va à l'endroit où `stack_to` pointe, et change la valeur qui est là-bas."
- **`head_to`** est une **variable locale** qui contient directement l'adresse de la tête de la pile. Pour changer son contenu, pas besoin de `*`, car c'est une copie locale que l'on manipule.

---

### **Explication avec une image mentale**

#### Cas de `stack_to` :

Imagine que tu as une boîte (`stack_to`) qui contient une adresse (un numéro de maison). Cette adresse pointe vers la tête actuelle de la pile.

- **`*stack_to`** : Ça veut dire "Va à l'adresse stockée dans `stack_to`, et change ce qui est là-bas".
- En faisant `*stack_to = head_to`, tu dis : "La tête de la pile doit maintenant être ce que contient `head_to`".

---

#### Cas de `head_to` :

Ici, tu travailles directement avec une copie de l'adresse de la tête de la pile.

- **`head_to`** contient déjà l'adresse de l'élément (le sommet de la pile). Tu peux la modifier directement, car c'est une variable locale.
- Pas besoin de dereferencer (`*`), car on ne manipule pas un pointeur de pointeur ici, juste une adresse simple.

---

### Pourquoi cette différence ici ?

#### Pour `head_to` :
```c
head_to = tmp;
```
- Tu modifies simplement la **valeur de la variable locale** `head_to`. Cette modification n'a pas besoin de changer ce que pointe la boîte initiale `stack_to`.

#### Pour `stack_to` :
```c
*stack_to = head_to;
```
- Tu dis : "Je veux que l'adresse stockée dans `stack_to` (la boîte externe) pointe maintenant vers la nouvelle tête de la pile, qui est dans `head_to`."
- Si tu ne mets pas `*`, tu modifierais le pointeur lui-même (et ce n'est pas ce que tu veux).

---

### En résumé :

- **`*stack_to`** : Utilisé pour modifier directement la vraie pile (dans le programme principal).
- **`head_to`** : Utilisé pour travailler temporairement avec la tête de la pile, localement, sans affecter directement la vraie pile.

