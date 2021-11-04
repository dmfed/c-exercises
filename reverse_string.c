#include <stdio.h>
#include <string.h>


void reverse(char s[]) 
{
	int l = strlen(s);
	int mid = l/2;
	char tmp; 
	for (int i = 0; i < mid; ++i) 
	{
		tmp = s[i];
		s[i] = s[l-1-i];
		s[l-1-i] = tmp;
	}
}


int main() 
{
	char h[30];
	scanf("%s", h);
	printf("strlen(h) = %d\n", strlen(h));
	printf("initial: %s\n", h);
	reverse(h);	
	printf("reversed: %s\n", h);
	return 0;
}

