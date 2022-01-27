#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char src[] = "Atontado";
	char dest[20] = "Adios";
	unsigned int nb;
	char *punt;
	
	nb = 9;
	punt = ft_strncat(dest, src, nb);
	printf("El resultado es %s", punt);
}
