#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>

int age;
std::string name;
char nameletter;
std::string phonenumber;

int main() {
	system("cls");
	/*std::cout << "\nEnter your name: ";
	std::getline(std::cin,name);
	std::cout << "eneter the first letter of your name: ";
	std::cin >> nameletter;*/
	std::cout << "Enter your age: ";
	std::cin >> age;
	if (age >= 20){
		std::cout << "You are an adult\n";
	}else if (age < 12){
		std::cout << "You are a child\n";
	}else{
		std::cout << "You are a teenager\n";
	}
	/*std::cout << "please enter your phone number: ";
	std::cin >> phonenumber;
	system("pause");
	std::cout << "| " << name << " || " << nameletter << " |" << "\n| " << age << " || " << phonenumber << " |";*/
	//_getch();
	return 0;
}