#include <iostream>
using namespace std;
#include "BiTree.cpp"  

void main()
{
	BiTree <char> a;
	cout << "------前序遍历------ " << endl;
	a.PreOrder();
	cout << endl;
	cout << "------中序遍历-----" << endl;
	a.InOrder();
	cout << endl;
	cout << "------后序遍历-----" << endl;
	a.PostOrder();
	cout << endl;
	cout << "------层序遍历-----" << endl;
	a.LeverOrder();
	cout << endl;
	system("pause");
}