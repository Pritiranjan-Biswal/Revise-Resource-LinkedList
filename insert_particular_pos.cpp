#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data=data;
        this->next=NULL;
    }
};

Node* createLinkedList(int arr[], int index, int size) {
    if(index==size) 
    return NULL;

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=createLinkedList(arr, index+1, size);

    return temp;
}







int main() {
    int arr[]={1,2,3,4,5};
    Node *head=createLinkedList(arr, 0, 5);
    int x=1;
    int value=30;
    
    Node *temp=head;
    while(x) {
        temp=temp->next;
        x--;
    }
    Node* temp2= new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;


    temp=head;
    while(temp) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}