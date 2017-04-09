#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//(*st)[1].f
//(*((*st)+1)).f
//((*st)+1)->f

struct St
{
	int k;
	char ch;
	float f;
};


int main()
{
	setlocale(LC_ALL, "rus");

	struct St** st = malloc(sizeof(struct St));
	for (int i = 0; i < 3; i++)
	{
		st[i] = malloc(sizeof(struct St));
	}

	(*st)[0].k = 5;
	printf("%i\n", (*st)[0].k);

	(*((*st) + 1)).ch = 'H';
	printf("%c\n", (*((*st) + 1)).ch);

	((*st) + 1)->f = 5.5;
	printf("%.2f\n", ((*st) + 1)->f);

	for (int i = 0; i < 3; i++)
	{
		free(st[i]);
	}
	free(st);

	return 0;
}
