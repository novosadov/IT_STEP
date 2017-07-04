#include "Employee.h"

Employee::Employee(std::string const& name, int salary) :
Person(name),
m_salary(salary)
{
}

int Employee::GetSalary() const
{
	return m_salary;
}

void Employee::SetSalary(int salary)
{
	m_salary = salary;
}

void Employee::Print() const
{
	Person::Print();
	std::cout << "Salary: " << m_salary << std::endl;
}
