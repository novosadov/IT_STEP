#pragma once


class Time
{
private:
	int hour;
	int minute;
	int second;
	void Check();

public:
	Time();
	Time(int hour, int minute, int second);
	~Time();
	Time(const char* timeString);
	Time(Time const& time);

	Time& operator=(Time const& time);
	int GetHour() const;
	int GetMinute() const;
	int GetSecond() const;

	void AddSec(int value);
	void AddMin(int value);
	void AddHour(int value);

	void Set(int hour, int minute, int second);

	void Print()const;
};
