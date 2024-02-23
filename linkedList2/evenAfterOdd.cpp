#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* takeInput(){
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        } else{
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAti(Node* head, int index, int data){
    int cnt = 0;
    Node* curr = head;
    while(curr != NULL){
        if(cnt == index-1){
            Node* n = new Node(data);
            n->next = curr->next;
            curr->next = n;
            break;
        }
        curr = curr->next;
        cnt += 1;
    }
}

int main(){
    // io
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    Node* head = takeInput();
    print(head);
    return 0;
}