---------------------------get_next_line_utils.c

void	ft_bzero(void *s, size_t n)
{
	Sert à initialiser toute la string à 0.
	void *s -> argument indiquant la string à mettre à 0.
	size_t n -> longueur à initialiser à 0.
}


size_t ft_strlen(const char *str)
{
	Sert à mesurer la longueur d'une string.
	return la longueur de la string str.
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	Sert à concatener les strings s1 et s2 dans une new string.
	return (la nouvelle string (result)).
}

void	*ft_calloc(size_t count size_t size)
{
	Sert à malloc + bzero (tout init à 0).
}

char	*ft_strchr(const char *s, int c)
{
	Sert à trouver la première occurence de c dans la string s.
	Return(pointeur vers le caractère trouvé ou NULL si rien).
}


-------------get_next_line.c

char	*ft_free_buffer(char *buffer, char *buf)
{
	Sert à combiner buffer et buf dans une new string.
	Free ensuite buffer et return(la new string).
}

char	*ft_next(char *buffer)
{
	Sert à avancer buffer après le '\n'.
	Return(la data restante en tant que new_buffer).
}

char *ft_line(char *buffer)
{
	Extrait une ligne (jusqu-au '\n' inclus)
	de buffer et le return en tant que new string.
}

char *read_file(int fd, char *res)
{
	Lit la data depuis le fd donné en argument dans un
		buffer temporaire.
	Cette data est ajoutée a la string de resultat (res) jusqu'à
		ce qu'un '\n' soit trouvé, ou jusqu'à ce que la fin du fichier
		soit rencontrée (EOF End Of File).
	Cette fonction gère les allocation dynamiques de mémoire pour
		le buffer et la string de résultat.
		Si un '\n' est trouvé, la fonction arrête de lire + loin
			et return(la string de résultat mise à jour).
	Si une erreur se produit pendant la lecture, la fonction return(NULL)
		et free la mémoire.
	En résumé :
}
