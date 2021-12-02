#include <stdio.h>

void copy(char dst[], char src[])
{
	int i = 0;
	while ((dst[i] = src[i]) != '\0')
		++i;
}

int main()
{
	char arr1[100] = "hello, world";
	char arr2[100];
	copy(arr2, arr1);
	printf("arr2: %s", arr2);
}
