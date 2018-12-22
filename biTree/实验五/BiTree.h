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
	BiTree(); //���캯��������һ�ö�����
	~BiTree(); //�����������ͷŸ����Ĵ洢�ռ�
	void PreOrder(); //ǰ�����������
	void InOrder(); //�������������
	void PostOrder(); //�������������
	void LeverOrder(); //�������������
private:
	int count = 0;
	BiNode<T> *root; //ָ�������ָ��
	BiNode<T> *Creat(BiNode<T> *bt); //���캯������
	void Release(BiNode<T> *bt); //������������
	void PreOrder(BiNode<T> *bt); //ǰ�������������
	void InOrder(BiNode<T> *bt); //���������������
	void PostOrder(BiNode<T> *bt); //���������������
};
#endif