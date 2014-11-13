#include <iostream>

class DrawTree {
	
private:
	std::string tree; // ready to show tree
	int height;	// number of tree lines
	char leaves, base; // symbols for leaves and base
	
	std::string multipleChar(char c, int times);
	
public:
	
	void readDataFromUser();
	void generateTree();
	void showTree();
	
};