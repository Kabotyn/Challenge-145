#include <iostream>
#include "DrawTree.h"

using namespace std;

int main (int argc, char * const argv[]) {

	DrawTree Tree;
	Tree.readDataFromUser();
	Tree.generateTree();
	Tree.showTree();
	
    return 0;
}
