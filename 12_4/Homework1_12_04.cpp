#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	int row{ 0 };
	int column{ 0 };
	
	std::ifstream inFile{ "in.txt" };
	if (inFile.is_open()) {
		for (int i{ 0 }; i < 2; i++) {
			if (i == 0) {
				inFile >> row;
			};
			if (i == 1) {
				inFile >> column;
			};
		};
	};

	int** myArray{ new int* [row] };

	for (int i{ 0 }; i < row; i++) {
		myArray[i] = new int[column];
	};

	for (int i{ 0 }; i < row; i++) {
		for (int j{ 0 }; j < column; j++) {
			inFile >> myArray[i][j];
		};
	};

	inFile.close();

	for (int i{ 0 }; i < row; i++) {
		for (int j{ column - 1 }; j >= 0; j--) {
			std::cout << myArray[i][j] << " ";
		};
		std::cout << std::endl;
	};


	for (int i{ 0 }; i < row; i++) {
		delete[] myArray[i];
	};
	delete[] myArray;


return 0;
}
