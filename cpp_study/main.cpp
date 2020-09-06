#include <iostream>


namespace {
	int OnlyInThisFile() { return 0; }
	int only_in_this_file = 0;
} // namespace


int main() {
	int ret = 0;
	std::cout << "start cpp_study" << std::endl;
	OnlyInThisFile();
	only_in_this_file = 3;

	std::cout << "hi" << std::endl
		<< "my name is "
		<< "Psi" << std::endl;


	return ret;
}