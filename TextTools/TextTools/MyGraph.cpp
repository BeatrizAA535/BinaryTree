#include "MyGraph.h"


void MyGraph::moveText_Right(int moveright, int textsize, int color)
{
    vector<vector<int>> coordText{
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
{177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,223,223,220,177,177,223,177,177,219,223,223,220,177,219,223,223,219,177,223,223,219,223,223,177,219,223,223,177,219,223,223,177},
{177,219,177,177,177,177,219,177,177,219,177,219,177,177,219,177,219,220,220,223,177,219,177,177,219,177,223,219,223,177,219,177,177,219,177,219,220,220,219,177,177,177,219,177,177,177,219,223,223,177,223,223,219,177},
{177,219,220,220,219,177,223,223,223,223,177,223,223,223,223,177,223,177,223,223,177,223,223,223,177,177,223,223,223,177,223,177,177,223,177,223,177,177,223,177,177,177,223,177,177,177,223,223,223,177,223,223,223,177},
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 5; i++)//move down
    {
        for (int j{ 0 }; j < textsize; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, color);
            gotoxy(j + moveright, i + 1);
            cout << char(coordText[i][j]);
        }
    }

}
void MyGraph::startText_Left(int moveright, int textsize, int color)
{
    vector<vector<int>> coordText{
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
{177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,223,223,220,177,177,223,177,177,219,223,223,220,177,219,223,223,219,177,223,223,219,223,223,177,219,223,223,177,219,223,223,177},
{177,219,177,177,177,177,219,177,177,219,177,219,177,177,219,177,219,220,220,223,177,219,177,177,219,177,223,219,223,177,219,177,177,219,177,219,220,220,219,177,177,177,219,177,177,177,219,223,223,177,223,223,219,177},
{177,219,220,220,219,177,223,223,223,223,177,223,223,223,223,177,223,177,223,223,177,223,223,223,177,177,223,223,223,177,223,177,177,223,177,223,177,177,223,177,177,177,223,177,177,177,223,223,223,177,223,223,223,177},
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 5; i++)//move down
    {
        for (int j{ 53 }; j > textsize; j--) //move right
        {
            SetConsoleTextAttribute(hConsole, color);
            gotoxy(j + moveright, i + 1);
            cout << char(coordText[i][j]);
        }
    }
}

void MyGraph::DisplayGraphBorders()
{
    MyRectangle borderTitle(0, 0, 116, 7, char(219), true, BX_N_BRDR_COLOR); //border for graph title
    borderTitle.Draw();

    MyRectangle coordinateTitle(115, 0, 56, 7, char(219), true, BX_N_BRDR_COLOR); //weight title border
    coordinateTitle.Draw();

    MyRectangle edgeBorder(0, 0, 171, 60, char(219), true, BX_N_BRDR_COLOR); //border around the console edge
    edgeBorder.Draw();

    MyRectangle Bordersplit(115, 0, 56, 60, char(219), true, BX_N_BRDR_COLOR); //border separates graph and weight
    Bordersplit.Draw();

    MyRectangle marioBorder(115, 28, 56, 32, char(219), true, BX_N_BRDR_COLOR); //mario border
    marioBorder.Draw();
}

void MyGraph::DisplayMarioAsciiArt()
{
    SetConsoleTextAttribute(hConsole, 9);

    vector<vector<int>> marioArt{
    {32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,177,177,177,177,177,177,32,32,32,32,219,219,219,219,219,32,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,32,32,177,177,177,177,177,177,177,177,177,177,177,177,32,32,219,219,219,219,219,219,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,177,177,177,177,177,177,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,32,32,32,32,},
{32,32,32,32,32,32,32,177,177,177,177,177,177,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,32,32,32,32,32,},
{32,32,32,32,32,32,32,177,177,32,32,32,32,219,219,219,219,219,219,219,219,219,219,219,219,32,32,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,32,32,219,219,32,32,219,219,32,32,177,177,177,177,32,32,32,32,},
{32,32,32,32,32,219,219,32,32,32,32,219,219,219,219,219,219,32,32,219,219,32,32,219,219,32,32,32,177,177,177,32,32,32,32,},
{32,32,32,32,219,219,219,219,219,32,32,32,32,219,219,219,219,219,219,219,219,219,219,219,219,219,219,32,32,177,177,32,32,32,32,},
{32,32,32,32,219,219,219,32,219,32,32,219,219,219,219,32,32,219,219,219,219,219,219,219,219,219,219,32,32,177,177,32,32,32,32,},
{32,32,32,32,32,223,219,219,219,219,219,219,219,219,32,32,32,32,32,32,32,219,219,219,219,32,32,32,32,177,177,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,219,32,32,32,32,32,32,32,32,32,32,32,177,177,177,177,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,219,219,219,219,219,219,32,32,177,177,177,177,177,32,32,32,32,32,},
{32,32,32,32,32,32,32,177,177,177,177,32,32,32,32,32,32,32,32,32,32,32,32,32,32,177,177,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,177,177,177,177,177,177,177,177,32,176,220,176,32,32,32,32,32,220,176,32,32,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,176,177,177,177,177,177,177,177,177,32,176,32,32,219,219,219,219,32,32,32,176,32,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,176,177,177,177,177,177,177,177,32,32,219,219,219,219,219,219,219,219,32,176,176,32,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,176,176,32,177,177,177,177,177,177,177,177,32,219,219,219,219,32,32,32,176,176,176,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,176,176,176,32,177,177,177,177,177,177,32,32,32,32,32,32,32,176,176,176,176,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,32,176,176,176,176,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,32,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,32,176,176,176,176,176,176,176,32,254,254,32,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,32,32,32,176,176,176,176,32,254,254,254,254,32,32,32,32,},
{32,32,32,32,32,254,254,254,254,176,176,176,176,176,176,176,176,32,32,32,32,32,32,32,254,254,254,254,254,254,254,254,32,32,32,},
{32,32,32,32,254,254,254,254,254,176,176,176,176,176,176,176,32,32,32,32,32,32,32,32,254,254,254,254,254,254,254,32,32,32,32,},
{32,32,32,32,254,254,254,254,254,176,176,176,176,176,32,32,32,32,32,32,32,32,32,32,32,254,254,254,254,32,32,32,32,32,32,},
{32,32,32,32,254,254,254,254,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,},
{32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,} };

    for (int i{ 0 }; i < 28; i++)//move down
    {
        for (int j{ 0 }; j < 33; j++) //move right
        {
            if (marioArt[i][j] == 176)
            {
                SetConsoleTextAttribute(hConsole, 9);
            }
            if (marioArt[i][j] == 177)
            {
                SetConsoleTextAttribute(hConsole, 12);
            }
            if (marioArt[i][j] == 219)
            {
                SetConsoleTextAttribute(hConsole, 14);
            }
            if (marioArt[i][j] == 254)
            {
                SetConsoleTextAttribute(hConsole, 6);
            }
            if (marioArt[i][j] == 220)
            {
                SetConsoleTextAttribute(hConsole, 15);
            }
            if (marioArt[i][j] == 223)
            {
                SetConsoleTextAttribute(hConsole, 15);
            }
            gotoxy(j + 125, i + 30);
            cout << char(marioArt[i][j]);
        }
    }
    SetConsoleTextAttribute(hConsole, 15);
    gotoxy(143, 32);
    cout << "M";


}

void MyGraph::DisplayCoordinatesText()
{
    vector<vector<int>> coordinatesText{
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
{177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,223,223,220,177,177,223,177,177,219,223,223,220,177,219,223,223,219,177,223,223,219,223,223,177,219,223,223,177,219,223,223,177},
{177,219,177,177,177,177,219,177,177,219,177,219,177,177,219,177,219,220,220,223,177,219,177,177,219,177,223,219,223,177,219,177,177,219,177,219,220,220,219,177,177,177,219,177,177,177,219,223,223,177,223,223,219,177},
{177,219,220,220,219,177,223,223,223,223,177,223,223,223,223,177,223,177,223,223,177,223,223,223,177,177,223,223,223,177,223,177,177,223,177,223,177,177,223,177,177,177,223,177,177,177,223,223,223,177,223,223,223,177},
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 5; i++)//move down
    {
        for (int j{ 0 }; j < 54; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, 62);
            gotoxy(j + 116, i + 1);
            cout << char(coordinatesText[i][j]);
        }
    }
}

void MyGraph::DisplayGraphDataStructureText()
{
    vector<vector<int>> datastructureText{
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
{177,177,177,177,177,177,177,177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,223,223,219,177,219,177,177,219,177,177,177,177,177,219,223,223,220,177,219,223,223,219,177,223,223,219,223,223,177,219,223,223,219,177,177,177,177,177,219,223,223,223,219,177,223,223,219,223,223,177,219,223,223,219,177,219,177,177,219,177,219,223,223,177,223,223,219,223,223,177,219,177,177,219,177,219,223,223,219,177,219,223,223,177,177,177,177,177,177,177},
{177,177,177,177,177,177,177,177,219,177,220,220,177,219,220,220,223,177,219,220,220,219,177,219,177,177,219,177,219,223,223,219,177,177,177,177,177,219,177,177,219,177,219,220,220,219,177,177,177,219,177,177,177,219,220,220,219,177,177,177,177,177,223,223,223,220,220,177,177,177,219,177,177,177,219,220,220,223,177,219,177,177,219,177,219,177,177,177,177,177,219,177,177,177,219,177,177,219,177,219,220,220,223,177,219,223,223,177,177,177,177,177,177,177},
{177,177,177,177,177,177,177,177,219,220,220,219,177,223,177,223,223,177,223,177,177,223,177,219,223,223,223,177,223,177,177,223,177,177,177,177,177,219,220,220,223,177,223,177,177,223,177,177,177,223,177,177,177,223,177,177,223,177,177,177,177,177,219,220,220,220,219,177,177,177,223,177,177,177,223,177,223,223,177,177,223,223,223,177,223,223,223,177,177,177,223,177,177,177,177,223,223,223,177,223,177,223,223,177,223,223,223,177,177,177,177,177,177,177},
{177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 5; i++)//move down
    {
        for (int j{ 0 }; j < 114; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, 62);
            gotoxy(j + 1, i + 1);
            cout << char(datastructureText[i][j]);
        }
    }
}

void MyGraph::drawB_box()
{
    MyRectangle B_box(20, 13, 20, 10, char(219), true, BX_N_BRDR_COLOR);
    B_box.Draw();

    vector<vector<int>> B_letter{
    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,219,187,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,201,205,205,219,219,187,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,219,203,188,177,177,177,177,177},
    {177,177,177,177,177,219,219,201,205,205,219,219,187,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,219,203,188,177,177,177,177,177},
    {177,177,177,177,177,200,205,205,205,205,205,188,177,177,177,177,177,177},
    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 8; i++)//move down
    {
        for (int j{ 0 }; j < 18; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, 62);
            gotoxy(j + 21, i + 14);
            cout << char(B_letter[i][j]);
        }
    }
}
void MyGraph::drawC_box()
{
    MyRectangle C_box2(80, 13, 20, 10, char(219), true, BX_N_BRDR_COLOR);
    C_box2.Draw();

    vector<vector<int>> C_letter{
    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
    {177,177,177,177,177,177,219,219,219,219,219,187,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,201,205,205,219,219,187,177,177,177,177,177},
    {177,177,177,177,177,219,219,186,177,177,200,205,188,177,177,177,177,177},
    {177,177,177,177,177,219,219,186,177,177,219,219,187,177,177,177,177,177},
    {177,177,177,177,177,200,219,219,219,219,219,201,188,177,177,177,177,177},
    {177,177,177,177,177,177,200,205,205,205,205,188,177,177,177,177,177,177},
    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 8; i++)//move down
    {
        for (int j{ 0 }; j < 18; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, 62);
            gotoxy(j + 81, i + 14);
            cout << char(C_letter[i][j]);
        }
    }
}
void MyGraph::drawD_box()
{
    MyRectangle D_box4(10, 48, 20, 10, char(219), true, BX_N_BRDR_COLOR);
    D_box4.Draw();

    vector<vector<int>> D_letter{

    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,219,187,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,201,205,205,219,219,187,177,177,177,177,177},
    {177,177,177,177,177,219,219,186,177,177,219,219,186,177,177,177,177,177},
    {177,177,177,177,177,219,219,186,177,177,219,219,186,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,219,201,188,177,177,177,177,177},
    {177,177,177,177,177,200,205,205,205,205,205,188,177,177,177,177,177,177},
    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 8; i++)//move down
    {
        for (int j{ 0 }; j < 18; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, 62);
            gotoxy(j + 11, i + 49);
            cout << char(D_letter[i][j]);
        }
    }
}
void MyGraph::drawA_box()
{
    MyRectangle A_box3(50, 33, 20, 10, char(219), true, BX_N_BRDR_COLOR);
    A_box3.Draw();

    vector<vector<int>> a_Letter
    { {177,177,177,177,177, 177, 177, 177, 177, 177, 177, 177, 177, 177,177,177,177,177},
    {177,177,177,177,177, 177, 219, 219, 219, 219, 219, 187, 177, 177,177 ,177,177,177},
    {177,177,177,177,177, 219, 219, 201, 205, 205, 219, 219, 187, 177,177,177,177,177},
    {177,177,177,177,177, 219, 219, 219, 219, 219, 219, 219, 186, 177,177,177,177,177},
    {177,177,177,177,177, 219, 219, 201, 205, 205, 219, 219, 186, 177,177,177,177,177},
    {177,177,177,177,177, 219, 219, 186, 177, 177, 219, 219, 186, 177,177,177,177,177},
    {177,177,177,177,177, 200, 205, 188, 177, 177, 200, 205, 188, 177,177,177,177,177},
    {177,177,177,177,177, 177, 177, 177, 177, 177, 177, 177, 177, 177,177,177,177,177} };

    for (int i{ 0 }; i < 8; i++)//move down
    {
        for (int j{ 0 }; j < 18; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, 62);
            gotoxy(j + 51, i + 34);
            cout << char(a_Letter[i][j]);
        }
    }
}
void MyGraph::drawE_box()
{
    MyRectangle E_box5(90, 48, 20, 10, char(219), true, BX_N_BRDR_COLOR);
    E_box5.Draw();

    vector<vector<int>> E_letter{
    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,219,219,187,177,177,177,177,177},
    {177,177,177,177,177,219,219,201,205,205,205,205,188,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,187,177,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,201,205,205,188,177,177,177,177,177,177,177},
    {177,177,177,177,177,219,219,219,219,219,219,219,187,177,177,177,177,177},
    {177,177,177,177,177,200,205,205,205,205,205,205,188,177,177,177,177,177},
    {177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177} };

    for (int i{ 0 }; i < 8; i++)//move down
    {
        for (int j{ 0 }; j < 18; j++) //move right
        {
            SetConsoleTextAttribute(hConsole, 62);
            gotoxy(j + 91, i + 49);
            cout << char(E_letter[i][j]);
        }
    }
}

void MyGraph::connectA_to_B()
{
    SetConsoleTextAttribute(hConsole, 13); //change font color - Pink

    horizontalLine(40, 18, 14);//create horizontal lines with parameters (x axis, y axis, and length)
    horizontalLine(40, 19, 14);

    verticalLine(53, 19, 14);//create vertical lines
    verticalLine(54, 19, 14);

    gotoxy(54, 18); //print corners
    cout << char(187);
    gotoxy(53, 19);
    cout << char(187);
}

void MyGraph::connectA_to_C()
{
    SetConsoleTextAttribute(hConsole, 6); //change font color - dark yellow
    horizontalLine(65, 18, 15);//create horizontal lines
    horizontalLine(65, 19, 15);

    verticalLine(64, 19, 14);//create vertical lines
    verticalLine(65, 19, 14);

    gotoxy(64, 18);//print corners
    cout << char(201);
    gotoxy(65, 19);
    cout << char(201);
}

void MyGraph::connectA_to_D()
{
    SetConsoleTextAttribute(hConsole, 9); //change font color - Blue 
    horizontalLine(30, 51, 22);//create horizontal lines
    horizontalLine(30, 52, 24);

    verticalLine(52, 43, 8);//create vertical lines
    verticalLine(53, 43, 10);

    gotoxy(52, 51);//print corners
    cout << char(188);
    gotoxy(53, 52);
    cout << char(188);
}

void MyGraph::connectA_to_E()
{
    SetConsoleTextAttribute(hConsole, 5); //change font color - dark Pink
    horizontalLine(68, 51, 22);//create horizontal lines
    horizontalLine(66, 52, 24);

    verticalLine(67, 43, 8);//create vertical lines
    verticalLine(66, 43, 10);

    gotoxy(67, 51); //print corners
    cout << char(200);
    gotoxy(66, 52);
    cout << char(200);
}

void MyGraph::connectB_to_C()
{
    SetConsoleTextAttribute(hConsole, 4); //change font color - dark Red
    horizontalLine(40, 15, 40);//create horizontal lines
    horizontalLine(40, 16, 40);
}

void MyGraph::connectB_to_D()
{
    SetConsoleTextAttribute(hConsole, 15); //change font color - Blue
    verticalLine(23, 23, 25);//create vertical lines
    verticalLine(24, 23, 25);
}

void MyGraph::connectB_to_E()
{
    SetConsoleTextAttribute(hConsole, 11); //change font color -  Cyan
    verticalLine(29, 11, 2);//create vertical lines
    verticalLine(30, 11, 2);

    gotoxy(29, 10);//print corners
    cout << char(201);
    gotoxy(30, 11);
    cout << char(201);

    horizontalLine(30, 10, 75);//create horizontal lines
    horizontalLine(31, 11, 75);

    verticalLine(105, 11, 37);//create vertical lines
    verticalLine(104, 11, 37);

    gotoxy(105, 10);//print corners
    cout << char(187);
    gotoxy(104, 11);
    cout << char(187);
}

void MyGraph::connectC_to_D()
{
    SetConsoleTextAttribute(hConsole, 12); //change font color - Red

    horizontalLine(15, 8, 75);//create horizontal lines
    horizontalLine(14, 9, 76);

    verticalLine(90, 9, 4);//create vertical lines
    verticalLine(89, 9, 4);

    verticalLine(14, 9, 39);//create vertical lines
    verticalLine(15, 9, 39);

    gotoxy(14, 8); //print corners
    cout << char(201);
    gotoxy(15, 9);
    cout << char(201);

    gotoxy(90, 8);
    cout << char(187);
    gotoxy(89, 9);
    cout << char(187);
}

void MyGraph::connectC_to_E()
{
    SetConsoleTextAttribute(hConsole, 1); //change font color - Dark Blue

    verticalLine(96, 23, 25);//create vertical lines
    verticalLine(95, 23, 25);
}

void MyGraph::connectD_to_E()
{
    SetConsoleTextAttribute(hConsole, 10); //change font color - Green

    horizontalLine(30, 54, 60);//create horizontal lines
    horizontalLine(30, 55, 60);
}




MyGraph::MyGraph()
{
}
MyGraph::MyGraph(std::string inputFILE)
{
    m_inputFile.open(inputFILE); //open input file

    while (!m_inputFile.eof())
    {
        for (int i = 0; i < 5; i++) // for loop to pass elements of input file into member array
        {
            for (int j = 0; j < 5; j++)
            {
                m_inputFile >> m_graph_array[i][j];
            }
        }
    }
    m_inputFile.close();
}
void MyGraph::gotoxy(int x, int y)
{
    hideCursor();

    //move cursor to a position
    _COORD pos{};
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hConsole, pos);
}
void MyGraph::verticalLine(int x, int y, int lenght)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            gotoxy(i + x, j + y);
            cout << char(186);
        }
    }
}
void MyGraph::horizontalLine(int x, int y, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            gotoxy(i + x, j + y);
            cout << char(205);
        }
    }
}

void MyGraph::resizeConsoleWindow(int width, int height)
{
    HWND hwnd = GetConsoleWindow(); //Increase or decrease console window size
    //x,  y, width, height
    RECT rect = { 00, 00, width, height };
    MoveWindow(hwnd, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, TRUE);
}

void MyGraph::hideCursor()
{
    //This will hide the cursor every time gotoxy function is called
    CONSOLE_CURSOR_INFO CURSOR{};
    BOOL result;
    CURSOR.dwSize = 1;
    CURSOR.bVisible = FALSE;
    result = SetConsoleCursorInfo(hConsole, &CURSOR);
}

MyGraph::MyGraph(int input_array[m_ROWS][m_COLUMS])
{
    //for loop to pass the input array into the class member array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            m_graph_array[j][i] = input_array[j][i];
        }
    }
}
void MyGraph::DrawGraph()
{
    hideCursor(); //hide console cursor

    resizeConsoleWindow(1300, 1030); // increase or decrease console window size, width & height

    SetConsoleTitleA("draw graph.exe"); //change console title

    DisplayGraphBorders(); // use object's functions to print borders
    DisplayCoordinatesText(); // print ascii text
    DisplayGraphDataStructureText();
    DisplayMarioAsciiArt();

    drawA_box(); // display each node
    drawB_box();
    drawC_box();
    drawD_box();
    drawE_box();

    //if A is connected to B
    if (m_graph_array[0][1] != 0 && m_graph_array[1][0] != 0)
    {
        connectA_to_B(); // display A to B connection if the element in the array is greater than 1

        gotoxy(51, 20); //print weight
        cout << m_graph_array[0][1];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is connected to B"; // display text confirming connection

        SetConsoleTextAttribute(hConsole, 13); //change font color - Pink
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[0][1];

        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is NOT connected to B"; // display text confirming no connection
        m_y_counter += 2;
    }
    //if A is connected to C
    if (m_graph_array[0][2] != 0 && m_graph_array[2][0] != 0)
    {
        connectA_to_C(); // call function to connect nodes

        gotoxy(67, 20);//print weight
        cout << m_graph_array[0][2];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is connected to C";

        SetConsoleTextAttribute(hConsole, 6); //change font color - Dark Orange
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[0][2];
        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is NOT connected to C";
        m_y_counter += 2;
    }

    //if A is connected to D
    if (m_graph_array[0][3] != 0 && m_graph_array[3][0] != 0)
    {
        connectA_to_D();// call function to connect nodes

        gotoxy(50, 47);//print weight
        cout << m_graph_array[0][3];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is connected to D";

        SetConsoleTextAttribute(hConsole, 9); //change font color - Dark Blue
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[0][3];
        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is NOT connected to D";
        m_y_counter += 2;
    }

    //if A is connected to E
    if (m_graph_array[0][4] != 0 && m_graph_array[4][0] != 0)
    {
        connectA_to_E();// call function to connect nodes

        gotoxy(69, 47);//print weight
        cout << m_graph_array[0][4];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is connected to E";

        SetConsoleTextAttribute(hConsole, 5); //change font color - Dark Pink
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[0][4];

        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "A is NOT connected to E";
        m_y_counter += 2;
    }

    //if B is connected to C
    if (m_graph_array[1][2] != 0 && m_graph_array[2][1] != 0)
    {
        connectB_to_C();// call function to connect nodes

        gotoxy(60, 14);//print weight
        cout << m_graph_array[1][2];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "B is connected to C";

        SetConsoleTextAttribute(hConsole, 4); //change font color - Red
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[1][2];

        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "B is NOT connected to C";
        m_y_counter += 2;
    }

    //if B is connected to D
    if (m_graph_array[1][3] != 0 && m_graph_array[3][1] != 0)
    {
        connectB_to_D();// call function to connect nodes

        gotoxy(25, 35);//print weight
        cout << m_graph_array[1][3];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "B is connected to D";

        SetConsoleTextAttribute(hConsole, 15); //change font color - White
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[1][3];

        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "B is NOT connected to D";
        m_y_counter += 2;
    }

    //if B is connected to E
    if (m_graph_array[1][4] != 0 && m_graph_array[4][1] != 0)
    {
        connectB_to_E();// call function to connect nodes

        gotoxy(102, 12);//print weight
        cout << m_graph_array[1][4];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "B is connected to E";

        SetConsoleTextAttribute(hConsole, 11); //change font color - Cyan
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[1][4];
        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "B is NOT connected to E";
        m_y_counter += 2;
    }

    //if C is connected to D
    if (m_graph_array[2][3] != 0 && m_graph_array[3][2] != 0)
    {
        connectC_to_D();// call function to connect nodes

        gotoxy(17, 10);//print weight
        cout << m_graph_array[2][3];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "C is connected to D";

        SetConsoleTextAttribute(hConsole, 12); //change font color - Orange
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[2][3];
        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "C is NOT connected to D";
        m_y_counter += 2;
    }

    //if C is connected to E
    if (m_graph_array[2][4] != 0 && m_graph_array[4][2] != 0)
    {
        connectC_to_E();// call function to connect nodes

        gotoxy(94, 35);//print weight
        cout << m_graph_array[2][4];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "C is connected to E";

        SetConsoleTextAttribute(hConsole, 1); //change font color - Dark Blue
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[2][4];
        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "C is NOT connected to E";
        m_y_counter += 2;
    }

    //if D is connected to E
    if (m_graph_array[3][4] != 0 && m_graph_array[4][3] != 0)
    {
        connectD_to_E();// call function to connect nodes

        gotoxy(60, 56);//print weight
        cout << m_graph_array[3][4];

        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "D is connected to E";
        SetConsoleTextAttribute(hConsole, 10); //change font color - Green
        horizontalLine(horizontal_X, m_y_counter, 5);
        cout << ' ' << m_graph_array[3][4];

        m_y_counter += 2;
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 15); //change font color - WHITE
        gotoxy(125, m_y_counter);
        cout << "D is NOT connected to E";
        m_y_counter += 2;
    }

}
