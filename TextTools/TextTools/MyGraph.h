#pragma once
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <vector>
#include "MyRectangle.h"

/// <summary>
/// 
///  Since I am doing file abstraction, I've made my parent class public so that my child 
///  class may inherit the parent variables. My primary goal of file abstraction was to disperse
///  the lines of code among various classes and improve organization.
/// 
/// </summary>

using namespace std;

const int BX_N_BRDR_COLOR = 9; //boxes and borders constant color

const int m_ROWS{ 5 };
const int m_COLUMS{ 5 };
const int horizontal_X{ 145 };

class MyGraph
{
public:

	fstream m_inputFile; //file stream object

	int m_graph_array[5][5]{}; //member graph array

	int m_y_counter{ 8 };//counter to increment text (y axis) position, starts at 8

	//handle console output, important for handling console text color,
	//cursor movememnt and console resizing
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	///////Utility Functions////////

	void hideCursor(); //hides the cursor so theres less flickering

	void gotoxy(int x, int y); //move cursor to a certain position in the console window

	void resizeConsoleWindow(int width, int height); //set a fixed console window size

	void verticalLine(int x, int y, int lenght); // draws vertical lines, using Extended ASCII character

	void horizontalLine(int x, int y, int lenght); // draws horizontal lines, using Extended ASCII character

	/////////Constructors/////////

	MyGraph();// empty constructor

	MyGraph(int input_array[m_ROWS][m_COLUMS]); // constructor takes a 2D array

	MyGraph(string inputFILE); //constructor takes a string

	/////Draw Function/////

	void DrawGraph(); //main function that draws the data structure graph

	void moveText_Right(int moveright, int textsize, int color); // simulate text moving right, decreasing in size
	void startText_Left(int moveright, int textsize, int color); // simulate text moving right, increasing in size

	void DisplayGraphBorders(); // display borders by creating rectangle objects and some ascii text
	void DisplayCoordinatesText(); //coordinates ascii text
	void DisplayGraphDataStructureText(); //graph data structure ascii text
	void DisplayMarioAsciiArt(); // display mario ascii art

	// draw each node box
	void drawA_box();
	void drawB_box();
	void drawC_box();
	void drawD_box();
	void drawE_box();

	// connect each node
	void connectA_to_B();
	void connectA_to_C();
	void connectA_to_D();
	void connectA_to_E();
	void connectB_to_C();
	void connectB_to_D();
	void connectB_to_E();
	void connectC_to_D();
	void connectC_to_E();
	void connectD_to_E();
};