//********************
//**** BiTree.h ******
//********************

#ifndef BiTree_H
#define BiTree_H

template<class T>
struct BiNode
{
	T data;
	BiNode<T> *lchild, *rchild;
};
template<class T>
class BiTree
{
public:
	BiTree(); //构造函数，建立一棵二叉树
	~BiTree(); //析构函数，释放各结点的存储空间
	void PreOrder(); //前序遍历二叉树
	void InOrder(); //中序遍历二叉树
	void PostOrder(); //后序遍历二叉树
	void LeverOrder(); //层序遍历二叉树
private:
	int count = 0;
	BiNode<T> *root; //指向根结点的指针
	BiNode<T> *Creat(BiNode<T> *bt); //构造函数调用
	void Release(BiNode<T> *bt); //析构函数调用
	void PreOrder(BiNode<T> *bt); //前序遍历函数调用
	void InOrder(BiNode<T> *bt); //中序遍历函数调用
	void PostOrder(BiNode<T> *bt); //后序遍历函数调用
};
#endif