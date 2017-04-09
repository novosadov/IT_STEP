#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

//Строки


int leght(char* str);
void printStr(char* str);
int cowntWords(char* str);

int main()
{
	setlocale(LC_ALL, "rus");
	char str[256];
	
	fgets(str, 256, stdin);
	printStr(str);
	printf("%i \n", leght(str));

	printf("%i \n", cowntWords(str));

	return 0;
}


void printStr(char* str)
{
	printf("%s", str);
}


int leght(char* str)
{
	int leghtArray = 0;
	int a = 0;

	while (*(str + leghtArray) != 0)
		{
			leghtArray++;			
		}	 	
	
	return leghtArray - 1;
}


int cowntWords(char* str)
{
	int count = 0;
	
	while (*(str ++) != 0)
	{			
		if (*str == ' ' && *(str+1) != ' ')
	   {		  
			   count++;		
			   while (*(str+1) != ' ')
			   {
				   str++;
			   }
	   }
		
		
	}

	return count;
}
