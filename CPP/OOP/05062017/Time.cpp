#include "Time.h"
#include <cstdio>
#include <iostream>
#include<iomanip>

// #define _CRT_SECURE_NO_WARNINGS

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}


Time::~Time()
{
}

Time::Time(const char* timeString)
{
	if (sscanf(timeString, "%.2i:%.2i:%.2i",
		&hour, &minute, &second) != 3)
	{
		hour = 0;
		minute = 0;
		second = 0;
		std::cout << "The wrong input!\n";
	}
}

Time::Time(Time const& time) : hour(time.hour),
minute(time.minute),
second(time.second)
{

}

Time& Time::operator = (Time const& time)
{
	if (this != &time)
	{
		hour = time.hour;
		minute = time.minute;
		second = time.second;
	}
	return *this;
}
int Time::GetHour() const
{
	return hour;
}
int Time::GetMinute() const
{
	return minute;
}
int Time::GetSecond() const
{
	return second;
}

void Time::Check()
{
	while (second >= 60)
	{
		minute++;
		second -= 60;
	}
	while (minute >= 60)
	{
		hour++;
		minute -= 60;
	}
	while (hour >= 24)
	{
		hour -= 24;
	}
}

void Time::AddSec(int value)
{
	second += value;
	Check();
}

void Time::AddMin(int value)
{
	minute += value;
	Check();
}

void Time::AddHour(int value)
{
	hour += value;
	Check();
}

void Time::Set(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

void Time::Print()const
{
	std::cout << std::setw(2) << std::setfill('0') <<hour << ":" 
		<< std::setw(2) << std::setfill('0') << minute << ":" 
		<< std::setw(2) << std::setfill('0') << second << "\n";
}

bool Time::IsAm()const
{				
	return (hour < 12);	
}
