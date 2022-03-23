#include <stdio.h>

char *ft_strstr(char *src, char *to_find);

int main()
{
	char to_find[45] = "hola";
	char src[30] = "Atontado Hola idiota";
	char *punt;

	punt = ft_strstr(src, to_find);
	printf("El resultado es %s", punt);
}
