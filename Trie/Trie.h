#pragma once
#include<iostream>
#include<string>

class Trie
{
private:
	struct Node
	{
		Node* letters[26]; //onlyLowerCase
		bool wordEnd;
		Node()
		{
			for (size_t i = 0; i < 26; i++)
			{
				letters[i] = nullptr;
			}
			wordEnd = false;
		}
	};

	Node* root;
	void deleteNodes(Node* node);
public:
	Trie();
	~Trie();
	void addWord(const std::string&);
	bool searchWord(const std::string&) const;

};

