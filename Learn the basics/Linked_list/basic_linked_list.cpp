#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* convert(vector<int>& v, Node* head){
    Node* mover = head;
    for(int i = 1;i < v.size();i++){
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}

int main(){
    vector<int>v1 = {1,2,3,4,5};
    Node* head = new Node(v1[0]);
    Node* ans = convert(v1, head);
    Node* temp = ans;
    while(temp){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    return 0;
}