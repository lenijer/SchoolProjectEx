#include "pch.h"
#include <iostream>

/*
	kitty cats
*/

int age;

int main() {
	std::cout << "Enter your age: ";
	std::cin >> age;
	if (age >= 20){
		std::cout << "You are an adult\n";
	}else if (age < 12){
		std::cout << "You are a child\n";
	}else{
		std::cout << "You are a teenager\n";
	}
	return 0;
}