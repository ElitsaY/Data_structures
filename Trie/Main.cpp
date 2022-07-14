#include"Trie.h"

int main()
{
	Trie myTrie;
	myTrie.addWord("ellie");
	myTrie.addWord("elena");
	std::cout << myTrie.searchWord("elen") << std::endl;
}