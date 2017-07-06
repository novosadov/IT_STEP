// ShapeExample.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>


int main()
{
	std::ofstream ofile("D:\\stream.bin", std::ios::out| std::ios::binary);

	int a = 1232323278;
	double d = 3.1231245356565;

	ofile.write(reinterpret_cast<char*>(&a),sizeof(a));
	ofile.write(reinterpret_cast<char*>(&d), sizeof(d));
	return 0;
}
