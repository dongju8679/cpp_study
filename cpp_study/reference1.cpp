#include <iostream>


#if 0
int change_val(int* p) {
	*p = 3;

	return 0;
}

int main() {
	int number = 5;

	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;
}
#endif"


#if 0
int a = 3;
int& another_a = a;

another_a = 5;
std::cout << "a : " << a << std::endl;
std::cout << "another_a : " << another_a << std::endl;
#endif

#if 0
int a = 10;
int& another_a = a;

int b = 3;
another_a = b;

std::cout << "a = " << a << std::endl;

#endif

#if 0
const int& ref = 4;
int a = ref;
std::cout << "a = " << a << std::endl;
std::cout << "ref = " << ref << std::endl;
#endif

#if 0
int function() {
	int a = 2;
	return a;
}

int main() {
	int b = function();
	std::cout << "b = " << b << std::endl;

	return 0;
}
#endif

#if 0
int& function() {
	int a = 2;

	return a;
}

int main() {
	int b = function();
	b = 3;
	return 0;
}
#endif

int function() {
	int	a = 5;
	return a;
}

int main() {
	const int& c = function();
	std::cout << "c : " << c << std::endl;
	return 0;
}
