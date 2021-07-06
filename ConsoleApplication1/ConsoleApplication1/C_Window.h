#pragma once
#include<iostream>
class C_Window
{
protected:
	double height;
	double width;
	bool is_opened;
public:
	C_Window();
	C_Window(double height, double width);

	void open();
	void close();

	friend std::ostream& operator <<(std::ostream& out, const C_Window& obj);
};

