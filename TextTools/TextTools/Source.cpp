#include <iostream>
#include <string>
#include "MyCircle.h"

using namespace std;

void main()
{
	MyCircle C;
	C.m_x = 10;
	C.m_y = 10; 
	C.m_radius = 10;
	C.DrawCircle();
	C.gotoxy(25, 15);
	cout << "Beatriz";

	while (1);
}



