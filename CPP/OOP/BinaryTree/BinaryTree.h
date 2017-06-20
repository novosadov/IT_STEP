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

private:

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
				TreeNode* newNode = new TreeNode(value);
				node->Left = newNode;
				newNode->Parent = node;
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
				TreeNode* newNode = new TreeNode(value);
				node->Right = newNode;
				newNode->Parent = node;
			}
			else
			{
				InsertRecursive(node->Right, value);
			}
		}
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

public:
	BinaryTree() = default;

	~BinaryTree()
	{
		Clear();
	}

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

	void Print()
	{
		PrintRecursive(m_root);
	}

	TreeNode* FindRecursive(TreeNode* node, int value)
	{
		if (node != nullptr)
		{

			if (node->Data == value)
			{
				return node;
			}
			if (node->Data > value)
			{
				return FindRecursive(node->Left, value);

			}
			else
			{
				return FindRecursive(node->Right, value);
			}
		}
		else
		{
			return nullptr;
		}
	}

	TreeNode* Find(int value)
	{
		return FindRecursive(m_root, value);
	}

	void Erase(TreeNode* node)
	{
		if (node == nullptr)
		{
			return;
		}
		TreeNode* forReplace = nullptr;
		// TreeNode* newParent = node->Parent;
		bool nodeHasTwoChildren = false;
		if (node->Left != nullptr && node->Right != nullptr)
		{
			forReplace = node->Right;
			while (forReplace->Left != nullptr)
			{
				forReplace = forReplace->Left;
			}
			node->Data = std::move(forReplace->Data);
			node = forReplace;
			forReplace = nullptr;
			nodeHasTwoChildren = true;
		}

		TreeNode* newParent = node->Parent;
		if (node->Left != nullptr)
		{
			forReplace = node->Left;
		}
		else if (node->Right != nullptr)
		{
			forReplace = node->Right;
		}
		if (forReplace != nullptr)
		{
			forReplace->Parent = newParent;
		}
		if (newParent)
		{
			if (newParent->Left == node)
			{
				newParent->Left = forReplace;
			}
			else
			{
				newParent->Right = forReplace;
			}
		}
		if (!nodeHasTwoChildren && node == m_root)
		{
			m_root = forReplace;
		}
		delete node;
	}

	void Clear()
	{
		ClearRecursive(m_root);
		m_root = nullptr;
	}

	void ClearRecursive(TreeNode* node)
	{
		if (node == nullptr)
		{
			return;
		}
		ClearRecursive(node->Left);
		ClearRecursive(node->Right);
		delete node;
	}

	int GetCount()
	{
		return GetCountRecursive(m_root);
	}

	int GetCountRecursive(TreeNode* node)
	{
		if (node == nullptr)
		{
			return 0;
		}

		return GetCountRecursive(node->Left) + GetCountRecursive(node->Right) + 1;
	}
};
