#ifndef NODELIST_H
#define NODELIST_H
#include<iostream>

using namespace std;

class NodeList {
    private:
        float Numbers_;
        string Names_;
        NodeList *headNode_;
        NodeList *nextNode_;
    
    public:
        //Constructor:
        NodeList();
        
        //Cons:
        NodeList(float Num, string Wrd);
        
        //Instructions
        void Instructions();
        
        //Insert at front:
        void InsertFront(NodeList *headNode, NodeList *currNode);
        
        //Insert into postion:
        void InsertintoPosition(NodeList *headNode, NodeList *currNode);

        //Gets The Next Node:
        NodeList *GetNextNode();
        
        //Print List:
        void PrintList();
        
};

#endif

