#include <iostream>
#include <cctype>

int main()
{
	/*
	//Task 1
	int a1 = 0, d = 0, n = 0;
	std::cout << "Enter a1, d and n: ";
	std::cin >> a1 >> d >> n;

	while (true) {
		if (n > 1) {
			break;
		}
		else
		{
			std::cout << "n must be greater then 1\nEnter n one more time: ";
			std::cin >> n;
		}
	}

	for (int i = 1; i <= n; i++) {
		std::cout << "a" << i << " = " << a1 + d * (i - 1) << std::endl;
	}
	
	//Task 2
	// I can't understand the task: should I have 5 separate implementations (a-e) 
	// for the 5 shapes, where i simply input the number of rows and the length? Or should i have one single 
	// code that can draw these shapes by selecting the desired one from a "menu"?
	
	//Task 3
	int sum = 0;
	char character;
	while (true) {
		std::cout << "Enter character you want(if you want exit enter \".\"): ";
		std::cin >> character;

		if (std::isalnum(character)) {
			if (std::isalpha(character) && std::islower(character)) {
				character =  std::toupper(character);
				std::cout << "Result: " << character << std::endl;
			}
			else if(std::isdigit(character)){
				sum += static_cast<int>(character) - static_cast<int>('0');
				std::cout << "Result: " << sum << std::endl;
			}
		}
		else
		{
			if (character == '.') break;
			std::cout << "this character is not processed by the program\n";
		}

	}
	
	//Task 5
	int number = 0;
	int result = 1;
	while (true) {
		std::cout << "Enter the number: ";
		std::cin >> number;
		if (number <= 0) {
			std::cout << "Number must be greater then 0\n";
		}
		else {
			break;
		}
	}
	for (int i = 1; i <= number; i++) {
		result *= i;
	}
	std::cout << result;
	*/
	//Task 4
	int f0 = 0, f1 = 1, fn = 0, n = 0;
	while (true) {
		std::cout << "Enter the number: ";
		std::cin >> n;
		if (n < 0) {
			std::cout << "Number must be greater then 0\n";
		}
		else if(n == 0)
		{
			std::cout << "F" << n << " = " << f0;
			break;
		}
		else if (n == 1) {
			std::cout << "F" << n << " = " << f1;
			break;
		}
		else {
			for (int i = 2; i <= n; i++) {
				fn = f1 + f0;
				f0 = f1;
				f1 = fn;
			}
			std::cout << "F" << n << " = " << fn;
			break;
		}
	}
	
}
