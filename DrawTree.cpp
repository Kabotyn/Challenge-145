#include <iostream>
#include "DrawTree.h"

// reads data from user in specyfic format, separate by space;
void DrawTree::readDataFromUser() {
	int h;
	char l, b;
	
	std::cout << "<height (odd min 3 max 21)> <base_char> <leaves_char>" << std::endl;
	do {
		std::cin >> h >> b >> l;
	} while ((h % 2 != 1) && ( h >= 3 && h <= 21));
	
	
	height = h;
	base = b;
	leaves = l;
	
}


// multiples c by some number
// example: c = "-", times = 3  -> returns  "---"
std::string DrawTree::multipleChar(char c, int times){
	if(times <= 0) return "";
	
	std::string output = "";
	
	for (int i = 0; i < times; i++) {
		output.insert(output.end(), c); // add char c to the end of string output
	}
	return output;
}

// generate tree to string variable
void DrawTree::generateTree() {
	std::string output = "";
	int leaves_iterator = 1;
	
	for (int line_number = 1; line_number <= (height - 1); line_number++) {
		output += multipleChar(' ', (height - line_number - 1));
		output += multipleChar(leaves, leaves_iterator);
		leaves_iterator += 2;
		
		output += "\n";
	}
	
	// in the end we need to add base
	output += multipleChar(' ', (height - 3));
	output += multipleChar(base, 3); // base
	output += "\n";
	
	tree = output;
}

// draw tree on screen
void DrawTree::showTree() {
	std::cout << tree;
}