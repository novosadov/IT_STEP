#pragma once
#include<iostream>

struct TreeNode
{
	int Data;
	TreeNode* Left = nullptr;
	TreeNode* Right = nullptr;
	TreeNode* Parent = nullptr;
	TreeNode(int value) :
		Data(value)
	{
	}
};

class BinaryTree
{
	TreeNode* m_root = nullptr;

public:
	BinaryTree() = default;

	void Insert(int value)
	{
		if (m_root == nullptr)
		{
			m_root = new TreeNode(value);
		}
		else
		{
			InsertRecursive(m_root, value);
		}
	}
	void InsertRecursive(TreeNode* node, int value)
	{
		if (value == node->Data)
		{
			return;
		}
		if (value < node->Data)
		{
			if (node->Left == nullptr)
			{
				TreeNode* NewNode = new TreeNode(value);
				node->Left = NewNode;
				NewNode->Parent = node;
			}
			else
			{
				InsertRecursive(node->Left, value);
			}

		}
		else
		{
			if (node->Right == nullptr)
			{
				TreeNode* NewNode = new TreeNode(value);
				node->Right = NewNode;
				NewNode->Parent = node;
			}
			else
			{
				InsertRecursive(node->Right, value);
			}
		}
	}
	void Print()
	{
		PrintRecursive(m_root);
	}

	void PrintRecursive(TreeNode* node)
	{
		if (node == nullptr)
		{
			return;
		}

		PrintRecursive(node->Left);
		std::cout << node->Data << " ";
		PrintRecursive(node->Right);
	}
};
