// CMakeProject.cpp: определяет точку входа для приложения.
//

#include "CMakeProject.h"

using namespace std;

int main(){
	string text;
	cout << " Введите текст: ";
	std::getline(std::cin, text);
	
	cout << "\n\n Вы ввели - ";
	cout << text << "\n";
}
