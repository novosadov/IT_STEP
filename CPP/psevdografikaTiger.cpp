#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

HANDLE hConsole;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

float s = 1;

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


void ras() {
	
	for (int i = 10; i < 89; i=i+2) {
		GotoXY(i, 10);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 89; i = i + 2) {
		GotoXY(i, 11);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 22; i = i + 2) {
		GotoXY(i, 12);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 28; i = i + 2) {
		GotoXY(i, 12);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 89; i = i + 2) {
		GotoXY(i, 12);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 20; i = i + 2) {
		GotoXY(i, 13);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 13);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 28; i = i + 2) {
		GotoXY(i, 13);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 30; i = i + 2) {
		GotoXY(i, 13);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 89; i = i + 2) {
		GotoXY(i, 13);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 20; i = i + 2) {
		GotoXY(i, 14);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 14);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 30; i = i + 2) {
		GotoXY(i, 14);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 32; i = i + 2) {
		GotoXY(i, 14);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 89; i = i + 2) {
		GotoXY(i, 14);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 15);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 15);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 24; i = i + 2) {
		GotoXY(i, 15);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 15);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 32; i = i + 2) {
		GotoXY(i, 15);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 34; i = i + 2) {
		GotoXY(i, 15);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 89; i = i + 2) {
		GotoXY(i, 15);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 24; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 34; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 36; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 89; i = i + 2) {
		GotoXY(i, 16);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 36; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 38; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 68; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 80; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 89; i = i + 2) {
		GotoXY(i, 17);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 30; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 36; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 38; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 40; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 50; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 64; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 68; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 80; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 82; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 82; i < 89; i = i + 2) {
		GotoXY(i, 18);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 28; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 32; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 36; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 42; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 46; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 54; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 62; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 64; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 82; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 82; i < 84; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 89; i = i + 2) {
		GotoXY(i, 19);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 36; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 44; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 48; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 52; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 54; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 58; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 74; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 78; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 84; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 86; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 86; i < 89; i = i + 2) {
		GotoXY(i, 20);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 24; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 30; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 32; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 36; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 40; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 42; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 46; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 50; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 54; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 56; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 60; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 70; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 74; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 78; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 84; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 86; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 86; i < 89; i = i + 2) {
		GotoXY(i, 21);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 32; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 40; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 42; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 48; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 50; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 54; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 56; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 68; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 72; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 80; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 84; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 86; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 86; i < 89; i = i + 2) {
		GotoXY(i, 22);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 24; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 30; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 34; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 38; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 46; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 50; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 56; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 66; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 74; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 80; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 84; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 86; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 86; i < 89; i = i + 2) {
		GotoXY(i, 23);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 24; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 30; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 36; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 38; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 42; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 44; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 50; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 52; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 56; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 62; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 64; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 72; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 80; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 84; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 86; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 86; i < 89; i = i + 2) {
		GotoXY(i, 24);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 34; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 38; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 42; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 46; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 52; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 60; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 74; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 78; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 84; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 86; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 86; i < 89; i = i + 2) {
		GotoXY(i, 25);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 20; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 32; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 36; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 38; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 44; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 54; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 60; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 68; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 70; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 76; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 82; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 82; i < 84; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 89; i = i + 2) {
		GotoXY(i, 26);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 26; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 34; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 36; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 38; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 42; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 44; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 48; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 52; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 56; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 64; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 68; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 72; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 74; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 76; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 82; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 82; i < 84; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 84; i < 89; i = i + 2) {
		GotoXY(i, 27);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 24; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 32; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 34; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 36; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 42; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 44; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 52; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 54; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 58; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 62; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 66; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 70; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 72; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 74; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 80; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 82; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 82; i < 89; i = i + 2) {
		GotoXY(i, 28);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 30; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 34; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 36; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 42; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 44; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 54; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 56; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 68; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 78; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 80; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 89; i = i + 2) {
		GotoXY(i, 29);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 32; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 34; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 40; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 44; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 46; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 52; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 58; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 66; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 68; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 70; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 76; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 78; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 89; i = i + 2) {
		GotoXY(i, 30);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 14; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 16; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 20; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 24; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 30; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 32; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 44; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 46; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 48; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 50; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 54; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 60; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 72; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 76; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 89; i = i + 2) {
		GotoXY(i, 31);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 14; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 16; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 20; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 22; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 24; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 28; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 32; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 42; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 44; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 46; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 48; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 50; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 52; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 56; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 60; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 64; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 68; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 70; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 72; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 76; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 78; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 89; i = i + 2) {
		GotoXY(i, 32);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 12; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 12; i < 14; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 16; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 30; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 42; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 44; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 46; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 48; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 56; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 60; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 64; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 66; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 70; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 72; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 76; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 78; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 89; i = i + 2) {
		GotoXY(i, 33);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 12; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 12; i < 14; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 16; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 24; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 30; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 32; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 40; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 44; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 46; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 50; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 54; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 58; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 66; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 68; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 70; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 74; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 78; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 80; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 89; i = i + 2) {
		GotoXY(i, 34);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 12; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 12; i < 14; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 18; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 24; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 34; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 40; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 42; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 48; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 50; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 13);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 52; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 56; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 60; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 62; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 66; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 68; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 72; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 74; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 78; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 80; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 89; i = i + 2) {
		GotoXY(i, 35);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 12; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 12; i < 14; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 18; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 34; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 38; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 40; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 46; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 50; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 54; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 58; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 64; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 68; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 72; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 74; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 76; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 78; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 89; i = i + 2) {
		GotoXY(i, 36);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 12; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 12; i < 14; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 16; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 20; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 24; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 34; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 36; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 38; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 40; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 42; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 48; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 56; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 60; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 64; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 66; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 70; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 72; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 78; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 80; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 89; i = i + 2) {
		GotoXY(i, 37);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 14; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 14; i < 16; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 22; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 36; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 42; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 44; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 48; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 58; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 64; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 66; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 70; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 72; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 78; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 80; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 80; i < 89; i = i + 2) {
		GotoXY(i, 38);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 16; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 16; i < 18; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 24; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 34; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 6);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 36; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 44; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 48; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 52; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 56; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 62; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 64; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 68; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 70; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 76; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 78; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 78; i < 89; i = i + 2) {
		GotoXY(i, 39);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 26; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 30; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 6);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 34; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 48; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 50; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 52; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 58; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 62; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 66; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 70; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 74; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 76; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 76; i < 89; i = i + 2) {
		GotoXY(i, 40);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 28; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 30; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 46; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 48; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 48; i < 54; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 58; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 64; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 68; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 72; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 74; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 89; i = i + 2) {
		GotoXY(i, 41);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 18; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 18; i < 20; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 26; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 30; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 30; i < 32; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 38; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 38; i < 40; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 42; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 42; i < 46; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 58; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 62; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 66; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 72; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 74; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 74; i < 89; i = i + 2) {
		GotoXY(i, 42);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 20; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 20; i < 26; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 32; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 32; i < 40; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 54; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 56; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 62; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 62; i < 70; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 72; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 72; i < 89; i = i + 2) {
		GotoXY(i, 43);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 22; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 24; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 44; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 46; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 46; i < 56; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 60; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 14);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 66; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 70; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 70; i < 89; i = i + 2) {
		GotoXY(i, 44);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 24; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 36; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 40; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 40; i < 50; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 54; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 54; i < 60; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 66; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 89; i = i + 2) {
		GotoXY(i, 45);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 26; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 34; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 36; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 36; i < 44; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 44; i < 50; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 50; i < 52; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 52; i < 64; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 89; i = i + 2) {
		GotoXY(i, 46);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 24; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 28; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 28; i < 34; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 34; i < 56; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 60; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 66; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 89; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 24; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 24; i < 26; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 56; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 58; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 58; i < 64; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 64; i < 68; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 89; i = i + 2) {
		GotoXY(i, 47);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 22; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 22; i < 26; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 26; i < 56; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 56; i < 60; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 60; i < 66; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 4);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 66; i < 68; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 0);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 68; i < 89; i = i + 2) {
		GotoXY(i, 48);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}
	for (int i = 10; i < 89; i = i + 2) {
		GotoXY(i, 49);
		SetColor(0, 15);
		cout << "  " << endl;
		Sleep(s);
	}

	system("pause");
		Sleep(s);
		SetColor(15, 0);
		system("cls");
	}
	


void main() {
	keybd_event(VK_MENU, 0x38, 0, 0); //press ALT
	keybd_event(VK_RETURN, 0x1c, 0, 0); //press ENTER
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0); //release ENTER
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0); //release ALT
	setlocale(LC_ALL, "");
	srand(time(NULL));	
	cout << endl << endl << endl << endl;
	cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t"<<"Тигра" << endl;
	Sleep(2000);
	ras();	
	cout << endl << endl << endl << endl;
}
