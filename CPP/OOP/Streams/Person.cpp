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
