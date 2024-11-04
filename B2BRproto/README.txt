# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.txt                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thofstet <thofstet@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 17:52:17 by thofstet          #+#    #+#              #
#    Updated: 2024/11/04 19:05:17 by thofstet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Born2BeRoot-README

Qu'est-ce qu'une machine virtuelle ?

Une machine virtuelle est comme un PC à l'intérieur du PC.
La virtualisation est l'action de faire fonctionner plusieurs
systèmes sur la même machine. Comme si un PC contenait plusieurs autres PC.

Nous allons prendre l'exemple d'un serveur en tant que machine, vu que
c'est ce que nous devons créer pour ce projet.

Composants d'un serveur :

Un serveur physique est composé de plusieurs parties "hardware" (matérielles).
Incluant une carte mère, un CPU (processeur), de la RAM (pour stocker les
informations temporaires), un disque dur pour stocker les informations sur un +
long terme, etc. Un système d'exploitation est installé par dessus tout ça et peut
contenir de multiples applications.

Une machine virtuelle va utiliser la partie hardware de la machine qui l'héberge
(CPU, etc.), mais tout le reste à l'intérieur sera différent.
La machine virtuelle peut bien évidemment avoir un OS différent, apps différentes, etc.

------------ Hyperviseur -----------

Un hyperviseur est un software qui permet de créer et lancer une ou de multiples
VM en même temps. Un hyperviseur est aussi connu en tant que moniteur de la VM (VMM),
et contrôle les ressources de la machine-hôte et alloue les ressources nécessaires à
chaque VM (CPU, mémoire, etc.), en faisant bien attention à ce que ces VM
n'interfèrent pas entre elles.

----------- VirtualBox -----------------

À 42, il est recommandé d'utiliser VirtualBox (ou UTM si VB ne fonctionne pas).
C'est un logiciel open-source. VB fonctionne en hyperviseur.

------------OS---------

Chaque machine fonctionne sur un OS (Operating System), qui est un groupe de
programmes qui permettent de lancer de d'utiliser la machine. C'est l'interface
entre la machine et l'utilisateur.
Dans B2BR, nous avons le choix entre Debian et Rocky. J'ai choisi Debian car il est
recommandé de la choisir si nous sommes novices.

Debian a été l'une des premières distributions Linux et est disponible depuis 1993.
Debian offre un haut degré de contrôle et de customisation de sa configuration.

Points-clés :

- Debian est très facile à mettre à jour

- Debian est + "user-friendly" (facilité de compréhension et d'utilisation) et
	supporte beaucoup de librairies, filesystems et d'architectures.


------ Utilité des VM -----------

Le premier point, très logique, est qu'il est moins cher et plus pratique d'installer
une VM que d'acheter un nouveau PC.

Une autre raison est que quand un serveur physique crash, cela peut être compliqué
de récupérer les datas qu'il contenait. L'aspect software d'une VM simplifie le backup.
Pendant qu'une VM est en fonctionnement, il est possible de faire un backup grâce à une
snapshot de la VM et de ses datas. En cas de problème, cette snapshot nous permet de
restaurer la VM à un état passé.

La virtualisation permet aussi d'augmenter la sécurité des datas en les partitionnant
et en isolant les services sur différents serveurs.
Chaque VM est isolée des autres, y compris du système-hôte.
Cela limite les risques de propagation en cas d'intrusion malware.
Et en + de ça, si une VM crash, les autres ne sont pas touchées.

Une VM permet aussi de tester des OS, ou pour tester toutes sortes de choses
(logiciels non-sûrs, etc.).
