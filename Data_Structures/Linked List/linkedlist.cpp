#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next = NULL;
};

int main(){
    Node* node1 = NULL;
    Node* node2 = NULL;

    node1 = new Node();
    node2 = new Node();


    node1->data = 1;
    node1->next = node2;

    node2->data = 2;

    cout<<node1->data;
    cout<<"HEHE";
    cout<<node1->next->data;

}
