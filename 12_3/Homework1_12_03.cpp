#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	int length{};
	std::cout << "Введите размер массива: ";
	std::cin >> length;

	int* myArray{ new int[length] {0} };
	
	for (int i{ 0 }; i < length; i++) {
		std::cout << "arr[" << i << "] = ";
		std::cin >> myArray[i];
	};

	std::ofstream outFile{ "out.txt" };
	
	if (outFile.is_open()) {
		outFile << length << std::endl;
		for (int i{ length - 1 }; i >= 0; i--) {
			outFile << myArray[i];
			if (i == 0) {
				break;
			};
			outFile << " ";
		};
	};
	
	outFile.close();
	delete[] myArray;


return 0;
}

