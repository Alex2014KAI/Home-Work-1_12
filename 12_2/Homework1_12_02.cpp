#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	int length{ 0 };
	std::ifstream inFile{ "in.txt" };

	inFile >> length;
	length++;

	int* arrayValue{ new int[length] };


	for (int i{ 0 }; i < length; i++) {
		inFile >> arrayValue[i];
	};
	inFile.close();

	for (int i{ length - 2 }; i >= 0; i--) {
		std::cout << arrayValue[i] << " ";
	}

	delete[] arrayValue;

return 0;
}

