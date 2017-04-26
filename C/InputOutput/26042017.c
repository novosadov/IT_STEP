#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <string.h>

//Бинарный режим

struct Kurs
{
	float BynUsd;
	float UsdByn;
	float BynEuro;
	float EuroByn;
};

int main()
{
	setlocale(LC_ALL, "rus");
	struct Kurs* kurs = malloc( sizeof(struct Kurs));
	FILE* f = fopen("d:\\db.bin", "rb");
	if (f == NULL)
	{
		f = fopen("d:\\db.bin", "wb");

		struct Kurs kurs1 = { 1.8600, 1.8700, 2.0350, 2.0470 };
		fwrite(&kurs1, sizeof(struct Kurs), 1, f);
		printf("Byn to usd  = \t%.4f\n", kurs1.BynUsd);
		printf("Usd to byn = \t%.4f\n", kurs1.UsdByn);
		printf("Byn to euro = \t%.4f\n", kurs1.BynEuro);
		printf("Euro to byn = \t%.4f\n", kurs1.EuroByn);

		fclose(f);
		return 0;
	}	

	struct Kurs kurs2;
	fread(&kurs2, sizeof(struct Kurs), 1, f);
	printf("Byn to usd  = \t%.4f\n", kurs2.BynUsd);
	printf("Usd to byn = \t%.4f\n", kurs2.UsdByn);
	printf("Byn to euro = \t%.4f\n", kurs2.BynEuro);
	printf("Euro to byn = \t%.4f\n", kurs2.EuroByn);	

	fclose(f);
	free(kurs);
}
