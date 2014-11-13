#include <iostream>

class DrawTree {
	
private:
	std::string tree; // ready to show tree
	int height;
	char leaves, base;
	
	std::string multipleChar(char c, int times);
	
public:
	
	void readDataFromUser();
	void generateTree();
	void showTree();
	
};