//**********************
//***** BiTree.cpp *****
//**********************

#include "BiTree.h"
#include <iostream>
using namespace std;

template<class T>
BiTree<T>::BiTree()
{
	root = Creat(root);
}
template<class T>
BiTree<T>::~BiTree()
{
	Release(root);
}
template<class T>
void BiTree<T>::PreOrder()
{
	PreOrder(root);
}
template<class T>
void BiTree<T>::InOrder()
{
	InOrder(root);
}
template<class T>
void BiTree<T>::PostOrder()
{
	PostOrder(root);
}
template<class T>
void BiTree<T>::LeverOrder()
{
	const int MaxSize = 100;
	int front = -1, rear = -1; 
	BiNode<T> *Q[MaxSize], *q;
	if (root == NULL) return;
	Q[++rear] = root;
	while (front != rear)
	{
		q = Q[++front];
		cout << q->data;
		if (q->lchild != NULL) Q[++rear] = q->lchild;
		if (q->rchild != NULL) Q[++rear] = q->rchild;
	}
}
template<class T>
void BiTree<T>::PreOrder(BiNode<T> *bt)
{
	if (bt == NULL) return;
	else
	{
		cout << bt->data;
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}
template<class T>
void BiTree<T>::InOrder(BiNode<T> *bt)
{
	if (bt == NULL) return;
	else
	{
		InOrder(bt->lchild);
		cout << bt->data;
		InOrder(bt->rchild);
	}
}
template<class T>
void BiTree<T>::PostOrder(BiNode<T> *bt)
{
	if (bt == NULL) return;
	else
	{
		PostOrder(bt->lchild);
		PostOrder(bt->rchild);
		cout << bt->data;
	}
}
template<class T>
BiNode<T> *BiTree<T>::Creat(BiNode<T> *bt)
{
	T ch;
	if (count < 1)
	{
		cout << "请输入创建一棵二叉树的结点数据:" << endl;
		count++;
	}
	cin >> ch;
	if (ch == '#') bt = NULL;
	else
	{
		bt = new BiNode<T>;
		bt->data = ch;
		bt->lchild = Creat(bt->lchild);
		bt->rchild = Creat(bt->rchild);
	}
	return bt;
}
template <class T>
void BiTree<T>::Release(BiNode<T> *bt)
{
	if (bt != NULL)
	{
		Release(bt->lchild);   
		Release(bt->rchild);   
		delete bt;
	}
}