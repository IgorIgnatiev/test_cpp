#include "C_Window.h"

C_Window::C_Window()
{
	this->height = 0.0;
	this->width = 0.0;
	this->is_opened = false;
}

C_Window::C_Window(double height, double width)
{
	this->height = height;
	this->width = width;
	this->is_opened = false;
}

void C_Window::open()
{
	if (this->is_opened == false)
	{
		this->is_opened = true;
	}
}

void C_Window::close()
{
	if (this->is_opened == true)
	{
		this->is_opened = false;
	}
}

std::ostream& operator<<(std::ostream& out, const C_Window& obj)
{
	if (obj.is_opened == true)
	{
		out << " ";
		for (int i = 0; i < obj.width * 2; i++)
		{
			out << "_";
		}
		out << "\n";
		for (int i = 0; i < obj.height - 1; i++)
		{
			out << "|";
			for (int j = 0; j < obj.width * 2; j++)
			{
				out << " ";
			}
			out << "|\n";
		}
		out << "|";
		for (int i = 0; i < obj.width * 2; i++)
		{
			out << "_";
		}
		out << "|\n";
	}
	else
	{
		out << " ";
		for (int i = 0; i < obj.width * 2; i++)
		{
			out << "_";
		}
		out << "\n";
		for (int i = 0; i < obj.height - 1; i++)
		{
			out << "|";
			for (int j = 0; j < obj.width * 2; j++)
			{
				out << "/";
			}
			out << "|\n";
		}
		out << "|";
		for (int i = 0; i < obj.width * 2; i++)
		{
			out << "_";
		}
		out << "|\n";
	}
	return out;
}
