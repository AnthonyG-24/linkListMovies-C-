#include"NodeList.h"
#include<iostream>
#include<fstream>

using namespace std;

int main() {
    
    NodeList *headNode = new NodeList();
    NodeList *currNode;
    
    
    float Nums;
    string Words;
    ifstream theFile("test");
    
    
    
    while (theFile >> Nums && getline(theFile, Words)) {
        currNode = new NodeList(Nums, Words);
        //currNode -> InsertFront(headNode, currNode);
        currNode -> InsertintoPosition(headNode, currNode);
    }
    
    currNode = headNode -> GetNextNode();
    while (currNode != NULL) {
        currNode -> PrintList();
        currNode = currNode -> GetNextNode();
    }
    

    return 0;
}