#include <iostream>

int main() {
	std::cout << "Enter two number:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 > v2) {
		Print(v2, v1);
	}
	else {
		Print(v1, v2);
	}
}

int Print(int small, int large) {
	int temp = small;
	while (temp <= large) {		
		std::cout << temp << std::endl;
		temp++;
	}
}