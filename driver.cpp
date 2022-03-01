#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	
	int a = 10;
	float b = 15.5;

	int *p1 = &a;
	float *p2 = &b;

	std::cout << "The value of variable 'a' is: " << &a << std::endl;
	std::cout << "The address of variable 'a' is: " << &a << std::endl;
	std::cout << "The value of variable 'p1' is: " << p1 << std::endl;
	std::cout << "The value of '*p1' is: " << *p1 << std::endl;

	std::cout << "The value of variable 'b' is: " << b << std::endl;
	std::cout << "The address of variable 'b' is: " << &b << std::endl;
	std::cout << "The value of variable 'p2' is: " << p2 << std::endl;
	std::cout << "The value of '*p2' is: " << *p2 << std::endl;

	std::cout << std::endl << "Part 2: " << std::endl;

	std::string filename;
	int size;

	if (argc == 1) {
		filename = "single_row.txt";
		size = 10;
	} else {
		filename = argv[1];
		size = std::stoi(argv[2]);
	}

	std::ifstream in(filename);

	if (!in) {
		std::cout << "Couldn't open file " << filename << std::endl;
	}

	int *values = new int[size];
	int n_read = 0;

	for (int i = 0; i < size;++i) {
		in >> values[i];
		if(in)
			++n_read;
		else
			break;
	}

	in.close();

	//Calculate the average value of all the integer values in our file.

	float avg = 0.0;

	for (int i =0; i < n_read; ++i) {
		avg += values[i];
	}

	std::cout << "The Average Value of " << filename << " is: " << (avg/(float)n_read) << std::endl;

	delete [] values;

	return 0;
}