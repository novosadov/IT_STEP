// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "Student.h"
#include <sstream>
#include <string>
#include <iostream>
#include <cmath>
#include <exception>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <list>

class CalcException : public std::exception
{
public:
	char const* what() const override
	{
		return "Invalid argument";
	}
};

double CalcSqrt(double value)
{
	if (value < 0)
	{
		throw CalcException();
	}
	return sqrt(value);
}

void Sort(int* array, int count)
{

}

void lesson_10_07_2017()
{
	/*std::string str = "type:student name:Ivanov rating:8";
	std::istringstream is(str);
	std::string buf;
	while (!is.eof())
	{
	is >> buf;
	std::istringstream is2(buf);
	char part[1024];
	is2.getline(part, 1024, ':');
	std::cout << "key=" << part;
	is2.getline(part, 1024, ':');
	std::cout << ", value=" << part << std::endl;
	}

	double val = -6;
	try
	{
	double res = CalcSqrt(val);
	std::cout << res << std::endl;
	}
	catch (std::exception& ex)
	{
	std::ostringstream os;
	os << "Error in function CalcSqrt()" <<
	", argument: " << val << ", :" <<
	ex.what();
	std::cout << os.str() << std::endl;
	}

	std::ostringstream os1;
	os1 << 5 << " + " << 6 << " = " << (5 + 6);
	std::cout << os1.str() << std::endl;

	std::istringstream is1("123");
	int a;
	is1 >> a;
	std::cout << a + 1 << std::endl; */

	std::vector<int> v;
	for (int i = 1; i < 10; ++i)
	{
		v.push_back(i);
	}

	//std::copy(v.begin(), v.end(),
	//  std::ostream_iterator<int>(std::cout, " "));

	std::vector<int> v1 = { 1, 19, 20 };
	std::vector<int> v2(std::move(v1));
	std::copy(v2.begin(), v2.end(),
		std::ostream_iterator<int>(std::cout, " "));

	std::cout << std::endl;

	std::vector<int> v3(v.begin(), v.begin() + 5);
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));

	std::cout << std::endl;

	std::cout << v3.front() << " " << v3.back()
		<< std::endl;

	std::cout << v3.size() << " " << v3.capacity()
		<< std::endl;
	v3.push_back(0);
	std::cout << v3.size() << " " << v3.capacity()
		<< std::endl;

	v3.reserve(20);
	v3.resize(15);
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	std::cout << v3.size() << " " << v3.capacity()
		<< std::endl;
	std::cout << std::endl;

	std::vector<int>::reverse_iterator it = v3.rbegin();
	for (; it != v3.rend(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::copy(v3.rbegin(), v3.rend(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	int* array = &v3[0];
	int* array1 = &v3.front();
	int* array2 = v3.data();
	Sort(v3.data(), v3.size());

	v3.insert(v3.begin() + 1, 100);
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::vector<int>::iterator it1 = v3.insert(v3.begin() + 5, 5, 500);
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << std::distance(v3.begin(), it1)
		<< std::endl;

	it1 = v3.erase(it1);
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	v3.erase(it1, it1 + 5);
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	for (std::vector<int>::iterator i = v3.begin();
		i != v3.end();)
	{
		if ((*i % 2) == 0)
		{
			i = v3.erase(i);
		}
		else
		{
			++i;
		}
	}
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	v3.insert(v3.begin(), 0);
	v3.insert(v3.begin() + 2, 0);
	v3.resize(10);
	v3.insert(v3.end(), 5, 100);
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	/*auto it4 = std::remove(v3.begin(), v3.end(), 0);
	std::copy(v3.begin(), v3.end(),
	std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << std::distance(v3.begin(), it4)
	<< std::endl;

	v3.erase(it4, v3.end());*/
	v3.erase(std::remove(v3.begin(), v3.end(), 0), v3.end());
	std::copy(v3.begin(), v3.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::vector<int> v4;
	v4.reserve(100);
	v4.insert(v4.begin(), { 1, 3, 4, 5 });
	std::cout << v4.size() << " " << v4.capacity()
		<< std::endl;
	v4.shrink_to_fit();
	std::cout << v4.size() << " " << v4.capacity()
		<< std::endl;

	for (std::size_t i = 0; i < v4.size(); ++i)
	{
		std::cout << v4[i] << " ";
	}

	std::vector<int> v5 = { 1, 2, 7, 34, 7, 3, 40 };
	std::copy(v5.begin(), v5.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;


	
	std::function<bool(int&)> lambda = [](int& el)
	{
		return (el % 2) != 0;
	};

	auto it5 = std::remove_if(v5.begin(), v5.end(), lambda);
	v5.erase(it5, v5.end());
	std::copy(v5.begin(), v5.end(),
		std::ostream_iterator<int>(std::cout, " "));
}

int main()
{
	// lesson_10_07_2017();

	std::vector<int> v = { 1, 3, 7, 4, 40, 23, 15, 9, 3};

	int min = 10;
	int max = 25;

	std::function<bool(int&)> lambda = [&min, &max](int& el)
	{
		
		return (el>=min && el<=max);
	};

	auto it = std::remove_if(v.begin(), v.end(), lambda);
	v.erase(it, v.end());
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;


	it = std::remove(v.begin(), v.end(), 3);
	v.erase(it, v.end());
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	min = 0;
	max = 10;	
	std::copy_if(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "), lambda);
	std::cout << std::endl;

	std::vector<Student> students = {Student("Ivanov", 5), Student("Azarenko", 8), Student("Kozlov", 8) ,
		Student("Eroshenko", 3), Student("Belkin", 4), Student("Shukerman", 6)};

	std::sort(students.begin(), students.end());
	for (auto it = students.begin(); it != students.end(); ++it)
	{
		it->Print();
	}

	

	std::function<bool(Student const&, Student const&)> compareByRating =
		[](Student const& st1, Student const& st2)
	{
		return st1.GetRating() < st2.GetRating();
	};


	std::cout << "=====================================" << "\n";


	std::sort(students.begin(), students.end(), compareByRating);

	for (auto it = students.begin(); it != students.end(); ++it)
	{
		it->Print();
	}

	std::cout << "=====================================" << "\n";

	std::sort(students.begin(), students.end(),	std::greater<Student>());

	for (auto it = students.begin(); it != students.end(); ++it)
	{
		it->Print();
	}

	std::cout << "=====================================" << "\n";

	std::list<int> list = { 2, 6, 4, 8, 25, 14, 4, 8, 7};

	std::list<int>::iterator startIt = list.begin();
	std::advance(startIt, 5);

	std::list<int>::iterator it1 = std::find(startIt, list.end(), 4);

	if (it1 != list.end())
	{
		std::cout << std::distance(list.begin(), it1)+1 << std::endl;
		std::cout << *it1 << std::endl;
	}
	else
	{
		std::cout << "not found\n";
	}

	std::cout << "=====================================" << "\n";

	list.push_front(5);
	list.push_back(10);
	std::copy(list.begin(), list.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "=====================================" << "\n";

	auto listLambda = [](int const& el)
	{
		return el >= 10;
	};

	list.remove_if(listLambda);

	std::copy(list.begin(), list.end(), 
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "=====================================" << "\n";

	//std::sort(list.begin(), list.end());
	list.sort();

	std::copy(list.begin(), list.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
		
	std::cout << "=====================================" << "\n";

	auto isGreater = [](int& el1, int& el2)
	{
		return el1 > el2;
	};

	list.sort(isGreater);

	std::copy(list.begin(), list.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	std::cout << "=====================================" << "\n";


	/*auto remainerEquals = [](int& el1, int& el2)
	{
		return (el1 % 3) == (el2 % 3);
	};*/

	//list.unique(remainerEquals);
	list.unique();
	std::copy(list.begin(), list.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	std::cout << "=====================================" << "\n";

	return 0;
}
