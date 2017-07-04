#include "Person.h"
#include "Student.h"
#include "Employee.h"

#include <iostream>
#include <map>
#include <cstring>

Person::Person(std::string const& name) :
	m_name(name)
{
}
void Person::SetName(std::string const& name)
{
	m_name = name;
}

std::string const& Person::GetName() const
{
	return m_name;
}

void Person::Print() const
{
	std::cout << "Name: " << m_name << std::endl;
}

void Person::SaveToStream(std::ostream& stream) const
{
	stream << "type:" << GetType() << "name:" << GetName();
}


std::string Person::GetType()const
{
	return "person";
}


std::ostream& operator<<(std::ostream& stream, Person const& person)
{
	person.SaveToStream(stream);
	return stream;
}

// PersonList
void PersonList::Add(Person* person)
{
	m_data.push_back(person);
}

void PersonList::Print() const
{
	for (Person* person : m_data)
	{
		person->Print();
	}
}

PersonList::~PersonList()
{
	for (Person* person : m_data)
	{
		delete person;
	}
}


void PersonList::SaveToStream(std::ostream& stream)
{
	bool first = true;
	for (Person* person : m_data)
	{
		if (first)
		{
			first = false;
		}
		else
		{
			stream << std::endl;
		}
		stream << *person;
	}
}


void PersonList::LoadFromStream(std::istream& stream)
{
	char buffer[1024];
	while (!stream.eof())
	{
		stream.getline(buffer, 1024);
		char* str = strtok(buffer, " ");
		while (str != NULL)
		{
			//std::cout << str << "\n";
			std::string  part(str);
			std::string::size_type pos = part.find(':');
			str = strtok(NULL, " ");
		}
	}
}
