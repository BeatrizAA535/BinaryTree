#include <string>
#include "BinaryTree.h"
#include "MyRectangle.h"
#include "Connect.h"

BinaryTree::BinaryTree()
{

}

void BinaryTree::SetRoot(int v, int x, int y)
{
	root = new Node(v, x, y);
}

BinaryTree::BinaryTree(int v, int x, int y)
{
	SetRoot(v, x, y);
}

void BinaryTree::Insert(int val)
{
	InsertAt(root, val, 0);
}

void BinaryTree::InsertAt(Node* n, int val, int level)
{
	if (n == nullptr)
	{
		root = new Node(val, x, y);
	}
	else if (val < n->getValue())
	{
		if (n->left != nullptr)
		{
			level++;
			InsertAt(n->left, val, level);
		}
		else
		{
			level++;
			int ycalc, xcalc;
			xcalc = n->x - (XPADDING - (level * 3));
			ycalc = root->y + (level * 5);
			Node* t;
			t = new Node(val, xcalc, ycalc);
			n->left = t;
		}
	}
	else if (val > n->getValue())
	{
		if (n->right != nullptr)
		{
			level++;
			InsertAt(n->right, val, level);
		}
		else
		{
			level++;
			int ycalc, xcalc;
			xcalc = n->x + (XPADDING - (level * 3));
			ycalc = root->y + (level * 5);
			Node* t;
			t = new Node(val, xcalc, ycalc);
			n->right = t;
		}
	}
}

void BinaryTree::PrintLNR(Node* ptr)
{
	if (ptr->left != nullptr)
		PrintLNR(ptr->left);
	cout << ptr->getValue() << " ";
	if (ptr->right != nullptr)
		PrintLNR(ptr->right);
}


void BinaryTree::PrintNLR(Node* ptr)
{
	cout << ptr->getValue() << " ";
	if (ptr->left != nullptr)
		PrintLNR(ptr->left);
	if (ptr->right != nullptr)
		PrintLNR(ptr->right);
}

void BinaryTree::PrintLRN(Node* ptr)
{
	if (ptr->left != nullptr)
		PrintLNR(ptr->left);
	if (ptr->right != nullptr)
		PrintLNR(ptr->right);
	cout << ptr->getValue() << " ";
}

void BinaryTree::FillAdjacencyMatrix(Node* ptr, int adj[50][50])
{
	if (ptr == nullptr)
		return;
	if (ptr->left != nullptr)
		adj[ptr->getValue()][ptr->left->getValue()] = 1;
	if (ptr->right != nullptr)
		adj[ptr->getValue()][ptr->right->getValue()] = 1;
	FillAdjacencyMatrix(ptr->left, adj);
	FillAdjacencyMatrix(ptr->right, adj);
}

void BinaryTree::PrintAdjacencyMatrix(int adj[50][50])
{
	int y;
	y = 35;

	for (int i = 0; i < 20; i++)            //loops through columns 
	{
		for (int j = 0; j < 20; j++)       //loops through rows
		{

			cout << adj[i][j] << "  ";      //displays what is in array depending on row and column 
		}
		cout << endl;
		cout << "                              ";
		//gotoxy(10, 35 - 1);


	}
	gotoxy(31, 33);

	cout << "  1  2  3  4  5  6  7  8  9 10 11 12 13 15 16 17 18 19 20 ";

	//gotoxy()
}


void BinaryTree::PrintTree()
{
	MyRectangle R(12, 1, 100, 4, char(220), true, 15, 15);  //creates Rectangle using MyRectangle class
	R.Draw();                                              //Draw Rectangle using Draw() function
	PrintAt(root);
	gotoxy(15, 3);
	setForeGroundAndBackGroundColor(15, 13);               //change color
	cout << "LNR: ";
	PrintLNR(root);
	gotoxy(47, 3);
	setForeGroundAndBackGroundColor(10, 14);               //change color
	cout << "NLR: ";
	PrintNLR(root);
	gotoxy(80, 3);
	setForeGroundAndBackGroundColor(8, 11);                 //change color 
	cout << "LRN: ";
	PrintLRN(root);

	//gotoxy(10, 35);
	gotoxy(30, 35);
	setcolor(12);
	FillAdjacencyMatrix(root, adj);
	PrintAdjacencyMatrix(adj);




}




void BinaryTree::PrintAt(Node* n, int xParent, int yParent)
{
	string value;
	value = to_string(n->getValue());
	MyRectangle box;
	box.DrawSkelaton(n->x - 3, n->y - 3, BOXWIDTH, BOXHEIGHT, value);

	// if the child has a parent, connect it to parent
	if (xParent != -1)
	{
		int x1, y1, // current child Axis
			x2, y2; // parent Axis
		x1 = n->x;
		y1 = n->y;
		x2 = xParent;
		y2 = yParent;

		Connect C;
		C.Link(x2, y2, x1, y1 - BOXHEIGHT - 1);
		// display up connector
		gotoxy(x1, y1 - BOXHEIGHT - 1);
		cout << char(193);
		gotoxy(x2, y2 - 1);
		cout << char(194);
	}

	/*gotoxy(n->x, n->y);
	cout << n->getValue();*/
	if (n->right != nullptr)
	{
		PrintAt(n->right, n->x, n->y);
	}
	if (n->left != nullptr)
	{
		PrintAt(n->left, n->x, n->y);
	}


}

void BinaryTree::DeleteTree()
{
	DeleteTreeAt(root);
	root = nullptr;
}

void BinaryTree::DeleteTreeAt(Node* n)
{
	if (n == nullptr)
		return;
	if (n->left != nullptr)
		DeleteTreeAt(n->left);
	if (n->right != nullptr)
		DeleteTreeAt(n->right);
	delete n;
}

bool BinaryTree::IsFull()
{
	return IsFullCalc(root);
}

bool BinaryTree::IsFullCalc(Node* ptr)
{
	if (ptr == nullptr)
		return true;
	if ((ptr->left == nullptr && ptr->right != nullptr) ||
		(ptr->left != nullptr && ptr->right == nullptr))
	{
		return false;
	}
	return IsFullCalc(ptr->right);
	return IsFullCalc(ptr->left);
}

bool BinaryTree::IsComplete()
{
	int  hasLeftOnly = 0;  // 0 no left found,  1: at least 1 left found  2: right found
	bool x = IsCompleteCalc(root, &hasLeftOnly);
	if (hasLeftOnly == 2)
		return false;
	else if (x == true && hasLeftOnly == 1)
		return true;
}

bool BinaryTree::IsCompleteCalc(Node* ptr, int* hasLeft)
{
	if (ptr == nullptr)
		return true;

	if (ptr->right != nullptr && ptr->left == nullptr)
		*hasLeft = 2;
	if (ptr->right == nullptr && ptr->left != nullptr)
	{
		if (*hasLeft != 2)
			*hasLeft = 1;
	}
	if (ptr->right != nullptr && ptr->left == nullptr)
	{
		return false;
	}
	return IsCompleteCalc(ptr->right, hasLeft);
	return IsCompleteCalc(ptr->left, hasLeft);
}

