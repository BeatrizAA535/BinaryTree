#include <string>
#include <iostream>
#include "Coordinates.h"
#include "TextDraw.h"
#include "TextArt.h"
#include <fstream>
#include "MySound.h"
#include "BinaryTree.h"
using namespace std;




BoardData board[25][50];
Coordinates coor;
Coordinates b;
int xpos, ypos;
int points;


void Load(string filename, BoardData Interface[50][50])
{
    int rows, columns;
    ifstream input(filename);
    if (!input)
        return;
    input >> rows >> columns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            input >> Interface[i][j].symbol >> Interface[i][j].color >> Interface[i][j].bgcolor;
    }
    input.close();
}

void Display(int x, int y, int rows, int columns, BoardData Interface[50][50])
{
    Coordinates C;
    for (int i =0 ; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            C.gotoxy(j + x, i + y);
            C.setForeGroundAndBackGroundColor(Interface[i][j].color, Interface[i][j].bgcolor);
            cout << char(Interface[i][j].symbol);
        }
    }
}



void main()
{


    Load("files/zero.txt", board); //loads maze design from file 
    Display(30, 33, 1, 1, board);
    Load("files/FIRST.txt", board); //loads maze design from file 
    Display(30, 34, 1, 60, board);

    Load("files/zero.txt", board); //loads maze design from file 
    Display(28, 35, 1, 1, board);


    BinaryTree B(8, 60, 10);
    B.Insert(0);
    B.Insert(4);
    B.Insert(3);
    B.Insert(12);
    B.Insert(16);
    B.PrintTree();



    while (1);

}



