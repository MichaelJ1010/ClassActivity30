#include "./TextBox.hpp"
#include <string>
#include <iostream>

using namespace std;

string TextBox::getValue()const {
	return value;
}
void TextBox::setValue(string value) {
	this->value = value;
	cout << "setting value to " << value << endl;
}

