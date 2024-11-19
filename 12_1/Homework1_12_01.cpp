#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	std::string word{};

	std::ifstream inFile{ "in.txt" };

	if (inFile.is_open()) {
		while (inFile >> word) {
			std::cout << word << std::endl;
		};
	};
	inFile.close();


return 0;
}
