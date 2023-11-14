// CMakeProject.cpp: определяет точку входа для приложения.
//

#include "CMakeProject.h"

using namespace std;

int main(){


#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	cout << " Введите текст: ";
	std::wstring text;
	std::getline(std::wcin, text);

	int size_needed = WideCharToMultiByte(CP_UTF8, 0, &text[0], (int)text.size(), NULL, 0, NULL, NULL);
    std::string utf8_str(size_needed, 0);
    WideCharToMultiByte(CP_UTF8, 0, &text[0], (int)text.size(), &utf8_str[0], size_needed, NULL, NULL);

	std::cout << "Вы ввели: " << utf8_str << std::endl;

#else
	string text;
	cout << " Введите текст: ";
	std::getline(std::cin, text);
	
	cout << "\n\n Вы ввели - ";
	cout << text << "\n";

#endif 

	//string text;
	//cout << " Введите текст: ";
	//std::getline(std::cin, text);
	//
	//cout << "\n\n Вы ввели - ";
	//cout << text << "\n";
}
