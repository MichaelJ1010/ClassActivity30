#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>

class TextBox {
private:
	std::string value;

public:
	TextBox() = default;
	explicit TextBox(std::string value);
	std::string getValue()const;
	void setValue(std::string value);
};
#endif