#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char s1[] = "Buenas t5rdes idiota";
	char s2[] = "Buenas tardes";
	int result;
	
	result = ft_strcmp(s1, s2);
	printf("El resultado es %d", result);
}
