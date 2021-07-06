#include "C_Window.h"

C_Window::C_Window()
{
	this->height = 0.0;
	this->width = 0.0;
}

C_Window::C_Window(double height, double width)
{
	this->height = height;
	this->width = width;
}

std::ostream& operator<<(std::ostream& out, const C_Window& obj)
{
	out << " ";
	for (int i = 0; i < obj.width * 2; i++)
	{
		out << "_";
	}
	out << "\n";
	for (int i = 0; i < obj.height; i++)
	{
		out << "|";
		for (int j = 0; j <= obj.width; j++)
		{
			out << " ";
		}
		out << "|\n";
	}
	out << " ";
	for (int i = 0; i < obj.width * 2; i++)
	{
		out << "_";
	}
	
	return out;
}
