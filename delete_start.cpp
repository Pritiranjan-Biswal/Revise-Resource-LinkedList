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
   
   if(head!=NULL) {
    Node*temp=head;
    head=head->next;
    delete temp;

   }
   Node *temp=head;
    while(temp) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}