#include "pch.h"
#include <iostream>
#include <string>

int age;
std::string name;
char nameletter;
double phonenumber;

int main() {
	std::cout << "\n enter your name: ";
	std::cin >> name;
	std::cout << "eneter the first letter of your name: ";
	std::cin >> nameletter;
	std::cout << "enter your age: ";
	std::cin >> age;
	std::cout << "please enter your phone number: ";
	std::cin >> phonenumber;
	std::cout << "| " << name << " || " << nameletter << " |" << "\n| " << age << " || " << phonenumber << " |";
	return 0;
}