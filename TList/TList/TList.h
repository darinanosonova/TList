#pragma once
#include <cstddef>
#include <iostream>

using namespace std;

struct TNode
{
	double value;
	TNode* pNext;
};

class TList
{
	TNode* pFirst;
	int size = 0;

public:
	TList()
	{
		pFirst = NULL;
	};
	~TList()
	{
		TNode* tmp;
		while (pFirst != NULL)
		{
			tmp = pFirst;
			pFirst = pFirst->pNext;
			delete tmp;
		}
	};
	void push(int elem)
	{
		TNode* newNode = new TNode();
		newNode->value = elem;
		newNode->pNext = pFirst;
		pFirst = newNode;
	};
	void print()
	{
		TNode* pTmp = pFirst;
		cout << '[';
		while (pTmp != NULL)
		{
			cout << pTmp->value << " ";
			pTmp = pTmp->pNext;
		}
		cout << ']';
	};
	
	void add_new_elem_after_max (int elem)
	{
		TNode* newNode = new TNode();
		newNode->value = elem;
		newNode->pNext = NULL;
		
			TNode* max = pFirst;

			TNode* node = pFirst;
			while (node->pNext != NULL)
			{
				if (node->value > max->value)
					max = node;

				node = node->pNext;
			}
			if (node->value > max->value)
				max = node;

			TNode* tmp = max->pNext;
			max->pNext = newNode;
			newNode->pNext = tmp;

		size++;
	}
};