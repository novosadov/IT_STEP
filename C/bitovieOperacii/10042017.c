#include<stdio.h>
#include<locale.h>

//Битовые операции и поля


enum Character
{
	Korobka = 1 << 0,
	Kuzov = 1 << 1,
	Dvigatel = 1 << 2,
	RaspolRul  = 1 << 3,

};




void main()
{
	setlocale(LC_ALL, "rus");
	enum Character character;
	char car = 0;		
	int kor;
	int kuz;
	int dvig;
	int rasrul;


	printf("Выберите коробку \n1 - автомат\n2-механика\n");
	scanf("%i", &kor);
	if (kor == 1)
	{
		car = car | Korobka;
	}
	if (kor == 2)
	{
		car &= ~( Korobka);
	}
	else
	{
		printf("Error");

	}
	


	printf("Выберите кузов \n1 - грузовая\n2-легковая\n");
	scanf("%i", &kuz);
	if (kuz == 1)
	{
		car = car | Kuzov;
	}
	else
	{
		car &= ~(Kuzov);
	}


	printf("Выберите двигатель \n1 - электрический\n2-неэлектрический\n");
	scanf("%i", &dvig);
	if (dvig == 1)
	{
		car = car | Dvigatel;
	}
	else
	{
		car &= ~(Dvigatel);
	}


	printf("Выберите расположение руля \n1 - справа\n2-слева\n");
	scanf("%i", &rasrul);
	if (rasrul == 1)
	{
		car = car | RaspolRul;
	}
	else
	{
		car &= ~(RaspolRul);
	}
	
	
	printf("%i", car);



	/*
    y x |
-----------
	0 0 0
	1 1 1
	1 0 1
	0 1 1
-----------	 
	y x &
-----------
	0 0 0
	1 1 1
	1 0 0
	0 1 0
	*/


	/*
	Циклические сдвиги  
	x >>y  a<<b
	111 >> 2  сдвигаем на 2 элемента вправо, убираем две еденицы справа получаем 1
	111 << 2 добавляем 2 нуля справа получаем 11100
	В калькуляторе клавиши LSH RSH
	вкл второго бита
	char car = 0;
	car = car|1 << 2;  (вместо 2 надо писать define или enam
	*/



}
