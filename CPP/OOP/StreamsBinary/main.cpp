// ShapeExample.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

void testManipulators()
{
	std::ofstream ofile("D:\\stream.bin", std::ios::out | std::ios::trunc | std::ios::binary);

	int a = 1232323278;
	double d = 3.1231245356565564564564564564;

	ofile.write(reinterpret_cast<char*>(&a), sizeof(a));
	ofile.write(reinterpret_cast<char*>(&d), sizeof(d));

	ofile.close();

	std::ifstream ifile("D:\\stream.bin", std::ios::in | std::ios::binary);

	int b = 0;
	double e = 0;

	ifile.read(reinterpret_cast<char*>(&b), sizeof(b));
	ifile.read(reinterpret_cast<char*>(&e), sizeof(e));

	std::cout << std::setiosflags(std::ios::showbase) <<
		std::hex << b << std::endl;
	std::cout << std::setprecision(30);
	std::cout << e << std::endl;
}

int main()
{
	// testManipulators();

	double arr[10];
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i;
	}
	std::ofstream ofile("D:\\array.bin", std::ios::out | std::ios::trunc | std::ios::binary);
	ofile.write(reinterpret_cast<char*>(&arr), sizeof(arr));
	ofile.close();

	std::ifstream ifile("D:\\array.bin", std::ios::in | std::ios::binary);
	std::vector<double> v;

	while (!ifile.eof())
	{
		double buffer;
		ifile.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
		if (ifile.gcount() == sizeof(buffer))
		{
			v.push_back(buffer);
		}
	}

	for (double el : v)
	{
		std::cout << el << " ";
	}

	return 0;
}