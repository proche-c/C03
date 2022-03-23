#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1[] = "Hola idiota capullo";
	char s2[] = "Hola idiota";
	int result;
	unsigned int n;

	n = 13;
	result = ft_strncmp(s1, s2, n);
	printf("El resultado es %d.", result);
}

