#pragma once

class Group
{
};

class Student
{
private:
	char* m_name = 0;
	int m_rating;
	Group& m_group;

	static int g_count;

public:
	Student(Group& group);
	Student(Group& group, char const* name, int rating);
	Student(Student const& student); //конструктор копирования

	~Student();

	char const* GetName() const;
	int GetRating() const;

	void SetName(char const* name);
	void SetRating(int rating);

	void Read();
	void Print() const;

	Student& operator=(Student& student); //перегрузить оператор =

	static void IncreaseCounter();
	static void DereaseCounter();
	static int GetStudentCount();

};
