#include"NodeList.h"
#include<iostream>

//Default Constructor:
NodeList::NodeList() {
    this -> Numbers_ = 0;
    this -> Names_ = "";
    this -> headNode_ = NULL;
    this -> nextNode_ = NULL;
}

//Intializion Constructor:
NodeList::NodeList(float Num, string Wrd) {
    this -> Numbers_ = Num;
    this -> Names_ = Wrd;
    this -> headNode_ = NULL;
    this -> nextNode_ = NULL;
}

//Instructions
void NodeList::Instructions() {
    cout << "This program allows you to enter movies";
    cout << "and it will sort them by ratings (ascending order)" << endl; 
}

//Insert at the front:
void NodeList::InsertFront(NodeList *headNode, NodeList *currNode) {
    NodeList *oldNode = headNode -> nextNode_;
	NodeList *newFirstNode = currNode;
	   
    headNode -> nextNode_ = newFirstNode;
    currNode -> nextNode_ = oldNode;
}

//Insert into position:
void NodeList::InsertintoPosition(NodeList *headNode, NodeList *currNode) {
    //Created a brand new node with out private variables:
    NodeList *newNode = new NodeList(Numbers_, Names_);
    NodeList *prevNode = new NodeList();

    //Set current node to the head:
	currNode = headNode;
	//currNode = prevNode;
	

	while (currNode != NULL) {
	    
	    //Compare the data with current node, and new node:
	    if (currNode -> Numbers_ > newNode -> Numbers_) {
	        break;
	    } else {
	        
	        //Will set the prev node to current node:
	        prevNode = currNode;
	        
	        //continue to traverse the list:
	        currNode = currNode -> nextNode_;
	    }
	}
	    //New node points to current node:
	    newNode -> nextNode_ = currNode;
	    
	    //Previous node pints to new node:
	    prevNode -> nextNode_ = newNode;
} 
    
//Get next Node:
NodeList *NodeList::GetNextNode() {
    return this -> nextNode_;
}

//Print List:
void NodeList::PrintList() {
    cout << endl;
    cout << this -> Numbers_;
    cout << this -> Names_ << "     ------>           |";
    cout << "_data_";
    cout << "|  ->";
    cout << endl;
}