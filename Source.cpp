#define menu "Operations:\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Multiplication by a number\n5)Division by a number\n6)Trace\n0)Exit\n"

#include "matrix.h"
#include "stdlib.h"
#include "complex"
#include <iostream>

matrix<int> intinit()
{
	unsigned first_size, second_size;
	int value;
	std::cout << "First size:" << std::endl;
	std::cin >> first_size;
	std::cout << "Second size:" << std::endl;
	std::cin >> second_size;
	std::cout << "Value:" << std::endl;
	std::cin >> value;
	return matrix<int>(first_size, second_size, value);
}

matrix<float> floatinit()
{
	unsigned first_size, second_size;
	float value;
	std::cout << "First size:" << std::endl;
	std::cin >> first_size;
	std::cout << "Second size:" << std::endl;
	std::cin >> second_size;
	std::cout << "Value:" << std::endl;
	std::cin >> value;
	return matrix<float>(first_size, second_size, value);
}

matrix<double> doubleinit()
{
	unsigned first_size, second_size;
	double value;
	std::cout << "First size:" << std::endl;
	std::cin >> first_size;
	std::cout << "Second size:" << std::endl;
	std::cin >> second_size;
	std::cout << "Value:" << std::endl;
	std::cin >> value;
	return matrix<double>(first_size, second_size, value);
}

matrix<std::complex<float>> cfloatinit()
{
	unsigned first_size, second_size;
	float re , im;
	std::cout << "First size:" << std::endl;
	std::cin >> first_size;
	std::cout << "Second size:" << std::endl;
	std::cin >> second_size;
	std::cout << "Value:";
	std::cout << "real part:" << std::endl;
	std::cin >> re;
	std::cout << "imaginary part:" << std::endl;
	std::cin >> im;
	return matrix<std::complex<float>>(first_size, second_size, std::complex<float>(re, im));
}

matrix<std::complex<double>> cdoubleinit()
{
	unsigned first_size, second_size;
	double re, im;
	std::cout << "First size:" << std::endl;
	std::cin >> first_size;
	std::cout << "Second size:" << std::endl;
	std::cin >> second_size;
	std::cout << "Value:";
	std::cout << "real part:" << std::endl;
	std::cin >> re;
	std::cout << "imaginary part:" << std::endl;
	std::cin >> im;
	return matrix<std::complex<double>>(first_size, second_size, std::complex<double>(re, im));
}




int main()
{
	unsigned choice = 1, number;
	unsigned type;
	std::cout << "Type:" << std::endl;
	std::cout << "1) INT" << std::endl;
	std::cout << "2) FLOAT" << std::endl;
	std::cout << "3) DOUBLE" << std::endl;
	std::cout << "4) STD::COMPLEX<FLOAT>" << std::endl;
	std::cout << "5) STD::COMPLEX<DOUBLE>" << std::endl;
	std::cin >> type;
	switch (type)
	{
	case 1:
	{
		std::cout << "First matrix:" << std::endl;
		matrix<int> first_matrix = intinit();
		std::cout << "Second matrix:" << std::endl;
		matrix<int> second_matrix = intinit();
		while (choice)
		{
			std::cout << menu;
			std::cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("cls");
				try {
					matrix<int> res = first_matrix + second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 2:
			{
				system("cls");
				try {
					matrix<int> res = first_matrix - second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 3:
			{
				system("cls");
				try {
					matrix<int> res = first_matrix * second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 4:
			{
				system("cls");
				int mvalue;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:";
				std::cin >> mvalue;
				if (number == 1) {
					try {
						matrix<int> res = first_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<int> res = second_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 5:
			{
				system("cls");
				int dvalue;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:";
				std::cin >> dvalue;
				if (number == 1) {
					try {
						matrix<int> res = first_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<int> res = second_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 6:
			{
				system("cls");
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				if (number == 1) {
					try {
						int res = first_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						int res = second_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 0:
				system("cls");
				choice = 0;
				break;
			default:
				system("cls");
				break;
			}
		}
		break;
	}
	case 2:
	{
		std::cout << "First matrix:" << std::endl;
		matrix<float> first_matrix = floatinit();
		std::cout << "Second matrix:" << std::endl;
		matrix<float> second_matrix = floatinit();
		while (choice)
		{
			std::cout << menu;
			std::cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("cls");
				try {
					matrix<float> res = first_matrix + second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 2:
			{
				system("cls");
				try {
					matrix<float> res = first_matrix - second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 3:
			{
				system("cls");
				try {
					matrix<float> res = first_matrix * second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 4:
			{
				system("cls");
				float mvalue;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value";
				std::cin >> mvalue;
				if (number == 1) {
					try {
						matrix<float> res = first_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<float> res = second_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 5:
			{
				system("cls");
				float dvalue;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value";
				std::cin >> dvalue;
				if (number == 1) {
					try {
						matrix<float> res = first_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<float> res = second_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 6:
			{
				system("cls");
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				if (number == 1) {
					try {
						float res = first_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						float res = second_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 0:
				system("cls");
				choice = 0;
				break;
			default:
				system("cls");
				break;
			}
		}
		break;
	}
	case 3:
	{
		std::cout << "First matrix:" << std::endl;
		matrix<double> first_matrix = doubleinit();
		std::cout << "Second matrix:" << std::endl;
		matrix<double> second_matrix = doubleinit();
		while (choice)
		{
			std::cout << menu;
			std::cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("cls");
				try {
					matrix<double> res = first_matrix + second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 2:
			{
				system("cls");
				try {
					matrix<double> res = first_matrix - second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 3:
			{
				system("cls");
				try {
					matrix<double> res = first_matrix * second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 4:
			{
				system("cls");
				double mvalue;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:";
				std::cin >> mvalue;
				if (number == 1) {
					try {
						auto res = first_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<double> res = second_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 5:
			{
				system("cls");
				double dvalue;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:";
				std::cin >> dvalue;
				if (number == 1) {
					try {
						matrix<double> res = first_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<double> res = second_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 6:
			{
				system("cls");
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				if (number == 1) {
					try {
						double res = first_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						double res = second_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 0:
				system("cls");
				choice = 0;
			default:
				system("cls");
				break;
			}
		}
		break;
	}
	case 4:
	{
		std::cout << "First matrix:" << std::endl;
		matrix<std::complex<float>> first_matrix = cfloatinit();
		std::cout << "Second matrix:" << std::endl;
		matrix<std::complex<float>> second_matrix = cfloatinit();
		while (choice)
		{
			std::cout << menu;
			std::cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("cls");
				try {
					matrix<std::complex<float>> res = first_matrix + second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 2:
			{
				system("cls");
				try {
					matrix<std::complex<float>> res = first_matrix - second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 3:
			{
				system("cls");
				try {
					matrix<std::complex<float>> res = first_matrix * second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 4:
			{
				system("cls");
				float mre, mim;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:" << std::endl;
				std::cout << "Real part:";
				std::cin >> mre;
				std::cout << "Imaginary part:";
				std::cin >> mim;
				std::complex<float> mvalue(mre, mim);
				if (number == 1) {
					try {
						matrix<std::complex<float>> res = first_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<std::complex<float>> res = second_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 5:
			{
				system("cls");
				float dre, dim;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:" << std::endl;
				std::cout << "Real part:";
				std::cin >> dre;
				std::cout << "Imaginary part:";
				std::cin >> dim;
				std::complex<float> dvalue(dre, dim);
				if (number == 1) {
					try {
						matrix<std::complex<float>> res = first_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<std::complex<float>> res = second_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 6:
			{
				system("cls");
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				if (number == 1) {
					try {
						std::complex<float> res = first_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						std::complex<float> res = second_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 0:
				system("cls");
				choice = 0;
			default:
				system("cls");
				break;
			}
		}
		break;
	}
	case 5:
	{
		std::cout << "First matrix:" << std::endl;
		matrix<std::complex<double>> first_matrix = cdoubleinit();
		std::cout << "Second matrix:" << std::endl;
		matrix<std::complex<double>> second_matrix = cdoubleinit();
		while (choice)
		{
			std::cout << menu;
			std::cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("cls");
				try {
					matrix<std::complex<double>> res = first_matrix + second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 2:
			{
				system("cls");
				try {
					matrix<std::complex<double>> res = first_matrix - second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 3:
			{
				system("cls");
				try {
					matrix<std::complex<double>> res = first_matrix * second_matrix;
					std::cout << res << std::endl;
				}
				catch (const char* err) {
					std::cout << err << std::endl;
				}
				break;
			}
			case 4:
			{
				system("cls");
				double mre, mim;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:" << std::endl;
				std::cout << "Real part:";
				std::cin >> mre;
				std::cout << "Imaginary part:";
				std::cin >> mim;
				std::complex<double> mvalue(mre, mim);
				if (number == 1) {
					try {
						matrix<std::complex<double>> res = first_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<std::complex<double>> res = second_matrix * mvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 5:
			{
				system("cls");
				double dre, dim;
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				std::cout << "Value:" << std::endl;
				std::cout << "Real part:";
				std::cin >> dre;
				std::cout << "Imaginary part:";
				std::cin >> dim;
				std::complex<double> dvalue(dre, dim);
				if (number == 1) {
					try {
						matrix<std::complex<double>> res = first_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						matrix<std::complex<double>> res = second_matrix / dvalue;
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 6:
			{
				system("cls");
				std::cout << "Number of matrix?" << std::endl;
				std::cin >> number;
				if (number == 1) {
					try {
						std::complex<double> res = first_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				if (number == 2) {
					try {
						std::complex<double> res = second_matrix.Trace();
						std::cout << res << std::endl;
					}
					catch (const char* err) {
						std::cout << err << std::endl;
					}
				}
				break;
			}
			case 0:
				system("cls");
				choice = 0;
			default:
				system("cls");
				break;
			}
		}
		break;
	}
	default:
		break;
	}
}