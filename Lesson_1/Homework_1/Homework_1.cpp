#include <iostream>

int main() {
	int width = 10;
	int height = 5;

	std::cout << "I love C++\n";

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || j == 0 || i == (height-1) || j == (width-1)) {
				std::cout << "* ";
			}
			else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}

}