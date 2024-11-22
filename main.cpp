#include "TextBox.hpp"
#include <iostream>

using namespace std;

int main() {
	TextBox test;
	
	cout << "test value equal to \"\"? " << boolalpha << (test.getValue() == "") << endl;

	test.setValue("hello");
	cout << "value for test is: " << test.getValue() << endl;

	return 0;
}