#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src[30] = "Hola";
	char dest[45] = "Bonitoo";
	unsigned int result;
	unsigned int size;

	size = 12;
	result = ft_strlcat(dest, src, size);
	printf("El resultado es %s ", dest);
	printf("\n");
	printf("El tamano de src es %d ", result);
}
