#pragma once
#include<ostream>
class C_Window
{
protected:
	double height;
	double width;
public:
	C_Window();
	C_Window(double height, double width);

	friend std::ostream& operator <<(std::ostream& out, const C_Window& obj);
};

