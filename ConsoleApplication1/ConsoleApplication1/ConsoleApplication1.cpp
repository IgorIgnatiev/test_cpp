// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"C_Window_Big.h"
#include"C_Window_Small.h"

int main()
{
	C_Window_Small window_small;
	std::cout << window_small;
	window_small.open();
	std::cout << window_small;
	C_Window_Big window_big;
	std::cout << window_big;
}
