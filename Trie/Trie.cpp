#include"Trie.h"

Trie::Trie()
{
	root = new Node();
}

void Trie::deleteNodes(Node* node)
{
	for (size_t i = 0; i < 26; i++)
	{
		if (node->letters[i] != nullptr)
			deleteNodes(node->letters[i]);
	}
	delete node;
}

Trie::~Trie()
{
	deleteNodes(root);
}

void Trie::addWord(const std::string& word)
{
	Node* node = root;
	for (char c: word)
	{
		if (node->letters[c -'a'] == nullptr)
			node->letters[c -'a'] = new Node();
		node = node->letters[c - 'a'];
	}
	node->wordEnd = true;
}

bool Trie::searchWord(const std::string& word) const
{
	Node* node = root;

	for (char c : word)
	{
		if (node->letters[c - 'a'] == nullptr)
			return false;
		node = node->letters[c - 'a'];
	}
	return node->wordEnd;
}