#include<iostream>
#include"Time.h"

int main()
{
	Time time(12,70,6);
	time.Print();
	std::cout << (time.IsAm() ? "am" : "pm")<<" "<<(time.GetSecondsFromMidnight())<<" second"<< "\n";
	return 0;
}
