#include <stdio.h>

int main()
{
	long chars;
	long lines;
	int c;
	while ((c = getchar()) != EOF)
	{
		++chars;
		if (c == '\n')
			++lines;
	}
	printf("total chars: %d\ntotal lines: %d\n", chars, lines);
}

