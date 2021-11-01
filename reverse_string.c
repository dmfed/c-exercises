#include <stdio.h>


void reverse(char s[], int l) {
	int i, j, mid;
	char tmp; 
	i = 0;
	mid = (l-1)/2;
	for (i = 0; i < mid; ++i) {
		tmp = s[i];
		s[i] = s[l-2-i];
		s[l-2-i] = tmp;
	}
}

int main() {
	char h[] = "olleh";
	printf("initial: %s\n", h);
	int l = sizeof(h) / sizeof(char);
	reverse(h, l);	
	printf("reversed: %s\n", h);
	return 0;
}

