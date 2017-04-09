#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

HANDLE hConsole;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);



void GotoXY(int X, int Y) {  // устанавливает координаты курсора
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
void SetColor(int text, int background) {//задаёт цвет
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void polosa() {
	GotoXY(21, 9);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(21, 10);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(21, 11);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(21, 12);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(21, 13);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(21, 14);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(21, 15);
	SetColor(15, 0);
	cout << "|" << endl;

	GotoXY(31, 9);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(31, 10);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(31, 11);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(31, 12);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(31, 13);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(31, 14);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(31, 15);
	SetColor(15, 0);
	cout << "|" << endl;

	GotoXY(41, 9);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(41, 10);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(41, 11);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(41, 12);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(41, 13);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(41, 14);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(41, 15);
	SetColor(15, 0);
	cout << "|" << endl;
	GotoXY(21, 15);
	SetColor(15, 0);
	cout << "---------------------" << endl;
}

void ras(int x) {			
	if (x == 1) {		
		GotoXY(20, 14);
		SetColor(0, 4);
		cout << "   " << endl;
		polosa();
		Sleep(500);
		GotoXY(20, 14);
		SetColor(0, 0);
		cout << "   " << endl;	
		polosa();
		GotoXY(40, 14);
		SetColor(0, 4);
		cout << "   " << endl;
		polosa();
		Sleep(500);		
		Sleep(2000);
		SetColor(15, 0);
		system("cls");
	}
	if (x == 2) {		
		GotoXY(20, 13);
		SetColor(0, 4);
		cout << "   " ;
		polosa();
		cout << endl;		
		GotoXY(19, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);
		
		GotoXY(20, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		
		GotoXY(30, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);
		
		GotoXY(19, 14);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();		
		GotoXY(39, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 14);
		SetColor(0, 0);
		cout << "   ";
		cout << endl;
		polosa();

		GotoXY(40, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(2000);
		SetColor(15, 0);
		system("cls");
	}
	if (x == 3) {
		GotoXY(20, 12);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(19, 13);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();		
		GotoXY(18, 14);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 12);
		SetColor(0, 0);
		cout << "   ";
		polosa();

		GotoXY(30, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 13);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();

		GotoXY(39, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 14);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		GotoXY(40, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(18, 14);
		SetColor(0, 0);
		cout << "       " << endl;
		polosa();
		GotoXY(28, 14);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(40, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(39, 14);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(19, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(28, 14);
		SetColor(0, 0);
		cout << "       " << endl;
		polosa();
		GotoXY(38, 14);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 14);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(39, 13);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 14);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 12);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);
		SetColor(15, 0);
		cout << endl;
		cout << endl;
		cout << endl;
	}
	if (x == 4) {
		GotoXY(20, 11);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		
        GotoXY(19, 12);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		

		GotoXY(18, 13);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		

		GotoXY(17, 14);
		SetColor(0, 10);
		cout << "         " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 11);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 12);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(39, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 14);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(18, 13);
		SetColor(0, 0);
		cout << "       " << endl;
		polosa();
		GotoXY(28, 14);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(40, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(39, 14);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(29, 13);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 12);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(17, 14);
		SetColor(0, 0);
		cout << "         " << endl;
		polosa();
		GotoXY(37, 14);
		SetColor(0, 10);
		cout << "         " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 12);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(29, 13);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(19, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(40, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(28, 14);
		SetColor(0, 0);
		cout << "       " << endl;
		polosa();
		GotoXY(38, 13);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 14);
		SetColor(0 , 0);
		cout << "     " << endl;
		polosa();
		GotoXY(39, 12);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 14);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 11);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);
		SetColor(15, 0);
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}
	if (x == 5) {
		GotoXY(20, 10);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;		

		GotoXY(19, 11);
		SetColor(0, 3);
		cout << "     " << endl; 
		polosa();		

		GotoXY(18, 12);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();		

		GotoXY(17, 13);
		SetColor(0, 10);
		cout << "         " << endl;
		polosa();		

		GotoXY(16, 14);
		SetColor(0, 14);
		cout << "           " << endl; 
		polosa();
		Sleep(500);

		GotoXY(20, 10);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 11);
		SetColor(0, 0);
		cout << "     " << endl; 
		polosa();
		GotoXY(29, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(40, 14);
		SetColor(0, 0);
		cout << "   "; 
		polosa();
		cout << endl;
		GotoXY(30, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(18, 12);
		SetColor(0, 0);
		cout << "       " << endl;
		polosa();
		GotoXY(38, 14);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 13);
		SetColor(0, 0);
		cout << "   "; 
		polosa();
		cout << endl;
		GotoXY(20, 12);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(29, 14);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(39, 13);
		SetColor(0,  3);
		cout << "     " << endl; 
		polosa();
		Sleep(500);

		GotoXY(20, 12);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 12);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(17, 13);
		SetColor(0, 0);
		cout << "         " << endl;
		polosa();
		GotoXY(27, 14);
		SetColor(0, 10);
		cout << "         " << endl; 
		polosa();
		Sleep(500);

		GotoXY(40, 12);
		SetColor(0, 0);
		cout << "   "; 
		polosa();
		cout << endl;
		GotoXY(30, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(39, 13);
		SetColor(0, 0);
		cout << "     " << endl; 
		polosa();
		GotoXY(19, 13);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 13);
		SetColor(0, 0);
		cout << "   "; 
		polosa();
		cout << endl;
		GotoXY(20, 12);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(38, 14);
		SetColor(0, 0);
		cout << "       " << endl; 
		polosa();
		GotoXY(28, 13);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 12);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 13);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(29, 12);
		SetColor(0, 3);
		cout << "     " << endl; 
		polosa();
		Sleep(500);

		GotoXY(40, 14);
		SetColor(0, 0);
		cout << "   "; 
		polosa();
		cout << endl;
		GotoXY(30, 11);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(16, 14);
		SetColor(0, 0);
		cout << "           " << endl;
		polosa();
		GotoXY(36, 14);
		SetColor(0, 14);
		cout << "           " << endl; 
		polosa();
		Sleep(500);

		GotoXY(30, 11);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 13);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(29, 12);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(19, 14);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(40, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 13);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(28, 13);
		SetColor(0, 0);
		cout << "       " << endl;
		polosa();
		GotoXY(38, 13);
		SetColor(0, 2);
		cout << "       " << endl; 
		polosa();
		Sleep(500);

		GotoXY(20, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 13);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 14);
		SetColor(0, 0);
		cout << "     " << endl; 
		polosa();
		GotoXY(39, 12);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(39, 12);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(29, 13);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 14);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 12);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(38, 13);
		SetColor(0, 0);
		cout << "       " << endl; 
		polosa();
		GotoXY(18, 14);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 12);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 13);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(29, 13);
		SetColor(0, 0);
		cout << "     " << endl; 
		polosa();
		GotoXY(39, 13);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa(); 
		Sleep(500);

		GotoXY(20, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(30, 13);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(39, 13);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(19, 13);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 12);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(27, 14);
		SetColor(0, 0);
		cout << "         " << endl;
		polosa();
		GotoXY(37, 13);
		SetColor(0, 10);
		cout << "         " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 12);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 12);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(19, 13);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(29, 14);
		SetColor(0, 3);
		cout << "     " << endl; 
		polosa();
		Sleep(500);

		GotoXY(40, 12);
		SetColor(0, 0);
		cout << "   "; 
		polosa();
		cout << endl;
		GotoXY(30, 13);
		SetColor(0, 4);
		cout << "   "; polosa();
		cout << endl;
		Sleep(500);

		GotoXY(18, 14);
		SetColor(0, 0);
		cout << "       " << endl;
		polosa();
		GotoXY(38, 12);
		SetColor(0, 2);
		cout << "       " << endl;
		polosa();
		Sleep(500);

		GotoXY(30, 13);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(20, 14);
		SetColor(0, 4);
		cout << "   ";
		polosa();
		cout << endl;
		Sleep(500);

		GotoXY(29, 14);
		SetColor(0, 0);
		cout << "     " << endl;
		polosa();
		GotoXY(39, 11);
		SetColor(0, 3);
		cout << "     " << endl;
		polosa();
		Sleep(500);

		GotoXY(20, 14);
		SetColor(0, 0);
		cout << "   ";
		polosa();
		cout << endl;
		GotoXY(40, 10);
		SetColor(0, 4);
		cout << "   "; 
		polosa();
		cout << endl;
		Sleep(500);
		SetColor(15, 0);
		cout << endl << endl<<endl<<endl;
	}	
}

void Towers(int number, int from, int to, int free){	
	if (number != 0){
		Towers(number - 1, from, free, to);
		cout << "\n  Снимаем " << number << "-й диск с " << from << "-го стержня и одеваем его на " << to << "-й стержень";
		Towers(number - 1, free, to, from);
	}
}

void main() {
	keybd_event(VK_MENU, 0x38, 0, 0); //press ALT
	keybd_event(VK_RETURN, 0x1c, 0, 0); //press ENTER
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0); //release ENTER
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0); //release ALT
	setlocale(LC_ALL, "");
	srand(time(NULL));	
	int a;
	SetColor(15, 0);
	cout << "Введите количество колец" << endl;
	cin >> a;	
	polosa();	
	ras(a);
	Towers(a, 1, 3, 2);
	cout << endl << endl << endl << endl;
}
