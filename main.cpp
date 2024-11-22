#include "TextBox.hpp"
#include <iostream>

using namespace std;

int main() {
	TextBox test;
	TextBox test2("world");
	
	
	cout << "test value equal to \"\"? " << boolalpha << (test.getValue() == "") << endl;

	test.setValue("hello");
	cout << "value for test is: " << test.getValue() << endl;

	cout << "value for test2 is: " << test2.getValue() << endl;

	return 0;
}