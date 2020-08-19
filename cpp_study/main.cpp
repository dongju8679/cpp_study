#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int ret = 0;

	map<string, int> m;

	m.insert(make_pair("a", 1));
	m.insert(make_pair("b", 2));
	m.insert(make_pair("c", 3));
	m.insert(make_pair("d", 4));
	m.insert(make_pair("e", 5));

	std::cout << "start cpp_study" << std::endl;

	return ret;
}