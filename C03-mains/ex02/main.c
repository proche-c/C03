#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char string1[] = "Hola idiota";
	char string2[10] = "Adios";
	char *punt;

	punt = ft_strcat(string2, string1);
	printf("La cadena resultante es %s",punt);
}
