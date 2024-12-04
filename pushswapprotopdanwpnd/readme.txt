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
