#include "lab7.h"
#include <iostream>
using namespace std;
int main(void){
	BST<int> theTree;
	int data[20]={30, 10, 50, 5 , 15, 7, 12, 25, 45, 60, 35,80,40,37,42,43,70,90,17,29};
	for(int i=0;i<20;i++){
		theTree.insert(data[i]);
	}
	theTree.printPreOrder();
	cout << endl;
	theTree.printInOrder();
	cout << endl;
	for(int i=0;i<20;i++){
		cout << data[i] << " is at depth: " << theTree.depth(data[i]) << endl;
	}
	cout << "Test copy constructor: " << endl;
	BST<int> copyTree=theTree;
	copyTree.printPreOrder();
	cout << endl;
	copyTree.printInOrder();
	cout << endl;
	for(int i=0;i<20;i++){
		cout << data[i] << " is at depth: " << copyTree.depth(data[i]) << endl;
	}
	cout << "Test remove: " << endl;
	//remove a leaf
	theTree.remove(70);
	theTree.printPreOrder();
	cout << endl;
	theTree.printInOrder();
	cout << endl;
	//remove node with 1 child
	theTree.remove(80);
	theTree.printPreOrder();
	cout << endl;
	theTree.printInOrder();
	cout << endl;
	//remove node with 2 children
	theTree.remove(15);
	theTree.printPreOrder();
	cout << endl;
	theTree.printInOrder();
	cout << endl;

	//remove root
	theTree.remove(30);
	theTree.printPreOrder();
	cout << endl;
	theTree.printInOrder();
	cout << endl;

	for(int i=0;i<20;i++){
		cout << data[i] << " is at depth: " << theTree.depth(data[i]) << endl;
	}	
	cout << "Make sure deep copy was made: " << endl;
	copyTree.printPreOrder();
	cout << endl;
	copyTree.printInOrder();
	cout << endl;
	for(int i=0;i<20;i++){
		cout << data[i] << " is at depth: " << copyTree.depth(data[i]) << endl;
	}
}
