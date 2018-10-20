#include <iostream>
class Node{
    public:
    int i;
    Node *left;
    Node *right;
    Node(int a){
        i=a;
        left=NULL;
        right=NULL;
    }
};