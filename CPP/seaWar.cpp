#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

/*
Морской бой.
Сделать заставку.(Появляющаяся надпись "морской бой")
Сделать меню.
Создать два поля с координатами.(10х10)
Расставлять корабли по координатам (либо курсором мыши, либо клавиатурой)
Расставлять корабли с помощью стрелок направо, налево, вверх, вниз, 
пробел(ворочать корабли)(так же сделать расстановку автоматически)
Ячейки сделать разных цветов.
Всё остальное в процессе
*/

HANDLE hConsole;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void GotoXY(int X, int Y){  // устанавливает координаты курсора
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}

enum ConsoleColor            //Выбор цвета
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};
void SetColor(int text, int background){//задаёт цвет
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
 
void m() {
	SetColor(9, 0);
	cout << "\t\t\t\t\t\t" << "*          *" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "***      ***" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "** *   *  **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**  * *   **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**   *    **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	cout << endl;
}

void o() {
	SetColor(12, 0);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	cout << endl;
}

void p() {
	SetColor(14, 0);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**          " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**          " << endl;
	cout << endl;
}

void c() {
	SetColor(2, 0);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**          " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**          " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**          " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**          " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	cout << endl;
}

void k() {
	SetColor(9, 0);
	cout << "\t\t\t\t\t\t" << "**         *" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**      **  " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**   **     " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "****        " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**  **      " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**    **    " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**       ** " << endl;
	cout << endl;
}

void i() {
	SetColor(2, 0);
	cout << "\t\t\t\t\t\t" << "     **     " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**       ***" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**     ** **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**   **   **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "** **     **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	cout << endl;
}

void b() {
	SetColor(9, 0);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**          " << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "**        **" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	Sleep(50);
	cout << "\t\t\t\t\t\t" << "************" << endl;
	cout << endl;
}

void nadpis() {
	m();
	Sleep(100);
	o();
	Sleep(100);
	p();
	Sleep(100);
	c();
	Sleep(100);
	k();
	Sleep(100);
	o();
	Sleep(100);
	i();
	Sleep(1000);
	cout << endl << endl << endl << endl;
	b();
	Sleep(100);
	o();
	Sleep(100);
	i();
	Sleep(100);
}


int sheeps(int pole[10][10]){
	srand(time(NULL));
	int i, j, f, k, r;
	int rand_chislo, rand_chislo1, ts, s; 
	for (i = 0; i<10; i++)
		for (j = 0; j<10; j++)
			pole[i][j] = 0;
	do{
		f = 0;                                 
		rand_chislo = 0 + rand() % 10;
		rand_chislo1 = 0 + rand() % 10;

		ts = 1 + rand() % 4;

		if (ts == 1) {
			for (i = 0; i<3; i++) 
				if (rand_chislo == i)
					f = 1;
		}
		if (ts == 2){ 
			for (i = 7; i<10; i++) 
				if (rand_chislo == i)
					f = 1; 
		}
		if (ts == 3) { 
			for (i = 0; i<3; i++) 
				if (rand_chislo1 == i)
					f = 1; 
		}
		if (ts == 4) { 
			for (i = 7; i<10; i++) 
				if (rand_chislo1 == i)
					f = 1; 
		}
	} 
	while (f == 1);
	switch (ts) {
	case 1: pole[rand_chislo][rand_chislo1] = 1; 
		pole[rand_chislo - 1][rand_chislo1] = 1;
		pole[rand_chislo - 2][rand_chislo1] = 1; 
		pole[rand_chislo - 3][rand_chislo1] = 1; 
		break;
	case 2: pole[rand_chislo][rand_chislo1] = 1; 
		pole[rand_chislo + 1][rand_chislo1] = 1;
		pole[rand_chislo + 2][rand_chislo1] = 1; 
		pole[rand_chislo + 3][rand_chislo1] = 1; 
		break;
	case 3: pole[rand_chislo][rand_chislo1] = 1; 
		pole[rand_chislo][rand_chislo1 - 1] = 1;
		pole[rand_chislo][rand_chislo1 - 2] = 1; 
		pole[rand_chislo][rand_chislo1 - 3] = 1; 
		break;
	case 4: pole[rand_chislo][rand_chislo1] = 1; 
		pole[rand_chislo][rand_chislo1 + 1] = 1;
		pole[rand_chislo][rand_chislo1 + 2] = 1; 
		pole[rand_chislo][rand_chislo1 + 3] = 1; 
		break;
	}

	for (k = 0; k<3; k++){
		do {
			f = 0;
			rand_chislo = 0 + rand() % 10;
			rand_chislo1 = 0 + rand() % 10;

			ts = 1 + rand() % 4;

			if (ts == 1) {
				if (rand_chislo != 0) {
					for (i = rand_chislo - 2; i<rand_chislo + 2; i++)
						for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++){
							if (pole[i][j] != 0){
								f = 1; 
							}
						}
				}
				else 
					f = 1;
			}
			if (ts == 2){
				if (rand_chislo != 9){
					for (i = rand_chislo - 1; i <= rand_chislo + 2; i++)
						for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++){
							if (pole[i][j] != 0) { 
								f = 1; 
							}
						}
				}
				else f = 1;
			}
			if (ts == 3) {
				if (rand_chislo1 != 0) {
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
						for (j = rand_chislo1 - 2; j <= rand_chislo1 + 1; j++){
							if (pole[i][j] != 0) { 
								f = 1; 
							}
						}
				}
				else 
					f = 1;
			}
			if (ts == 4){
				if (rand_chislo1 != 9){
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
						for (j = rand_chislo1 - 1; j <= rand_chislo1 + 2; j++){
							if (pole[i][j] != 0) { 
								f = 1;
							}
						}
				}
				else f = 1;
			}
		}
		while (f == 1);
		switch (ts) {
		case 1: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo - 1][rand_chislo1] = 1; 
			break;
		case 2: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo + 1][rand_chislo1] = 1; 
			break;
		case 3: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo][rand_chislo1 - 1] = 1; 
			break;
		case 4: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo][rand_chislo1 + 1] = 1; 
			break;
		}
	}

	for (k = 0; k<2; k++){
		do {
			f = 0;
			rand_chislo = 0 + rand() % 10;
			rand_chislo1 = 0 + rand() % 10;

			ts = 1 + rand() % 4;

			if (ts == 1) {
				if (rand_chislo != 0 && rand_chislo != 1) {
					for (i = rand_chislo - 3; i<rand_chislo + 2; i++)
						for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++){
							if (pole[i][j] != 0) { 
								f = 1; 
							}
						}
				}
				else f = 1;
			}
			if (ts == 2) {
				if (rand_chislo != 9 && rand_chislo != 8) {
					for (i = rand_chislo - 1; i <= rand_chislo + 3; i++)
						for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++){
							if (pole[i][j] != 0) { 
								f = 1; 
							}
						}
				}
				else f = 1;
			}
			if (ts == 3) {
				if (rand_chislo1 != 0 && rand_chislo1 != 1) {
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
						for (j = rand_chislo1 - 3; j <= rand_chislo1 + 1; j++){
							if (pole[i][j] != 0) {
								f = 1; 
							}
						}
				}
				else f = 1;
			}
			if (ts == 4) {
				if (rand_chislo1 != 9 && rand_chislo1 != 8) {
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
						for (j = rand_chislo1 - 1; j <= rand_chislo1 + 3; j++){
							if (pole[i][j] != 0) { 
								f = 1; 
							}
						}
				}
				else f = 1;
			}
		} 
		while (f == 1);
		switch (ts) {
		case 1: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo - 1][rand_chislo1] = 1; 
			pole[rand_chislo - 2][rand_chislo1] = 1; 
			break;
		case 2: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo + 1][rand_chislo1] = 1; 
			pole[rand_chislo + 2][rand_chislo1] = 1; 
			break;
		case 3: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo][rand_chislo1 - 1] = 1; 
			pole[rand_chislo][rand_chislo1 - 2] = 1; 
			break;
		case 4: pole[rand_chislo][rand_chislo1] = 1; 
			pole[rand_chislo][rand_chislo1 + 1] = 1; 
			pole[rand_chislo][rand_chislo1 + 2] = 1; 
			break;
		}
	}

	for (i = 0; i<4; i++){
		do {
			rand_chislo = 0 + rand() % 10;
			rand_chislo1 = 0 + rand() % 10;
		} 
		while (pole[rand_chislo][rand_chislo1] != 0 || pole[rand_chislo + 1][rand_chislo1] != 0 || pole[rand_chislo - 1][rand_chislo1] != 0 || pole[rand_chislo][rand_chislo1 + 1] != 0 || pole[rand_chislo][rand_chislo1 - 1] != 0 || pole[rand_chislo + 1][rand_chislo1 + 1] != 0 || pole[rand_chislo - 1][rand_chislo1 - 1] != 0 || pole[rand_chislo + 1][rand_chislo1 - 1] != 0 || pole[rand_chislo - 1][rand_chislo1 + 1] != 0);
		pole[rand_chislo][rand_chislo1] = 1;
	}	
	return pole[10][10];
}


int ras(int mypole[10][10])
{
	system("cls");
	int i, j, x, y, u, f, e, w, nap, ui;
	SetColor(15, 0);
	cout<<"  A B C D E F J H I K\n";
	cout<<" "; 
	cout << "\t\t     "; 
	cout << " \n";
	cout << "1"; 
	cout << "\t\t     "; 
	cout << "1\n";
	cout << " "; 
	cout << "\t\t     "; 
	cout << " \n";
	cout << "2"; 
	cout << "\t\t     "; 
	cout << "2\n";
	cout << " "; 
	cout << "\t\t     "; 
	cout << " \n";
	cout << "3"; 
	cout << "\t\t     "; 
	cout << "3\n";
	cout << " "; 
	cout << "\t\t     "; 
	cout << " \n";
	cout << "4"; 
	cout << "\t\t     "; 
	cout << "4\n";
	cout << " "; 
	cout << "\t\t     "; 
	cout << " \n";
	cout << "5"; 
	cout << "\t\t     "; 
	cout << "5\n";
	cout << " "; 
	cout << "\t\t     "; 
	cout << " \n";
	cout << "6";
	cout << "\t\t     ";
	cout << "6\n";
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	cout << "7";
	cout << "\t\t     ";
	cout << "7\n";
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	cout << "8";
	cout << "\t\t     ";
	cout << "8\n";
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	cout << "9";
	cout << "\t\t     ";
	cout << "9\n";
	cout << "1";
	cout << "\t\t     ";
	cout << "1\n";
	cout << "0";
	cout << "\t\t     ";
	cout << "0\n";		
	cout << "  A B C D E F J H I K\n";


	GotoXY(40, 0); 
	cout << "  A B C D E F J H I K\n";
	GotoXY(40, 1); 
	cout << " "; 
	cout << "\t\t     "; 
	cout << " \n";
	GotoXY(40, 2); 
	cout << "1";
	cout << "\t\t     ";
	cout << "1\n";
	GotoXY(40, 3); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 4); 
	cout << "2";
	cout << "\t\t     ";
	cout << "2\n";
	GotoXY(40, 5); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 6); 
	cout << "3";
	cout << "\t\t     ";
	cout << "3\n";
	GotoXY(40, 7); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 8); 
	cout << "4";
	cout << "\t\t     ";
	cout << "4\n";
	GotoXY(40, 9); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 10); 
	cout << "5";
	cout << "\t\t     ";
	cout << "5\n";
	GotoXY(40, 11); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 12); 
	cout << "6";
	cout << "\t\t     ";
	cout << "6\n";
	GotoXY(40, 13); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 14); 
	cout << "7";
	cout << "\t\t     ";
	cout << "7\n";
	GotoXY(40, 15); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 16); 
	cout << "8";
	cout << "\t\t     ";
	cout << "8\n";
	GotoXY(40, 17); 
	cout << " ";
	cout << "\t\t     ";
	cout << " \n";
	GotoXY(40, 18); 
	cout << "9";
	cout << "\t\t     ";
	cout << "9\n";
	GotoXY(40, 19); 
	cout << "1";
	cout << "\t\t     ";
	cout << "1\n";
	GotoXY(40, 20); 
	cout << "0";
	cout << "\t\t     ";
	cout << "0\n";
	GotoXY(40, 21); 
	cout << "  A B C D E F J H I K\n";

	for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
		for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
			GotoXY(x, y);  
			if ((j + i) % 2 != 0) { 
				SetColor(0, 1); 
				cout << "  "; 
			}
			else { 
				SetColor(0, 9); 
				cout << "  "; 
			}
			GotoXY(x, y + 1); 
			if ((j + i) % 2 != 0) { 
				SetColor(0, 1); 
				cout << "  "; 
			}
			else { 
				SetColor(0, 9); 
				cout << "  "; 
			}
		}

	for (i = 0; i<10; i++)
		for (j = 0; j<10; j++)
			mypole[i][j] = 0;

	GotoXY(24, 7); 
	SetColor(15, 0); 
	cout << "поворот-space";
	GotoXY(24, 8); 
	SetColor(15, 0); 
	cout << "принять-enter";
	GotoXY(22, 9); 
	SetColor(15, 0); 
	cout << "управление-стрелки";
	GotoXY(23, 10); 
	SetColor(15, 0); 
	cout << "выход в меню-Esc";
	ui = 0;
	for (u = 1; u<5; u++){
		if (ui == 0)
			for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
				for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)				{
					GotoXY(x, y); 
					if (mypole[i][j] == 1) { 
						SetColor(0, 12); 
						cout << "  "; 
					}
					else { 
						if ((j + i) % 2 != 0) { 
							SetColor(0, 1);
							cout << "  "; 
						} 
						else { 
							SetColor(0, 9); 
							cout << "  "; 
						} 
					}
					GotoXY(x, y + 1); 
					if (mypole[i][j] == 1) { 
						SetColor(0, 12); 
						cout << "  "; 
					}
					else { 
						if ((j + i) % 2 != 0) { 
							SetColor(0, 1);
							cout << "  "; 
						} 
						else { 
							SetColor(0, 9); 
							cout << "  "; 
						} 
					}
				}

		switch (u){
		case 1:	{   
			x = 41; 
			y = nap = 1;
			i = j = 0;
			for (e = x; e<x + 8; e = e + 2){
			GotoXY(e, y); 
			SetColor(0, 14); 
			cout << "  ";
			GotoXY(e, y + 1); 
			SetColor(0, 14); 
			cout << "  ";
		}
		do {
			f = 0;
			int code = getch();
			if (code == 224){
				code = getch();
				switch (code){
				case 72:{
					if (y != 1){
						if (nap == 1){
							for (e = x; e<x + 8; e = e + 2){
								i = (e - 40) / 2;
								j = y / 2;
								GotoXY(e, y); 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  "; 
								}
								else { 
									SetColor(0, 9); 
									cout << "  "; 
								}
								GotoXY(e, y + 1); 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  "; 
								}
								else { 
									SetColor(0, 9); 
									cout << "  "; 
								}
							}
							y = y - 2;
							for (e = x; e<x + 8; e = e + 2){
								GotoXY(e, y); 
								SetColor(0, 14);
								cout << "  ";
								GotoXY(e, y + 1); 
								SetColor(0, 14); 
								cout << "  ";
							}
						}
						else{
							if (y != 33) {
								for (e = y; e<y + 8; e = e + 2){
									i = (x - 40) / 2;
									j = e / 2;
									GotoXY(x, e); 
									if ((i + j) % 2 != 0) { 
										SetColor(0, 1); 
										cout << "  "; 
									}
									else { SetColor(0, 9); 
									cout << "  "; 
									}
									GotoXY(x, e + 1);
									if ((i + j) % 2 != 0) { 
										SetColor(0, 1); 
										cout << "  "; 
									}
									else { 
										SetColor(0, 9); 
										cout << "  ";
									}
								}
								y = y - 2;
								for (e = y; e<y + 8; e = e + 2)	{
									GotoXY(x, e); 
									SetColor(0, 14); 
									cout << "  ";
									GotoXY(x, e + 1); 
									SetColor(0, 14);
									cout << "  ";
								}
							}
						}
					}
					break;
				}
				case 77:{
					if (nap == 1){
						if (x != 53){
							for (e = x; e<x + 8; e = e + 2){
								i = (e - 40) / 2;
								j = y / 2;
								GotoXY(e, y); 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  "; 
								}
								else { SetColor(0, 9);
								cout << "  "; 
								}
								GotoXY(e, y + 1); 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  "; 
								}
								else {
									SetColor(0, 9); 
									cout << "  "; 
								}
							}
							x = x + 2;
							for (e = x; e<x + 8; e = e + 2)
							{
								GotoXY(e, y); 
								SetColor(0, 14);
								cout << "  ";
								GotoXY(e, y + 1); 
								SetColor(0, 14); 
								cout << "  ";
							}
						}
					}
					else {
						if (x != 59) {
							for (e = y; e<y + 8; e = e + 2){
								i = (x - 40) / 2;
								j = e / 2;
								GotoXY(x, e); 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  "; 
								}
								else {
									SetColor(0, 9); 
									cout << "  ";
								}
								GotoXY(x, e + 1);
								if ((i + j) % 2 != 0) {
									SetColor(0, 1); 
									cout << "  "; 
								}
								else { 
									SetColor(0, 9); 
									cout << "  ";
								}
							}
							x = x + 2;
							for (e = y; e<y + 8; e = e + 2){
								GotoXY(x, e); 
								SetColor(0, 14); 
								cout << "  ";
								GotoXY(x, e + 1); 
								SetColor(0, 14); 
								cout << "  ";
							}
						}
					}
					break;
				}
				case 80:{
					if (nap == 1){
						if (y != 19){
							for (e = x; e<x + 8; e = e + 2) {
								i = (e - 40) / 2;
								j = y / 2;
								GotoXY(e, y); 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  ";
								}
								else { 
									SetColor(0, 9); 
									cout << "  "; 
								}
								GotoXY(e, y + 1);
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  "; 
								}
								else {
									SetColor(0, 9); 
									cout << "  "; 
								}
							}
							y = y + 2;
							for (e = x; e<x + 8; e = e + 2){
								GotoXY(e, y);
								SetColor(0, 14);
								cout << "  ";
								GotoXY(e, y + 1);
								SetColor(0, 14); 
								cout << "  ";
							}
						}
					}
					else {
						if (y != 13) {
							for (e = y; e<y + 8; e = e + 2){
								i = (x - 40) / 2;
								j = e / 2;
								GotoXY(x, e);
								if ((i + j) % 2 != 0) {
									SetColor(0, 1); 
									cout << "  "; 
								}
								else { 
									SetColor(0, 9); 
									cout << "  ";
								}
								GotoXY(x, e + 1);
								if ((i + j) % 2 != 0) {
									SetColor(0, 1);
									cout << "  "; 
								}
								else { 
									SetColor(0, 9); 
									cout << "  ";
								}
							}
							y = y + 2;
							for (e = y; e<y + 8; e = e + 2){
								GotoXY(x, e); 
								SetColor(0, 14); 
								cout << "  ";
								GotoXY(x, e + 1); 
								SetColor(0, 14); 
								cout << "  ";
							}
						}
					}
					break;
				}
				case 75:{
					if (nap == 1){
					if (x != 41){
						for (e = x; e<x + 8; e = e + 2) {
							i = (e - 40) / 2;
							j = y / 2;
							GotoXY(e, y); 
							if ((i + j) % 2 != 0) { 
								SetColor(0, 1); 
								cout << "  "; 
							}
							else { 
								SetColor(0, 9); 
								cout << "  ";
							}
							GotoXY(e, y + 1); 
							if ((i + j) % 2 != 0) { 
								SetColor(0, 1);
								cout << "  "; 
							}
							else { 
								SetColor(0, 9); 
								cout << "  ";
							}
						}
						x = x - 2;
						for (e = x; e<x + 8; e = e + 2){
							GotoXY(e, y); 
							SetColor(0, 14); 
							cout << "  ";
							GotoXY(e, y + 1);
							SetColor(0, 14); 
							cout << "  ";
						}
					}
				}
				else {
					if (x != 41) {
						for (e = y; e<y + 8; e = e + 2){
							i = (x - 40) / 2;
							j = e / 2;
							GotoXY(x, e); 
							if ((i + j) % 2 != 0) {
								SetColor(0, 1);
								cout << "  "; 
							}
							else {
								SetColor(0, 9);
								cout << "  "; 
							}
							GotoXY(x, e + 1); 
							if ((i + j) % 2 != 0) { 
								SetColor(0, 1); 
								cout << "  ";
							}
							else { 
								SetColor(0, 9); 
								cout << "  "; 
							}
						}
						x = x - 2;
						for (e = y; e<y + 8; e = e + 2)	{
							GotoXY(x, e); 
							SetColor(0, 14); 
							cout << "  ";
							GotoXY(x, e + 1);
							SetColor(0, 14);
							cout << "  ";
						}
					}
				}
				break;
				}
				}
			}

			else {
				switch (code) {
				case 32:{
					if (nap == 1 && y<15 || nap == -1 && x<55){
						nap = nap*(-1);
						if (nap == 1){
							for (e = y; e<y + 8; e = e + 2){
								i = (x - 40) / 2;
								j = e / 2;
								GotoXY(x, e); 
								if (mypole[i][j] == 1) { 
									SetColor(0, 12); 
									cout <<"  ";
								}
								else { 
									if ((i + j) % 2 != 0) {
									SetColor(0, 1); 
									cout << "  "; 
								} 
									else {
									SetColor(0, 9); 
									cout << "  ";
								} 
								}
								GotoXY(x, e + 1);
								if (mypole[i][j] == 1) { 
									SetColor(0, 12);
									cout << "  "; 
								}
								else { 
									if ((i + j) % 2 != 0) {
										SetColor(0, 1);
										cout << "  ";
									} 
									else {
										SetColor(0, 9);
										cout << "  ";
									}
								}
							}

							for (e = x; e<x + 8; e = e + 2){
								GotoXY(e, y); 
								SetColor(0, 14); 
								cout << "  ";
								GotoXY(e, y + 1); 
								SetColor(0, 14); 
								cout << "  ";
							}
						}
						else {
							for (e = x; e<x + 8; e = e + 2) {
								i = (e - 40) / 2;
								j = y / 2;
								GotoXY(e, y);
								if (mypole[i][j] == 1) {
									SetColor(0, 12);
									cout << "  "; 
								}
								else { 
									if ((i + j) % 2 != 0) {
										SetColor(0, 1);
										cout << "  ";
									}
									else { 
										SetColor(0, 9); 
										cout << "  ";
									} 
								}
								GotoXY(e, y + 1); 
								if (mypole[i][j] == 1) {
									SetColor(0, 12);
									cout << "  "; 
								}
								else {
									if ((i + j) % 2 != 0) { 
										SetColor(0, 1); 
										printf("  "); 
									} 
									else { 
										SetColor(0, 9); 
										cout << "  "; 
									} 
								}
							}

							for (e = y; e<y + 8; e = e + 2){
								GotoXY(x, e);
								SetColor(0, 14);
								cout << "  ";
								GotoXY(x, e + 1);
								SetColor(0, 14);
								cout << "  ";
							}
						}
					}
					break;
				}
				case 13: {
					if (nap == 1){
						for (e = x; e<x + 8; e = e + 2){
							i = (e - 40) / 2;
							j = y / 2;
							mypole[i][j] = 1;
						}
					}
					else {
						for (e = y; e<y + 8; e = e + 2){
							i = (x - 40) / 2;
							j = e / 2;
							mypole[i][j] = 1;
						}
					}
					f = 1; break;
				}
				case 27: {
					f = 1; ui = 1; break;
				}
				}
			}
		} 
		while (f != 1);
		break;
		}
		case 2:	{ 
			for (w = 0; w<2; w++)
			if (ui == 0){
				for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
					for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
						GotoXY(x, y); 
						if (mypole[i][j] == 1) {
							SetColor(0, 12); 
							cout << "  ";
						}
						else {
							if ((j + i) % 2 != 0) {
								SetColor(0, 1); 
								cout << "  "; 
							} 
							else { 
								SetColor(0, 9); 
								cout << "  "; 
							} 
						}
						GotoXY(x, y + 1);
						if (mypole[i][j] == 1) { 
							SetColor(0, 12); 
							cout << "  ";
						}
						else {
							if ((j + i) % 2 != 0) {
							SetColor(0, 1);
							cout << "  "; 
							}
							else {
								SetColor(0, 9);
								cout << "  "; 
							} 
						}
					}
				x = 41; y = nap = 1;
				i = j = 0;
				for (e = x; e<x + 6; e = e + 2){
					GotoXY(e, y); 
					SetColor(0, 14); 
					cout << "  ";
					GotoXY(e, y + 1);
					SetColor(0, 14); 
					cout << "  ";
				}
				do {
					f = 0;
					int code = getch();
					if (code == 224){
						code = getch();
						switch (code){
							{
						case 72:{
							if (y != 1)	{
								if (nap == 1){
									for (e = x; e<x + 6; e = e + 2){
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y);
										if (mypole[i][j] == 1) { 
											SetColor(0, 12); 
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) {
												SetColor(0, 1);
												cout << "  "; 
											}
											else { 
												SetColor(0, 9);
												cout << "  "; 
											}
										}
										GotoXY(e, y + 1);
										if (mypole[i][j] == 1) {
											SetColor(0, 12);
											cout << "  "; 
										}
										else {
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1);
												cout << "  "; 
											} 
											else { 
												SetColor(0, 9);
												cout << "  "; 
											} 
										}
									}
									y = y - 2;
									for (e = x; e<x + 6; e = e + 2){
										GotoXY(e, y);
										SetColor(0, 14);
										cout << "  ";
										GotoXY(e, y + 1); 
										SetColor(0, 14); 
										cout << "  ";
									}
								}
								else{
									if (y != 33) {
										for (e = y; e<y + 6; e = e + 2){
											i = (x - 40) / 2;
											j = e / 2;
											GotoXY(x, e);
											if (mypole[i][j] == 1) { 
												SetColor(0, 12);
												cout << "  ";
											}
											else {
												if ((i + j) % 2 != 0) {
													SetColor(0, 1);
													cout << "  "; 
												}
												else {
													SetColor(0, 9);
													cout << "  ";
												} 
											}
											GotoXY(x, e + 1); 
											if (mypole[i][j] == 1) {
												SetColor(0, 12);
												cout << "  ";
											}
											else { 
												if ((i + j) % 2 != 0) {
													SetColor(0, 1);
													cout << "  "; 
												} 
												else { 
													SetColor(0, 9);
													cout << "  ";
												} 
											}
										}
										y = y - 2;
										for (e = y; e<y + 6; e = e + 2){
											GotoXY(x, e);
											SetColor(0, 14); 
											cout << "  ";
											GotoXY(x, e + 1); 
											SetColor(0, 14);
											cout << "  ";
										}
									}
								}
							}
							break;
						}
						case 77:{
							if (nap == 1){
								if (x != 55){
									for (e = x; e<x + 6; e = e + 2) {
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y); 
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1); 
												cout << "  "; 
											} 
											else {
												SetColor(0, 9); 
												cout << "  "; 
											} 
										}
										GotoXY(e, y + 1); 
										if (mypole[i][j] == 1) { 
											SetColor(0, 12);
											cout << "  "; 
										}
										else { 
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1);
												cout << "  "; 
											}
											else {
												SetColor(0, 9);
												cout << "  "; 
											} 
										}
									}
									x = x + 2;
									for (e = x; e<x + 6; e = e + 2){
										GotoXY(e, y);
										SetColor(0, 14); 
										cout << "  ";
										GotoXY(e, y + 1);
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							else {
								if (x != 59) {
									for (e = y; e<y + 6; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										GotoXY(x, e); 
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  "; 
										}
										else {
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  "; 
											} 
										}
										GotoXY(x, e + 1); 
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  "; 
										}
										else { 
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1);
												cout << "  "; 
											} 
											else { 
												SetColor(0, 9); 
												cout << "  "; 
											}
										}
									}
									x = x + 2;
									for (e = y; e<y + 6; e = e + 2){
										GotoXY(x, e);
										SetColor(0, 14);
										cout << "  ";
										GotoXY(x, e + 1);
										SetColor(0, 14);
										cout << "  ";
									}
								}
							}
							break;
						}
						case 80:{
							if (nap == 1){
								if (y != 19){
									for (e = x; e<x + 6; e = e + 2) {
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y); 
										if (mypole[i][j] == 1) { 
											SetColor(0, 12); 
											cout << "  "; 
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											}
											else { 
												SetColor(0, 9); 
												cout << "  ";
											}
										}
										GotoXY(e, y + 1);
										if (mypole[i][j] == 1) {
											SetColor(0, 12);
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1);
												cout << "  ";
											} 
											else { 
												SetColor(0, 9);
												cout << "  "; 
											} 
										}
									}
									y = y + 2;
									for (e = x; e<x + 6; e = e + 2){
										GotoXY(e, y); 
										SetColor(0, 14);
										cout << "  ";
										GotoXY(e, y + 1);
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							else {
								if (y != 15) {
									for (e = y; e<y + 6; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										GotoXY(x, e); 
										if (mypole[i][j] == 1) { 
											SetColor(0, 12);
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1);
												cout << "  "; 
											}
											else { 
												SetColor(0, 9); 
												cout << "  ";
											}
										}
										GotoXY(x, e + 1);
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											}
											else {
												SetColor(0, 9); 
												cout << "  "; 
											} 
										}
									}
									y = y + 2;
									for (e = y; e<y + 6; e = e + 2){
										GotoXY(x, e);
										SetColor(0, 14);
										cout << "  ";
										GotoXY(x, e + 1);
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							break;
						}
						case 75:{ 
							if (nap == 1){
							if (x != 41)	{
								for (e = x; e<x + 6; e = e + 2) {
									i = (e - 40) / 2;
									j = y / 2;
									GotoXY(e, y); 
									if (mypole[i][j] == 1) {
										SetColor(0, 12); 
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										} 
										else { 
											SetColor(0, 9); 
											cout << "  "; 
										}
									}
									GotoXY(e, y + 1);
									if (mypole[i][j] == 1) {
										SetColor(0, 12); 
										cout << "  ";
									}
									else { 
										if ((i + j) % 2 != 0) {
											SetColor(0, 1);
											cout << "  "; 
										} 
										else { 
											SetColor(0, 9);
											cout << "  "; 
										} 
									}
								}
								x = x - 2;
								for (e = x; e<x + 6; e = e + 2){
									GotoXY(e, y); 
									SetColor(0, 14); 
									cout << "  ";
									GotoXY(e, y + 1); 
									SetColor(0, 14);
									cout << "  ";
								}
							}
						}
						else {
							if (x != 41) {
								for (e = y; e<y + 6; e = e + 2){
									i = (x - 40) / 2;
									j = e / 2;
									GotoXY(x, e); 
									if (mypole[i][j] == 1) { 
										SetColor(0, 12); 
										cout << "  "; 
									}
									else { 
										if ((i + j) % 2 != 0) { 
											SetColor(0, 1); 
											cout << "  "; 
										}
										else {
											SetColor(0, 9); 
											cout << "  ";
										}
									}
									GotoXY(x, e + 1); 
									if (mypole[i][j] == 1) {
										SetColor(0, 12);
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) { 
											SetColor(0, 1);
											cout << "  ";
										} 
										else { 
											SetColor(0, 9);
											cout << "  ";
										}
									}
								}
								x = x - 2;
								for (e = y; e<y + 6; e = e + 2){
									GotoXY(x, e);
									SetColor(0, 14); 
									cout << "  ";
									GotoXY(x, e + 1); 
									SetColor(0, 14); 
									cout << "  ";
								}
							}
						}
						break;
						}
							}
						}
					}
					else {
						switch (code) {
						case 32:{
							if (nap == 1 && y<17 || nap == -1 && x<57){
								nap = nap*(-1);
								if (nap == 1){
									for (e = y; e<y + 6; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										GotoXY(x, e);
										if (mypole[i][j] == 1) { 
											SetColor(0, 12); 
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  ";
											}
										}
										GotoXY(x, e + 1);
										if (mypole[i][j] == 1) { 
											SetColor(0, 12);
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) {
												SetColor(0, 1);
												cout << "  ";
											} 
											else { 
												SetColor(0, 9);
												cout << "  ";
											} 
										}
									}

									for (e = x; e<x + 6; e = e + 2){
										GotoXY(e, y);
										SetColor(0, 14); 
										cout << "  ";
										GotoXY(e, y + 1); 
										SetColor(0, 14);
										cout << "  ";
									}
								}
								else {
									for (e = x; e<x + 6; e = e + 2) {
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y);
										if (mypole[i][j] == 1) { 
											SetColor(0, 12);
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1);
												cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  ";
											} 
										}
										GotoXY(e, y + 1);
										if (mypole[i][j] == 1) {
											SetColor(0, 12);
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											}
											else {
												SetColor(0, 9);
												cout << "  ";
											} 
										}
									}

									for (e = y; e<y + 6; e = e + 2){
										GotoXY(x, e);
										SetColor(0, 14); 
										cout << "  ";
										GotoXY(x, e + 1);
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							break;
						}
						case 13: {
							int pr = f = 0;
							if (nap == 1){
								for (e = x - 2; e <= x + 6; e = e + 2)
									for (int a = y - 2; a <= y + 2; a = a + 2){
										i = (e - 40) / 2;
										j = a / 2;
										if (i<10 && j<10)
											if (mypole[i][j] == 1)
											pr = 1;
									}
								if (pr == 0)
									for (e = x; e<x + 6; e = e + 2){
										i = (e - 40) / 2;
										j = y / 2;
										mypole[i][j] = 1; f = 1;
									}
							}
							else {
								for (e = y - 2; e <= y + 6; e = e + 2)
									for (int a = x - 2; a <= x + 2; a = a + 2){
										i = (a - 40) / 2;
										j = e / 2;
										if (i<10 && j<10)if (mypole[i][j] == 1)
											pr = 1;
									}
								if (pr == 0)
									for (e = y; e<y + 6; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										mypole[i][j] = 1; f = 1;
									}
							}
							break;
						}
						case 27: {
							f = 1; ui = 1; break;
						}
						}
					}

				} while (f != 1);
			}
		break;
		}
		case 3:	{ 
			for (w = 0; w<3; w++)
			if (ui == 0){
				for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
					for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
						GotoXY(x, y); 
						if (mypole[i][j] == 1) { 
							SetColor(0, 12); 
							cout << "  ";
						}
						else { 
							if ((j + i) % 2 != 0) { 
							SetColor(0, 1); 
							cout << "  ";
							} 
							else {
								SetColor(0, 9);
								cout << "  ";
							} 
						}
						GotoXY(x, y + 1); 
						if (mypole[i][j] == 1) {
							SetColor(0, 12);
							cout << "  ";
						}
						else {
							if ((j + i) % 2 != 0) {
								SetColor(0, 1);
								cout << "  ";
							} 
							else { 
								SetColor(0, 9); 
								cout << "  ";
							} 
						}
					}
				x = 41; y = nap = 1;
				i = j = 0;
				for (e = x; e<x + 4; e = e + 2){
					GotoXY(e, y);
					SetColor(0, 14);
					cout << "  ";
					GotoXY(e, y + 1); 
					SetColor(0, 14); 
					cout << "  ";
				}
				do {
					f = 0;
					int code = getch();
					if (code == 224){
						code = getch();
						switch (code){
						case 72:{
							if (y != 1){
								if (nap == 1){
									for (e = x; e<x + 4; e = e + 2){
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y); 
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1); 
												cout << "  ";
											} 
											else { 
												SetColor(0, 9);
												cout << "  ";
											} 
										}
										GotoXY(e, y + 1); 
										if (mypole[i][j] == 1) {
											SetColor(0, 12);
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1); 
												cout << "  ";
											} 
											else { 
												SetColor(0, 9); 
												cout << "  ";
											} 
										}
									}
									y = y - 2;
									for (e = x; e<x + 4; e = e + 2){
										GotoXY(e, y);
										SetColor(0, 14); 
										cout << "  ";
										GotoXY(e, y + 1);
										SetColor(0, 14);
										cout << "  ";
									}
								}
								else{
									if (y != 33) {
										for (e = y; e<y + 4; e = e + 2){
											i = (x - 40) / 2;
											j = e / 2;
											GotoXY(x, e);
											if (mypole[i][j] == 1) {
												SetColor(0, 12); 
												cout << "  ";
											}
											else {
												if ((i + j) % 2 != 0) {
													SetColor(0, 1);
													cout << "  ";
												} 
												else { 
													SetColor(0, 9); 
													cout << "  ";
												}
											}
											GotoXY(x, e + 1);
											if (mypole[i][j] == 1) {
												SetColor(0, 12); 
												cout << "  ";
											}
											else {
												if ((i + j) % 2 != 0) { 
													SetColor(0, 1); 
													printf("  "); cout << "  ";
												} 
												else {
													SetColor(0, 9); 
													cout << "  ";
												}
											}
										}
										y = y - 2;
										for (e = y; e<y + 4; e = e + 2){
											GotoXY(x, e);
											SetColor(0, 14);
											cout << "  ";
											GotoXY(x, e + 1);
											SetColor(0, 14);
											cout << "  ";
										}
									}
								}
							}
							break;
						}
						case 77:{
							if (nap == 1){
								if (x != 57){
									for (e = x; e<x + 4; e = e + 2) {
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y);
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											} 
											else { 
												SetColor(0, 9);
												cout << "  ";
											} 
										}
										GotoXY(e, y + 1);
										if (mypole[i][j] == 1) { 
											SetColor(0, 12); 
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1);
												cout << "  ";
											} 
											else { 
												SetColor(0, 9); 
												cout << "  ";
											} 
										}
									}
									x = x + 2;
									for (e = x; e<x + 4; e = e + 2){
										GotoXY(e, y); 
										SetColor(0, 14); 
										cout << "  ";
										GotoXY(e, y + 1);
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							else {
								if (x != 59) {
									for (e = y; e<y + 4; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										GotoXY(x, e);
										if (mypole[i][j] == 1) {
											SetColor(0, 12);
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											} 
											else { 
												SetColor(0, 9);
												cout << "  ";
											} 
										}
										GotoXY(x, e + 1);
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1);
												cout << "  ";
											}
											else { 
												SetColor(0, 9);
												cout << "  ";
											}
										}
									}
									x = x + 2;
									for (e = y; e<y + 4; e = e + 2){
										GotoXY(x, e);
										SetColor(0, 14); 
										cout << "  ";
										GotoXY(x, e + 1); 
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							break;
						}
						case 80:{
							if (nap == 1){
								if (y != 19){
									for (e = x; e<x + 4; e = e + 2) {
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y);
										if (mypole[i][j] == 1) {
											SetColor(0, 12);
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  ";
											}
										}
										GotoXY(e, y + 1); 
										if (mypole[i][j] == 1) { 
											SetColor(0, 12);
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  ";
											}
										}
									}
									y = y + 2;
									for (e = x; e<x + 4; e = e + 2){
										GotoXY(e, y);
										SetColor(0, 14);
										cout << "  ";
										GotoXY(e, y + 1);
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							else {
								if (y != 17) {
									for (e = y; e<y + 4; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										GotoXY(x, e); 
										if (mypole[i][j] == 1) { 
											SetColor(0, 12); 
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1);
												cout << "  ";
											} 
											else { 
												SetColor(0, 9);
												cout << "  ";
											}
										}
										GotoXY(x, e + 1); 
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else {
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1); 
												cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  ";
											} 
										}
									}
									y = y + 2;
									for (e = y; e<y + 4; e = e + 2){
										GotoXY(x, e); 
										SetColor(0, 14); 
										cout << "  ";
										GotoXY(x, e + 1);
										SetColor(0, 14);
										cout << "  ";
									}
								}
							}
							break;
						}
						case 75:{ 
							if (nap == 1){
							if (x != 41){
								for (e = x; e<x + 4; e = e + 2) {
									i = (e - 40) / 2;
									j = y / 2;
									GotoXY(e, y);
									if (mypole[i][j] == 1) 
									{ SetColor(0, 12);
									cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) {
											SetColor(0, 1); 
											cout << "  ";
										}
										else { 
											SetColor(0, 9); 
											cout << "  ";
										}
									}
									GotoXY(e, y + 1); 
									if (mypole[i][j] == 1) {
										SetColor(0, 12);
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) { 
											SetColor(0, 1);
											cout << "  ";
										} 
										else { 
											SetColor(0, 9);
											cout << "  ";
										} 
									}
								}
								x = x - 2;
								for (e = x; e<x + 4; e = e + 2){
									GotoXY(e, y);
									SetColor(0, 14);
									cout << "  ";
									GotoXY(e, y + 1);
									SetColor(0, 14); 
									cout << "  ";
								}
							}
						}
						else {
							if (x != 41) {
								for (e = y; e<y + 4; e = e + 2){
									i = (x - 40) / 2;
									j = e / 2;
									GotoXY(x, e);
									if (mypole[i][j] == 1) {
										SetColor(0, 12); 
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										} 
										else {
											SetColor(0, 9);
											cout << "  ";
										}
									}
									GotoXY(x, e + 1);
									if (mypole[i][j] == 1) {
										SetColor(0, 12); 
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) { 
										SetColor(0, 1); 
										cout << "  ";
										}
										else { 
											SetColor(0, 9); 
											cout << "  ";
										} 
									}
								}
								x = x - 2;
								for (e = y; e<y + 4; e = e + 2){
									GotoXY(x, e);
									SetColor(0, 14);
									cout << "  ";
									GotoXY(x, e + 1); 
									SetColor(0, 14);
									cout << "  ";
								}
							}
						}
						break;
						}
						}
					}
					else {
						switch (code) {
						case 32:{
							if (nap == 1 && y<19 || nap == -1 && x<59){
								nap = nap*(-1);
								if (nap == 1){
									for (e = y; e<y + 4; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										GotoXY(x, e); 
										if (mypole[i][j] == 1) { 
											SetColor(0, 12);
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1); 
												cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  ";
											} 
										}
										GotoXY(x, e + 1);
										if (mypole[i][j] == 1) { 
											SetColor(0, 12); 
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1);
												cout << "  ";
											}
											else {
												SetColor(0, 9);
												cout << "  ";
											}
										}
									}
									for (e = x; e<x + 4; e = e + 2){
										GotoXY(e, y);
										SetColor(0, 14);
										cout << "  ";
										GotoXY(e, y + 1); 
										SetColor(0, 14); 
										cout << "  ";
									}
								}
								else {
									for (e = x; e<x + 4; e = e + 2) {
										i = (e - 40) / 2;
										j = y / 2;
										GotoXY(e, y);
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) {
												SetColor(0, 1);
												cout << "  ";
											} 
											else {
												SetColor(0, 9);
												cout << "  ";
											}
										}
										GotoXY(e, y + 1); 
										if (mypole[i][j] == 1) {
											SetColor(0, 12); 
											cout << "  ";
										}
										else { 
											if ((i + j) % 2 != 0) { 
												SetColor(0, 1); 
												cout << "  ";
											}
											else {
												SetColor(0, 9);
												cout << "  ";
											} 
										}
									}
									for (e = y; e<y + 4; e = e + 2){
										GotoXY(x, e);
										SetColor(0, 14);
										cout << "  ";
										GotoXY(x, e + 1);
										SetColor(0, 14); 
										cout << "  ";
									}
								}
							}
							break;
						}
						case 13: {
							int pr = f = 0;
							if (nap == 1){
								for (e = x - 2; e <= x + 4; e = e + 2)
									for (int a = y - 2; a <= y + 2; a = a + 2){
										i = (e - 40) / 2;
										j = a / 2;
										if (i<10 && j<10)
											if (mypole[i][j] == 1)
											pr = 1;
									}
								if (pr == 0)
									for (e = x; e<x + 4; e = e + 2){
										i = (e - 40) / 2;
										j = y / 2;
										mypole[i][j] = 1; f = 1;
									}
							}
							else {
								for (e = y - 2; e <= y + 4; e = e + 2)
									for (int a = x - 2; a <= x + 2; a = a + 2){
										i = (a - 40) / 2;
										j = e / 2;
										if (i<10 && j<10)
											if (mypole[i][j] == 1)
											pr = 1;
									}
								if (pr == 0)
									for (e = y; e<y + 4; e = e + 2){
										i = (x - 40) / 2;
										j = e / 2;
										mypole[i][j] = 1; f = 1;
									}
							}
							break;
						}
						case 27: {
							f = 1; ui = 1; break; 
						}
						}
					}

				} while (f != 1);
			}
		break;
		}
		case 4:{
			for (w = 0; w<4; w++)
			if (ui == 0){
				for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
					for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
						GotoXY(x, y);
						if (mypole[i][j] == 1) { 
							SetColor(0, 12); 
							cout << "  ";
						}
						else {
							if ((j + i) % 2 != 0) {
								SetColor(0, 1);
								cout << "  ";
							} 
							else { 
								SetColor(0, 9); 
								cout << "  ";
							}
						}
						GotoXY(x, y + 1);
						if (mypole[i][j] == 1) {
							SetColor(0, 12);
							cout << "  ";
						}
						else {
							if ((j + i) % 2 != 0) { 
								SetColor(0, 1); 
								cout << "  ";
							}
							else { 
								SetColor(0, 9); 
								cout << "  ";
							} 
						}
					}
				x = 41; y = 1;
				i = j = 0;
				e = x;{
					GotoXY(e, y); 
					SetColor(0, 14); 
					cout << "  ";
					GotoXY(e, y + 1);
					SetColor(0, 14); 
					cout << "  ";
				}
				do {
					f = 0;
					int code = getch();
					if (code == 224){
						code = getch();
						switch (code){
						case 72:{
							if (y != 1){
								e = x;{
									i = (e - 40) / 2;
									j = y / 2;
									GotoXY(e, y);
									if (mypole[i][j] == 1) {
										SetColor(0, 12); 
										cout << "  ";
									}
									else { 
										if ((i + j) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										}
										else {
											SetColor(0, 9);
											cout << "  ";
										}
									}
									GotoXY(e, y + 1);
									if (mypole[i][j] == 1) {
										SetColor(0, 12);
										cout << "  ";
									}
									else { 
										if ((i + j) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										} else { SetColor(0, 9); 
										cout << "  ";
										}
									}
								}
								y = y - 2;
								e = x;
								{
									GotoXY(e, y);
									SetColor(0, 14); 
									cout << "  ";
									GotoXY(e, y + 1); 
									SetColor(0, 14); 
									cout << "  ";
								}
							}
							break;
						}
						case 77:{

							if (x != 59){
								e = x; {
									i = (e - 40) / 2;
									j = y / 2;
									GotoXY(e, y); 
									if (mypole[i][j] == 1) {
										SetColor(0, 12); 
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) { 
											SetColor(0, 1); 
											cout << "  ";
										} 
										else { 
											SetColor(0, 9); 
											cout << "  ";
										}
									}
									GotoXY(e, y + 1); 
									if (mypole[i][j] == 1) { 
										SetColor(0, 12); 
										cout << "  ";
									}
									else { 
										if ((i + j) % 2 != 0) { 
											SetColor(0, 1);
											cout << "  ";
										}
										else {
											SetColor(0, 9);
											cout << "  ";
										}
									}
								}
								x = x + 2;
								e = x;{
									GotoXY(e, y);
									SetColor(0, 14);
									cout << "  ";
									GotoXY(e, y + 1);
									SetColor(0, 14); 
									cout << "  ";
								}
							}
							break;
						}
						case 80:{
							if (y != 19){
								e = x; {
									i = (e - 40) / 2;
									j = y / 2;
									GotoXY(e, y); 
									if (mypole[i][j] == 1) { 
										SetColor(0, 12); 
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) {
											SetColor(0, 1); 
											cout << "  ";
										} 
										else {
											SetColor(0, 9);
											cout << "  ";
										}
									}
									GotoXY(e, y + 1); 
									if (mypole[i][j] == 1) {
										SetColor(0, 12);
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										}
										else { 
											SetColor(0, 9);
											cout << "  ";
										}
									}
								}
								y = y + 2;
								e = x;{
									GotoXY(e, y);
									SetColor(0, 14);
									cout << "  ";
									GotoXY(e, y + 1);
									SetColor(0, 14);
									cout << "  ";
								}
							}
							break;
						}
						case 75:{
							if (x != 41){
								e = x; {
									i = (e - 40) / 2;
									j = y / 2;
									GotoXY(e, y);
									if (mypole[i][j] == 1) { 
										SetColor(0, 12); 
										cout << "  ";
									}
									else {
										if ((i + j) % 2 != 0) { 
											SetColor(0, 1); 
											cout << "  ";
										}
										else { 
											SetColor(0, 9);
											cout << "  ";
										} 
									}
									GotoXY(e, y + 1);
									if (mypole[i][j] == 1) { 
										SetColor(0, 12); 
										cout << "  ";
									}
									else { 
										if ((i + j) % 2 != 0) {
											SetColor(0, 1); 
											cout << "  ";
										}
										else {
											SetColor(0, 9); 
											cout << "  ";
										}
									}
								}
								x = x - 2;
								e = x;{
									GotoXY(e, y); 
									SetColor(0, 14);
									cout << "  ";
									GotoXY(e, y + 1);
									SetColor(0, 14);
									cout << "  ";
								}
							}
							break;
						}
						}
					}
					else {
						switch (code) {
						case 13: {
							int pr = f = 0;
							for (e = x - 2; e <= x + 2; e = e + 2)
								for (int a = y - 2; a <= y + 2; a = a + 2){
									i = (e - 40) / 2;
									j = a / 2;
									if (i<10 && j<10)
										if (mypole[i][j] == 1)
										pr = 1;
								}
							if (pr == 0)
								for (e = x; e<x + 2; e = e + 2){
									i = (e - 40) / 2;
									j = y / 2;
									mypole[i][j] = 1; f = 1;
								}
							break;
						}
						case 27: {f = 1; ui = 1; break; }

								 break;
						}
					}

				} while (f != 1);

			}


		break;
		}

		break;
		}
	}

	return ui;
}

int menu()
{
	int f = 1, k;
	SetColor(0, 0);
	system("cls");
	GotoXY(30, 10);
	SetColor(15, 0);
	cout <<"Главное меню";
	GotoXY(30, 12); 
	SetColor(15, 0); 
	cout << "["; 
	SetColor(0, 2);
	cout << "Новая игра"; 
	SetColor(15, 0); 
	cout << "]";
	GotoXY(32, 13);
	SetColor(15, 0);
	cout << "["; 
	cout << "выход";
	SetColor(15, 0);
	cout << "]";
	do {
		k = 0;
		int code = getch();
		if (code == 224){
			code = getch();
			switch (code){
			case 80: {f = f*(-1);
				if (f == 1) {
					GotoXY(30, 12); 
					SetColor(15, 0);
					cout << "["; 
					SetColor(0, 2); 
					cout << "Новая игра";
					SetColor(15, 0);
					cout << "]";
					GotoXY(32, 13);
					SetColor(15, 0);
					cout << "[выход]";
				}
				else {
					GotoXY(30, 12);
					SetColor(15, 0); 
					cout << "[";
					cout << "Новая игра";
					cout << "]";
					GotoXY(32, 13);
					SetColor(15, 0);
					cout << "["; 
					SetColor(0, 2); 
					cout << "выход"; 
					SetColor(15, 0); 
					cout << "]";
				}
				break;
			}
			case 72: {
				f = f*(-1);
				if (f == 1) {
					GotoXY(30, 12); 
					SetColor(15, 0); 
					cout << "[";
					SetColor(0, 2);
					cout << "Новая игра";
					SetColor(15, 0);
					cout << "]";
					GotoXY(32, 13); 
					SetColor(15, 0);
					cout << "[выход]";
				}
				else {
					GotoXY(30, 12); 
					SetColor(15, 0);
					cout << "[";
					cout << "Новая игра";
					cout << "]";
					GotoXY(32, 13); 
					SetColor(15, 0);
					cout << "["; 
					SetColor(0, 2);
					cout << "выход"; 
					SetColor(15, 0); 
					cout << "]";
				}
				break;
			}
			}
		}

		else {
			switch (code){
			case 13: k = 1;
				break;
			}
		}
	} while (k == 0);
	return f;
}

int comp(int mypole[10][10], int udar, int ud[2], int hod[1]){
	int i, j, f, per, n, m, x, y, k, str, sto, h, g;
	int pri, prj;

	srand(time(NULL)); 
	GotoXY(24, 14); 
	SetColor(15, 0); 
	cout << "  Ходит комп ";
	do {
		f = 1;
		per = 0; 
		k = 0; 
		GotoXY(28, 16);
		SetColor(15, 0); 
		cout << "      "; 
		Sleep(1000);

		h = 0; if (hod[0] == 5) {
			for (n = ud[0] - 1; n <= ud[0] + 1 && n<10; n++)
				for (m = ud[1] - 1; m <= ud[1] + 1 && m<10; m++)
					if (mypole[n][m] == 1){
						h = 1;
					}
			if (h == 0){
				mypole[ud[0]][ud[1]] = 5;
				for (n = ud[0] - 1; n <= ud[0] + 1 && n<10; n++)
					for (m = ud[1] - 1; m <= ud[1] + 1 && m<10; m++)
						if (mypole[n][m] == 0){
							mypole[n][m] = 3;
						}
			}
			if (h == 1) {
				per = 1; srand(time(NULL));
				do {
					pri = 1 + rand() % 4; prj = 0;
					switch (pri) {
					case 1:{
						if (mypole[ud[0] - 1][ud[1]] == 0 && ud[0] != 0) {
							mypole[ud[0] - 1][ud[1]] = 3;
							GotoXY(28, 16); 
							SetColor(15, 0); 
							Sleep(1000); 
							cout << "Мимо!";
							prj = 1;
							per = 1;
							f = 1; 
						}
					if (mypole[ud[0] - 1][ud[1]] == 1 && ud[0] != 0) { 
						mypole[ud[0] - 1][ud[1]] = 4;
						GotoXY(28, 16); 
						SetColor(15, 0);
						cout << "Попал!"; 
						udar++;
						Sleep(1000);
						cout << "\x07";
						f = 0;
						prj = 1;
						per = 1;
						hod[0] = 1;
					}
					break; }
					case 2:{
						if (mypole[ud[0] + 1][ud[1]] == 0 && ud[0] != 9) {
							mypole[ud[0] + 1][ud[1]] = 3;
							GotoXY(28, 16); 
							SetColor(15, 0); 
							Sleep(1000); 
							cout << "Мимо!"; 
							prj = 1; 
							per = 1; 
							f = 1; 
						}
					if (mypole[ud[0] + 1][ud[1]] == 1 && ud[0] != 9) {
						mypole[ud[0] + 1][ud[1]] = 4; 
						GotoXY(28, 16); 
						SetColor(15, 0);
						cout << "Попал!";
						udar++;
						Sleep(1000);
						cout << "\x07";
						f = 0; 
						prj = 1; 
						per = 1; 
						hod[0] = 1; 
					}
					break; 
					}
					case 3: {
						if (mypole[ud[0]][ud[1] - 1] == 0 && ud[1] != 0) { 
							mypole[ud[0]][ud[1] - 1] = 3;
							GotoXY(28, 16); 
							SetColor(15, 0);
							Sleep(1000);
							cout << "Мимо!";
							prj = 1;
							per = 1;
							f = 1;
						}
							if (mypole[ud[0]][ud[1] - 1] == 1 && ud[1] != 0) {
								mypole[ud[0]][ud[1] - 1] = 4;
								GotoXY(28, 16);
								SetColor(15, 0); 
								cout << "Попал!"; 
								udar++; 
								Sleep(1000); 
								cout << "\x07";
								f = 0;
								prj = 1;
								per = 1; 
								hod[0] = 1; 
							}
							break; 
					}
					case 4: {
						if (mypole[ud[0]][ud[1] + 1] == 0 && ud[1] != 9) { 
							mypole[ud[0]][ud[1] + 1] = 3;
							GotoXY(28, 16);
							SetColor(15, 0); 
							Sleep(1000);
							cout << "Мимо!";
							prj = 1;
							per = 1;
							f = 1;
						}
							if (mypole[ud[0]][ud[1] + 1] == 1 && ud[1] != 9) {
								mypole[ud[0]][ud[1] + 1] = 4;
								GotoXY(28, 16);
								SetColor(15, 0);
								cout << "Попал!";
								udar++; 
								Sleep(1000);
								cout << "\x07";
								f = 0;
								prj = 1;
								per = 1;
								hod[0] = 1;
							}
							break; 
					}
					}
				} 
				while (prj == 0);
			}
		}

		if (hod[0] == 1){
			for (i = 0; i<10; i++)
				for (j = 0; j<10; j++){
					h = 0;
					if (mypole[i][j] == 4 || mypole[i][j] == 5){
						mypole[i][j] = 5;
						if (i>0) {
							if (mypole[i - 1][j] == 1) {
								h = 1; 
								mypole[i - 1][j] = 5;
								GotoXY(28, 16);
								SetColor(15, 0);
								cout << "Попал!"; 
								Sleep(1000); 
								cout << "\x07";
								for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
									for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
										GotoXY(x, y); 
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										}
											   else {
												   SetColor(0, 9);
												   cout << "  ";
											   }
											   break;
										case 1:SetColor(0, 12); 
											cout << "  ";
											break;
										case 2:SetColor(0, 7); 
											cout << "  ";
											break;
										case 3: SetColor(0, 11);
											cout << "  "; 
											break;
										case 4:SetColor(0, 7);
											cout << "  ";
											break;
										case 5:SetColor(0, 7); 
											 cout << "  ";
											break;
										}
										GotoXY(x, y + 1); 
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) {
											SetColor(0, 1); printf("  "); }
											   else { SetColor(0, 9); 
											   cout << "  ";
											   }
											   break;
										case 1:SetColor(0, 12);
											cout << "  ";
											break;
										case 2:SetColor(0, 7);
											cout << "  ";
											break;
										case 3:SetColor(0, 11); 
											cout << "  ";
											break;
										case 4:SetColor(0, 7);
											cout << "  ";
											break;
										case 5:SetColor(0, 7);
											cout << "  ";
											break;
										}
									}
							}
						}
						if (i<9) {
							if (mypole[i + 1][j] == 1) {
								h = 1;
								mypole[i + 1][j] = 5; GotoXY(28, 16); 
								SetColor(15, 0);
								cout << "Попал!"; 
								Sleep(1000);
								cout << "\x07";
								for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
									for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
										GotoXY(x, y); 
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										}
											   else { SetColor(0, 9); 
											   cout << "  ";
											   }
											   break;
										case 1:SetColor(0, 12); 
											cout << "  ";
											break;
										case 2:SetColor(0, 7); 
											cout << "  ";
											break;
										case 3: SetColor(0, 11);
											cout << "  ";
											break;
										case 4:SetColor(0, 7); 
											cout << "  ";
											break;
										case 5:SetColor(0, 7); 
											cout << "  ";
											break;
										}
										GotoXY(x, y + 1);
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) { 
											SetColor(0, 1); 
											 cout << "  ";
										}
											   else { SetColor(0, 9);
											   cout << "  ";
											   }break;
										case 1:SetColor(0, 12);
											cout << "  ";
											break;
										case 2:SetColor(0, 7); 
											cout << "  ";
											break;
										case 3:SetColor(0, 11);
											cout << "  ";
											break;
										case 4:SetColor(0, 7);
											cout << "  ";
											break;
										case 5:SetColor(0, 7);
											cout << "  ";
											break;
										}
									}
							}
						}
						if (j>0) {
							if (mypole[i][j - 1] == 1) {
								h = 1;
								mypole[i][j - 1] = 5; 
								GotoXY(28, 16);
								SetColor(15, 0); 
								cout << "Попал!";
								Sleep(1000); 
								cout<<"\x07";
								for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
									for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
										GotoXY(x, y); 
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) { 
											SetColor(0, 1); 
											cout << "  ";
										}
											   else { SetColor(0, 9);
											   cout << "  ";
											   }
											   break;
										case 1:SetColor(0, 12);
											cout << "  ";
											break;
										case 2:SetColor(0, 7); 
											cout << "  ";
											break;
										case 3: SetColor(0, 11); 
											cout << "  ";
											break;
										case 4:SetColor(0, 7); 
											cout << "  ";
											break;
										case 5:SetColor(0, 7);
											cout << "  ";
											break;
										}
										GotoXY(x, y + 1); 
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										}
											   else { SetColor(0, 9);
											    cout << "  ";
											   }
											   break;
										case 1:SetColor(0, 12); 
											cout << "  ";
											break;
										case 2:SetColor(0, 7);
											cout << "  ";
											break;
										case 3:SetColor(0, 11);
											cout << "  ";
											break;
										case 4:SetColor(0, 7);
											cout << "  ";
											break;
										case 5:SetColor(0, 7);
											cout << "  "; break;
										}
									}
							}
						}
						if (j<9) {
							if (mypole[i][j + 1] == 1) {
								h = 1;
								mypole[i][j + 1] = 5;
								GotoXY(28, 16);
								SetColor(15, 0); 
								cout<<"Попал!";
								Sleep(1000);
								cout<<"\x07";
								for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
									for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
										GotoXY(x, y);
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) { 
											SetColor(0, 1); 
											cout << "  ";
										}
											   else { SetColor(0, 9);
											   cout << "  ";
											   }
											   break;
										case 1:SetColor(0, 12); 
											cout << "  ";
											break;
										case 2:SetColor(0, 7);
											cout << "  ";
											break;
										case 3: SetColor(0, 11); 
											cout << "  ";
											break;

										case 4:SetColor(0, 7); 
											cout << "  ";
											break;
										case 5:SetColor(0, 7);
											cout << "  ";
											break;
										}
										GotoXY(x, y + 1);
										switch (mypole[i][j]) {
										case 0:if ((j + i) % 2 != 0) {
											SetColor(0, 1);
											cout << "  ";
										}
											   else {
												   SetColor(0, 9); 
												   cout << "  ";
											   }
											   break;
										case 1:SetColor(0, 12);
											cout << "  ";
											break;
										case 2:SetColor(0, 7); 
											cout << "  ";
											break;
										case 3:SetColor(0, 11);
											cout << "  ";
											break;
										case 4:SetColor(0, 7);
											cout << "  ";
											break;
										case 5:SetColor(0, 7); 
											cout << "  "; 
											break;
										}
									}
							}
						}
					}
				}

			for (i = 0; i<10; i++)
				for (j = 0; j<10; j++)
				{
					h = 0;
					if (mypole[i][j] == 5)
					{
						if (i>0) {
							if (mypole[i - 1][j] == 0) {
								h = 1; mypole[i - 1][j] = 3;
							}
						}
						if (i<9) {
							if (mypole[i + 1][j] == 0) {
								h = 1; mypole[i + 1][j] = 3;
							} 
						}
						if (j>0) {
							if (mypole[i][j - 1] == 0) {
								h = 1; mypole[i][j - 1] = 3;
							}
						}
						if (j<9) { 
							if (mypole[i][j + 1] == 0) { 
								h = 1; mypole[i][j + 1] = 3; 
							} 
						}
						if (i>0 && j>0) { 
							if (mypole[i - 1][j - 1] == 0) {
								h = 1; mypole[i - 1][j - 1] = 3; 
							} 
						}
						if (i>0 && j<9) {
							if (mypole[i - 1][j + 1] == 0) { 
								h = 1; mypole[i - 1][j + 1] = 3;
							}
						}
						if (i<9 && j<9) {
							if (mypole[i + 1][j + 1] == 0) { 
								h = 1; mypole[i + 1][j + 1] = 3; 
							}
						}
						if (i<9 && j>0) {
							if (mypole[i + 1][j - 1] == 0) { 
								h = 1; mypole[i + 1][j - 1] = 3;
							}
						}
					}
				}

		}
		udar = 0;
		for (i = 0; i<10; i++)
			for (j = 0; j<10; j++)
				if (mypole[i][j] == 4 || mypole[i][j] == 5)
					udar++;

		if (udar == 20){
			f = 1; per = 1;
		}
		for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
			for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
				GotoXY(x, y);
				switch (mypole[i][j]) {
				case 0:if ((j + i) % 2 != 0) {
					SetColor(0, 1);
					cout << "  ";
				}
					   else { SetColor(0, 9);
					   cout << "  ";
					   }
					   break;
				case 1:SetColor(0, 12); 
					cout << "  ";
					break;
				case 2:SetColor(0, 7);
					cout << "  ";
					break;
				case 3: SetColor(0, 11); 
					cout << "  ";
					break;
				case 4:SetColor(0, 7);
					cout << "  ";
					break;
				case 5:SetColor(0, 7); 
					cout << "  ";
					break;
				}
				GotoXY(x, y + 1);
				switch (mypole[i][j]) {
				case 0:if ((j + i) % 2 != 0) { 
					SetColor(0, 1); 
					cout << "  ";
				}
					   else { SetColor(0, 9);
					   cout << "  ";
					   }
					   break;
				case 1:SetColor(0, 12);
					cout << "  ";
					break;
				case 2:SetColor(0, 7); 
					cout << "  ";
					break;
				case 3:SetColor(0, 11);
					cout << "  ";
					break;
				case 4:SetColor(0, 7); 
					cout << "  ";
					break;
				case 5:SetColor(0, 7);
					cout << "  ";
					break;
				}
			}

		if (per == 0)
		{
			do {
				i = 0 + rand() % 10;
				j = 0 + rand() % 10;
			} while (mypole[i][j]>1);
			if (mypole[i][j] == 1) {
				mypole[i][j] = 4;
				ud[0] = i; 
				ud[1] = j;
				GotoXY(28, 16);
				SetColor(15, 0);
				cout <<  "Попал!"; 
				hod[0] = 5; 
				Sleep(1000); 
				cout<<"\x07"; 
				f = 0; 
			}

			if (mypole[i][j] == 0) { 
				mypole[i][j] = 3;
				f = 1;
				GotoXY(28, 16); 
				SetColor(15, 0);
				cout<<"Мимо!";
				Sleep(1000); 
			}
		}
		Sleep(1000);
		for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
			for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
				GotoXY(x, y);
				switch (mypole[i][j]) {
				case 0:if ((j + i) % 2 != 0) {
					SetColor(0, 1);
					cout << "  ";
				}
					   else { SetColor(0, 9);
					   cout << "  ";
					   }
					   break;
				case 1:SetColor(0, 12);
					cout << "  ";
					break;
				case 2:SetColor(0, 7);
					cout << "  ";
					break;
				case 3: SetColor(0, 11);
					cout << "  ";
					break;
				case 4:SetColor(0, 7);
					cout << "  ";
					break;
				case 5:SetColor(0, 7);
					cout << "  ";
					break;
				}
				GotoXY(x, y + 1); switch (mypole[i][j]) {
				case 0:if ((j + i) % 2 != 0) { 
					SetColor(0, 1); printf("  "); }
					   else { 
						   SetColor(0, 9); 
						   cout << "  ";
					   }
					   break;
				case 1:SetColor(0, 12);
					cout << "  ";
					break;
				case 2:SetColor(0, 7);
					cout << "  ";
					break;
				case 3:SetColor(0, 11);
					cout << "  ";
					break;
				case 4:SetColor(0, 7);
					cout << "  ";
					break;
				case 5:SetColor(0, 7);
					cout << "  ";
					break;
				}
			}
	} while (f == 0);

	return udar;
}
int player(int pole[10][10], int udar)
{
	GotoXY(27, 16);
	SetColor(0, 0);
	cout<<"        ";
	int i, j, x, y, f, e, k = 0, pop, iper, jper; int vih, end;
	for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
		for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)	{
			GotoXY(x, y);
			if (pole[i][j] == 3) { 
				SetColor(0, 11); 
				cout<<"  "; 
			}
			else {
				if (pole[i][j] == 2) {
					SetColor(0, 12); 
					cout<<"  ";
				}
				else {
					if ((j + i) % 2 != 0) { 
						SetColor(0, 1);
						cout<<"  "; 
					}
					else { 
						SetColor(0, 9); 
						cout<<"  ";
					}
				}
			}
			GotoXY(x, y + 1);
			if (pole[i][j] == 3) {
				SetColor(0, 11);
				cout<<"  ";
			}
			else {
				if (pole[i][j] == 2) { 
					SetColor(0, 12); 
					cout<<"  ";
				}
				else {
					if ((j + i) % 2 != 0) {
						SetColor(0, 1);
						cout<<"  ";
					}
					else {
						SetColor(0, 9); 
						cout<<"  "; 
					}
				}
			}
		}
	x = 1; 
	y = 1;
	i = j = 0;
	e = x;
	{
		GotoXY(e, y);
		SetColor(0, 14);
		cout<<"  ";
		GotoXY(e, y + 1);
		SetColor(0, 14);
		cout<<"  ";
	}
	do {
		f = 0;
		pop = 0;
		GotoXY(24, 14);
		SetColor(15, 0);
		cout<<"  Ходит игрок ";
		int code = getch();
		if (code == 224)
		{
			GotoXY(27, 16);
			SetColor(0, 0); 
			cout<<"        ";
			code = getch();
			switch (code)
			{
			case 72:
			{
				if (y != 1)
				{

					e = x;
					{
						i = e / 2;
						j = y / 2;
						GotoXY(e, y);
						if (pole[i][j] == 3) { 
							SetColor(0, 11); 
							cout<<"  ";
						}
						else {
							if (pole[i][j] == 2) {
								SetColor(0, 12);
								cout<<"  ";
							} 
							else{ 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1); 
									cout << "  ";
								} 
								else {
									SetColor(0, 9);
									cout << "  ";
								} 
							} 
						}
						GotoXY(e, y + 1);
						if (pole[i][j] == 3) {
							SetColor(0, 11);
							cout << "  ";
						}
						else { 
							if (pole[i][j] == 2) {
								SetColor(0, 12); 
								cout << "  "; 
							} 
							else {
								if ((i + j) % 2 != 0) {
									SetColor(0, 1); cout << "  ";
								}
								else {
									SetColor(0, 9);
									cout << "  "; 
								} 
							} 
						}
					}
					y = y - 2;
					e = x;{
						GotoXY(e, y);
						SetColor(0, 14);
						cout << "  ";
						GotoXY(e, y + 1); 
						SetColor(0, 14);
						cout << "  ";
					}
				}
				break;
			}
			case 77:{
				if (x != 19){
					e = x; {
						i = e / 2;
						j = y / 2;
						GotoXY(e, y); 
						if (pole[i][j] == 3) {
							SetColor(0, 11);
							cout << "  "; 
						}
						else {
							if (pole[i][j] == 2) { 
								SetColor(0, 12); 
								cout << "  ";
							}
							else {
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1);
									cout << "  ";
								}
								else {
									SetColor(0, 9);
									cout << "  ";
								}
							}
						}
						GotoXY(e, y + 1); 
						if (pole[i][j] == 3) {
							SetColor(0, 11);
							cout << "  ";
						}
						else { 
							if (pole[i][j] == 2) {
								SetColor(0, 12); 
								cout << "  "; 
							} 
							else { 
								if ((i + j) % 2 != 0) {
									SetColor(0, 1);
									cout << "  "; 
								} 
								else {
									SetColor(0, 9); 
									cout << "  ";
								} 
							} 
						}
					}
					x = x + 2;
					e = x;{
						GotoXY(e, y); 
						SetColor(0, 14);
						cout << "  ";
						GotoXY(e, y + 1);
						SetColor(0, 14); 
						cout << "  ";
					}
				}
				break;
			}
			case 80:{
				if (y != 19){
					e = x; {
						i = e / 2;
						j = y / 2;
						GotoXY(e, y); 
						if (pole[i][j] == 3) {
							SetColor(0, 11);
							cout << "  ";
						}
						else {
							if (pole[i][j] == 2) {
							SetColor(0, 12);
							cout << "  ";
							} 
							else { 
								if ((i + j) % 2 != 0) { 
									SetColor(0, 1);
									cout << "  ";
								} 
								else { 
									SetColor(0, 9); 
									cout << "  ";
								} 
							} 
						}
						GotoXY(e, y + 1);
						if (pole[i][j] == 3) {
							SetColor(0, 11);
							cout << "  ";
						}
						else {
							if (pole[i][j] == 2) {
								SetColor(0, 12);
								cout << "  ";
							}
							else {
								if ((i + j) % 2 != 0) {
									SetColor(0, 1);
									cout << "  ";
								}
								else { 
									SetColor(0, 9);
									cout << "  ";
								}
							}
						}
					}
					y = y + 2;
					e = x;{
						GotoXY(e, y);
						SetColor(0, 14);
						cout << "  ";
						GotoXY(e, y + 1); 
						SetColor(0, 14);
						printf("  ");
					}
				}
				break;
			}
			case 75:{
				if (x != 1){
					e = x; {
						i = e / 2;
						j = y / 2;
						GotoXY(e, y); 
						if (pole[i][j] == 3) 
						{ SetColor(0, 11);
						cout << "  ";
						}
						else { 
							if (pole[i][j] == 2) {
								SetColor(0, 12);
								cout << "  ";
							} 
							else { 
								if ((i + j) % 2 != 0) {
									SetColor(0, 1);
									cout << "  ";
								}
								else {
									SetColor(0, 9); 
									cout << "  ";								
								} 
							}
						}
						GotoXY(e, y + 1);
						if (pole[i][j] == 3) { 
							SetColor(0, 11);
							cout << "  ";
						}
						else {
							if (pole[i][j] == 2) { 
							SetColor(0, 12);
							cout << "  ";
							} 
							else {
								if ((i + j) % 2 != 0) {
									SetColor(0, 1);
									cout << "  ";
								}
								else {
									SetColor(0, 9);
									cout << "  ";
								} 
							} 
						}
					}
					x = x - 2;
					e = x;{
						GotoXY(e, y); 
						SetColor(0, 14);
						cout << "  ";
						GotoXY(e, y + 1);
						SetColor(0, 14);
						cout << "  ";
					}
				}
				break;
			}
			}
		}
		else {
			switch (code) {
			case 13: {
				int pr = f = 0;
				pop = 0;
				e = x;
				int a = y;
				{i = e / 2;
				j = a / 2;
				if (i<10 && j<10)if (pole[i][j] == 2 || pole[i][j] == 3)
					pr = 1; }
				if (pr == 0){
					e = x;
					i = e / 2;
					j = y / 2;
					if (pole[i][j] == 0){
						pole[i][j] = 3; 
						f = 1; GotoXY(28, 16);
						SetColor(15, 0);
						cout<<"Мимо!";
					}
					else {
						pole[i][j] = 2; 
						cout<<"\x07";
						GotoXY(27, 16);
						SetColor(15, 0); 
						cout<<"Попал!";
						pop = 1;
						udar++;
					}
				}
				break;
			}
			case 27: { 
				f = 1;
				GotoXY(24, 14);
				SetColor(15, 0);
				cout<<"    Выйти?    ";
				GotoXY(24, 16);
				SetColor(15, 0);
				cout << "[";
				SetColor(0, 2); 
				cout << "да";
				SetColor(15, 0); 
				cout << "]  ";
				GotoXY(31, 16);
				SetColor(15, 0); 
				cout << "  [";
				cout << "нет";
				SetColor(15, 0);
				cout << "]";
				do {
					k = 0; vih = 0;
					int code = getch();
					if (code == 224)
					{
						code = getch();
						switch (code)
						{
						case 75: {f = f*(-1);
							if (f == 1) {
								GotoXY(24, 16);
								SetColor(15, 0); 
								cout << "[";
								SetColor(0, 2);
								cout << "да";
								SetColor(15, 0); 
								cout << "]  ";
								GotoXY(31, 16); 
								SetColor(15, 0); 
								cout << "  [";
								cout << "нет"; 
								SetColor(15, 0);
								cout << "]";
							}
							else {
								GotoXY(24, 16); 
								SetColor(15, 0); 
								cout << "[";
								cout << "да";
								cout << "]  ";
								GotoXY(31, 16);
								SetColor(15, 0);
								cout << "  ["; 
								SetColor(0, 2);
								cout << "нет"; 
								SetColor(15, 0); 
								cout << "]";
							}
							break; 
						}

						case 77: {f = f*(-1);
							if (f == 1) {
								GotoXY(24, 16); 
								SetColor(15, 0);
								cout << "["; 
								SetColor(0, 2);
								cout << "да"; 
								SetColor(15, 0);
								cout << "]  ";
								GotoXY(31, 16);
								SetColor(15, 0); 
								cout << "  [";
								cout << "нет"; 
								SetColor(15, 0);
								cout << "]";
							}
							else {
								GotoXY(24, 16);
								SetColor(15, 0); 
								cout << "[";
								cout << "да";
								cout << "]  ";
								GotoXY(31, 16);
								SetColor(15, 0); 
								cout << "  ["; 
								SetColor(0, 2);
								cout << "нет";
								SetColor(15, 0);
								cout << "]";
							}
							break; }
						}
					}
					else {
						switch (code)
						{
						case 13: {GotoXY(24, 14); 
							SetColor(0, 0);
							cout << "              ";
							GotoXY(24, 16);
							cout << "              ";
							if (f == 1) k = 1; 
							vih = 1;
							break;
						}
						}
					}

				} while (vih == 0);
				break; }

			}

			int mas[20][2], flag, sh = 0, a, b;
			for (i = 0; i<10; i++)
				for (j = 0; j<10; j++){
					if (pole[i][j] == 1){
						if (i>0)if (pole[i - 1][j] == 2) {
							mas[sh][0] = i - 1; mas[sh][1] = j; sh++;
							if (i>1)if (pole[i - 2][j] == 2) {
								mas[sh][0] = i - 2; mas[sh][1] = j; sh++;
								if (i>2)if (pole[i - 3][j] == 2) { mas[sh][0] = i - 3; mas[sh][1] = j; sh++; 
								}
							}
						}

						if (i<9)if (pole[i + 1][j] == 2) {
							mas[sh][0] = i + 1; mas[sh][1] = j; sh++;
							if (i<8)if (pole[i + 2][j] == 2) {
								mas[sh][0] = i + 2; mas[sh][1] = j; sh++;
								if (i<7)if (pole[i + 3][j] == 2) { mas[sh][0] = i + 3; mas[sh][1] = j; sh++; }
							}
						}

						if (j>0)if (pole[i][j - 1] == 2) {
							mas[sh][0] = i; mas[sh][1] = j - 1; sh++;
							if (j>1)if (pole[i][j - 2] == 2) {
								mas[sh][0] = i; mas[sh][1] = j - 2; sh++;
								if (j>2)if (pole[i][j - 3] == 2) { mas[sh][0] = i; mas[sh][1] = j - 3; sh++; }
							}
						}

						if (j<9)if (pole[i][j + 1] == 2) {
							mas[sh][0] = i; mas[sh][1] = j + 1; sh++;
							if (i<8)if (pole[i][j + 2] == 2) {
								mas[sh][0] = i; mas[sh][1] = j + 2; sh++;
								if (i<7)if (pole[i][j + 3] == 2) { mas[sh][0] = i; mas[sh][1] = j + 3; sh++; }
							}
						}
					}
				}
			for (i = 0; i<10; i++)
				for (j = 0; j<10; j++)
				{
					b = 0;
					if (pole[i][j] == 2)
					{
						for (a = 0; a<sh; a++)
							if (i == mas[a][0] && j == mas[a][1])
								b = 1;
						if (b == 0)
						{
							if (i>0) { if (pole[i - 1][j] == 0) { pole[i - 1][j] = 3; } }
							if (i<9) { if (pole[i + 1][j] == 0) { pole[i + 1][j] = 3; } }
							if (j>0) { if (pole[i][j - 1] == 0) { pole[i][j - 1] = 3; } }
							if (j<9) { if (pole[i][j + 1] == 0) { pole[i][j + 1] = 3; } }
							if (i>0 && j>0) { if (pole[i - 1][j - 1] == 0) { pole[i - 1][j - 1] = 3; } }
							if (i>0 && j<9) { if (pole[i - 1][j + 1] == 0) { pole[i - 1][j + 1] = 3; } }
							if (i<9 && j<9) { if (pole[i + 1][j + 1] == 0) { pole[i + 1][j + 1] = 3; } }
							if (i<9 && j>0) { if (pole[i + 1][j - 1] == 0) { pole[i + 1][j - 1] = 3; } }
						}
					}

				}
			iper = x;
			jper = y;
			GotoXY(e, y); 
			SetColor(0, 14);
			cout << "  ";
			GotoXY(e, y + 1); 
			SetColor(0, 14);
			cout << "  ";

			for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
				for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

				{
					GotoXY(x, y);
					switch (pole[i][j]) {
					case 0:if ((j + i) % 2 != 0) { 
						SetColor(0, 1);
						cout << "  "; 
					}
						   else { 
							   SetColor(0, 9);
							   cout << "  "; 
						   }
						   break;
					case 1:if ((j + i) % 2 != 0) { 
						SetColor(0, 1); 
						cout << "  "; 
					}
						   else {
							   SetColor(0, 9);
							   cout << "  "; 
						   }
						   break;
					case 2:SetColor(0, 12); 
						cout << "  ";
						break;
					case 3: SetColor(0, 11); 
						cout << "  ";
						break;
					}
					GotoXY(x, y + 1); 
					switch (pole[i][j]) {
					case 0:if ((j + i) % 2 != 0) {
						SetColor(0, 1); 
						cout << "  ";
					}
						   else {
							   SetColor(0, 9);
							   cout << "  "; 
						   }
						   break;
					case 1:if ((j + i) % 2 != 0) { 
						SetColor(0, 1);
						cout << "  "; 
					}
						   else { SetColor(0, 9); 
						   cout << "  ";
						   }
						   break;
					case 2:SetColor(0, 12);
						cout << "  ";
						break;
					case 3: SetColor(0, 11); 
						cout << "  "; 
						break;
					}
				}
			x = iper; y = jper;

			udar = 0;
			for (i = 0; i<10; i++)
				for (j = 0; j<10; j++)
					if (pole[i][j] == 2 || pole[i][j] == 2)
						udar++;
			end = 0;	
			if (udar == 20){
				f = 1; pop = 0;
			}

			if (k == 1){
				udar = -1; f = 1;
			}
		}
		GotoXY(20, 20);
		cout<<udar;
	} while ((f != 1 || pop != 0));


	return udar;
}

void main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	nadpis();
	int pole[10][10]; 
	int mypole[10][10]; 
	int x, y, ui, ud[2], hod[1], i, j, m, k;
	
	do {
		m = menu(); 
		ui = 0; 
		if (m == 1){
			SetColor(0, 0);
			system("cls");
			int f = 1;
			GotoXY(30, 10); 
			SetColor(15, 0); 
			cout<<"Расставить корабли";
			GotoXY(23, 13); 
			SetColor(15, 0); 
			cout<<"["; 
			SetColor(0, 2); 
			cout<<"автоматически"; 
			SetColor(15, 0); 
			cout<<"]";
			GotoXY(43, 13); 
			SetColor(15, 0); 
			cout<<"["; 
			cout<<"вручную"; 
			SetColor(15, 0); 
			cout<<"]";
			do {
				k = 0;
				int code = getch();
				if (code == 224)
				{
					code = getch();
					switch (code)
					{
					case 75: {f = f*(-1);
						if (f == 1) {
							GotoXY(23, 13);
							SetColor(15, 0); 
							cout << "[";
							SetColor(0, 2);
							cout << "автоматически";
							SetColor(15, 0); 
							cout << "]";
							GotoXY(43, 13);
							SetColor(15, 0); 
							cout << "[";
							cout << "вручную"; 
							SetColor(15, 0);
							cout << "]";
						}
						else {
							GotoXY(23, 13);
							SetColor(15, 0);
							cout << "[";
							cout << "автоматически";
							cout << "]";
							GotoXY(43, 13); 
							SetColor(15, 0);
							cout << "[";
							SetColor(0, 2);
							cout << "вручную";
							SetColor(15, 0); 
							cout << "]";
						}
						break; }

					case 77: {f = f*(-1);
						if (f == 1) {
							GotoXY(23, 13);
							SetColor(15, 0);
							cout << "[";
							SetColor(0, 2);
							cout << "автоматически";
							SetColor(15, 0);
							cout << "]";
							GotoXY(43, 13); 
							SetColor(15, 0);
							cout << "[";
							cout << "вручную";
							SetColor(15, 0);
							cout << "]";
						}
						else {
							GotoXY(23, 13);
							SetColor(15, 0); 
							cout << "["; 
							cout << "автоматически";
							cout << "]";
							GotoXY(43, 13); 
							SetColor(15, 0);
							cout << "[";
							SetColor(0, 2); 
							cout << "вручную"; 
							SetColor(15, 0);
							cout << "]";
						}
						break;
					}
					}
				}
				else {
					switch (code){
					case 13: k = 1; 
						break;
					}
				}
			} 
			while (k == 0);
			if (f == 1) { 
				sheeps(mypole);
			}
			else {
				SetColor(0, 0);	

				ui = ras(mypole);
			}
			if (ui == 0) {
				SetColor(0, 0);
				system("cls");
				GotoXY(30, 10);
				SetColor(15, 0);
				cout << "Расстановка кораблей";

				for (i = 1; i <= 100; i++){
					GotoXY(62, 15);
					SetColor(15, 0); 
					cout << i;
					if (i % 2 == 0){
						GotoXY(10 + (i / 2), 15);
						SetColor(0, 15);
						cout << " ";
						sheeps(pole);
					}Sleep(50);
				}
				SetColor(0, 0);
				system("cls");
				f = 1;
				GotoXY(30, 10);
				SetColor(15, 0); 
				cout << "Кто ходит первым?";
				GotoXY(23, 13);
				SetColor(15, 0);
				cout << "["; 
				SetColor(0, 2); 
				cout << "компьютер";
				SetColor(15, 0);
				cout << "]";
				GotoXY(43, 13);
				SetColor(15, 0);
				cout << "[";
				cout << "игрок";
				SetColor(15, 0);
				cout << "]";
				do {
					k = 0;
					int code = getch();
					if (code == 224)
					{
						code = getch();
						switch (code)
						{
						case 75: {f = f*(-1);
							if (f == 1) {
								GotoXY(23, 13);
								SetColor(15, 0); 
								cout << "[";
								SetColor(0, 2); 
								cout << "компьютер";
								SetColor(15, 0); 
								cout << "]";
								GotoXY(43, 13);
								SetColor(15, 0);
								cout << "["; 
								cout << "игрок"; 
								SetColor(15, 0); 
								cout << "]";
							}
							else {
								GotoXY(23, 13);
								SetColor(15, 0); 
								cout << "[";
								cout << "компьютер";
								cout << "]";
								GotoXY(43, 13); 
								SetColor(15, 0); 
								cout << "["; 
								SetColor(0, 2);
								cout << "игрок"; 
								SetColor(15, 0);
								cout << "]";
							}
							break; 
						}
						case 77: {f = f*(-1);
							if (f == 1) {
								GotoXY(23, 13);
								SetColor(15, 0);
								cout << "["; 
								SetColor(0, 2);
								cout << "компьютер";
								SetColor(15, 0);
								cout << "]";
								GotoXY(43, 13); 
								SetColor(15, 0);
								cout << "["; 
								cout << "игрок";
								SetColor(15, 0);
								cout << "]";
							}
							else {
								GotoXY(23, 13);
								SetColor(15, 0); 
								cout << "["; 
								cout << "компьютер";
								cout << "]";
								GotoXY(43, 13);
								SetColor(15, 0);
								cout << "["; 
								SetColor(0, 2);
								cout << "игрок";
								SetColor(15, 0); 
								cout << "]";
							}
							break; 
						}
						}
					}
					else {
						switch (code)
						{
						case 13: k = 1; break;
						}
					}
				} while (k == 0);

				int chislocomp = 0, chislomy = 0;
				SetColor(15, 0);
				system("cls");
				cout << "  A B C D E F J H I K\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "1";
				cout << "\t\t     ";
				cout << "1\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "2";
				cout << "\t\t     ";
				cout << "2\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "3";
				cout << "\t\t     ";
				cout << "3\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "4";
				cout << "\t\t     ";
				cout << "4\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "5";
				cout << "\t\t     ";
				cout << "5\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "6";
				cout << "\t\t     ";
				cout << "6\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "7";
				cout << "\t\t     ";
				cout << "7\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "8";
				cout << "\t\t     ";
				cout << "8\n";
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				cout << "9";
				cout << "\t\t     ";
				cout << "9\n";
				cout << "1";
				cout << "\t\t     ";
				cout << "1\n";
				cout << "0";
				cout << "\t\t     ";
				cout << "0\n";
				cout<<"  A B C D E F J H I K\n";


				GotoXY(40, 0);
				cout<<"  A B C D E F J H I K\n";
				GotoXY(40, 1);
				cout<<" "; 
				cout<<"\t\t     ";
				cout<<" \n";
				GotoXY(40, 2); 
				cout << "1";
				cout << "\t\t     ";
				cout << "1\n";
				GotoXY(40, 3); 
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 4); 
				cout << "2";
				cout << "\t\t     ";
				cout << "2\n";
				GotoXY(40, 5); 
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 6); 
				cout << "3";
				cout << "\t\t     ";
				cout << "3\n";
				GotoXY(40, 7); 
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 8); 
				cout << "4";
				cout << "\t\t     ";
				cout << "4\n";
				GotoXY(40, 9); 
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 10); 
				cout << "5";
				cout << "\t\t     ";
				cout << "5\n";
				GotoXY(40, 11); 
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 12); 
				cout << "6";
				cout << "\t\t     ";
				cout << "6\n";
				GotoXY(40, 13);
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 14);
				cout << "7";
				cout << "\t\t     ";
				cout << "7\n";
				GotoXY(40, 15);
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 16); 
				cout << "8";
				cout << "\t\t     ";
				cout << "8\n";
				GotoXY(40, 17); 
				cout << " ";
				cout << "\t\t     ";
				cout << " \n";
				GotoXY(40, 18);
				cout << "9";
				cout << "\t\t     ";
				cout << "9\n";
				GotoXY(40, 19); 
				cout << "1";
				cout << "\t\t     ";
				cout << "1\n";
				GotoXY(40, 20);
				cout << "0";
				cout << "\t\t     ";
				cout << "0\n";
				GotoXY(40, 21);
				cout<<"  A B C D E F J H I K\n";

				for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
					for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

					{
						GotoXY(x, y);  
						if ((j + i) % 2 != 0) { 
							SetColor(0, 1); 
							cout<<"  ";
						}
						else { 
							SetColor(0, 9); 
						cout << "  ";
						}
						GotoXY(x, y + 1); 
						if ((j + i) % 2 != 0) {
							SetColor(0, 1); 
							cout << "  "; 
						}
						else {
							SetColor(0, 9);
							cout << "  ";
						}
					}

				for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
					for (j = 0, y = 1; j<10, y<21; j++, y = y + 2){
						GotoXY(x, y);
						if (mypole[i][j] == 1) {
							SetColor(0, 12);
							cout << "  "; 
						}
						else { 
							if ((j + i) % 2 != 0) { 
								SetColor(0, 1); cout << "  "; 
							} 
							else { 
								SetColor(0, 9);
								cout << "  "; 
							}
						}
						GotoXY(x, y + 1); 
						if (mypole[i][j] == 1) {							
							SetColor(0, 12);
							cout << "  "; 
						}
						else { 
							if ((j + i) % 2 != 0) {
							SetColor(0, 1);
							cout << "  "; 
							} 
							else {
								SetColor(0, 9); 
								cout << "  "; 
							} 
						}
					}

				GotoXY(25, 8);
				SetColor(15, 0);
				cout << "принять-enter";
				GotoXY(22, 9);
				SetColor(15, 0);
				cout << "управление-стрелки";
				GotoXY(26, 10); 
				SetColor(15, 0); 
				cout << "Выход-Esc";
				GotoXY(24, 12); 
				SetColor(15, 0);
				cout << "окно сообщений";
				GotoXY(23, 13); 
				cout << "----------------\n";
				GotoXY(23, 14); 
				cout << "|";
				cout << "\t      "; 
				cout << "|\n";
				GotoXY(23, 15); 
				cout << "|"; 
				cout << "\t      ";
				cout << "|\n";
				GotoXY(23, 16);
				cout << "|";
				cout << "\t      "; 
				cout << "|\n";
				GotoXY(23, 17); 
				cout << "|"; 
				cout << "\t      "; 
				cout << "|\n";
				GotoXY(23, 18);
				cout << "----------------\n";
				ud[0] = -3; ud[1] = -3;



				while (chislocomp<20 && chislomy<20)
				{
					if (chislomy == -1) { break; }
					if (chislocomp != 20 && chislomy != 20)
					{
						if (f == 1)
						{
							chislocomp = comp(mypole, chislocomp, ud, hod);
							f = f*(-1);
						}
						else
						{
							chislomy = player(pole, chislomy);
							f = f*(-1);
						}
					}
				}
				SetColor(0, 0); system("cls");

				if (chislocomp == 20)
				{
					GotoXY(33, 14);
					SetColor(0, 12);
					cout << "Вы проиграли";
					fflush(stdin); getch(); fflush(stdin);
				}
				if (chislomy == 20)
				{
					GotoXY(33, 14); SetColor(0, 12);
					cout << "Вы выиграли!";
					fflush(stdin); getch(); fflush(stdin);
				}

			}
		}
		
	} while (m == 1);

}
