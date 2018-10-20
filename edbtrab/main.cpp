#include <iostream>
#include "Tree.hpp"
int main(){
    /**
     *      7
     *  5       9
     * 2  6   8
     *1
     */
    Node* n7=new Node(7);
    Tree *t = new Tree(n7);//criando arvore e inserindo raiz;
    Node* n5=new Node(5);
    Node* n9=new Node(9);
    t->insert(n7,n5);
    t->insert(n7,n9);
    if(t->find(7)){
        cout<<"achou"<<endl;
    }
    t->print();
}