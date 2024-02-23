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

Node *swapNodes(Node *head, int i, int j) {
    if (i == j) {
        return head;
    }

    i = min(i,j);
    j = max(i,j);

    Node* prev_i = NULL; 
    Node* node_i = head;
    Node* prev_j = NULL; 
    Node* node_j = head;

    // Traverse the list to find nodes at positions i and j
    for (int idx = 0; idx < i; idx++) {
        prev_i = node_i;
        node_i = node_i -> next;
    }

    for (int idx = 0; idx < j; idx++) {
        prev_j = node_j;
        node_j = node_j -> next;
    }

    // Update the pointers to swap the nodes
    if (prev_i != NULL) {
        prev_i -> next = node_j;
    } else {
        head = node_j;
    }

    prev_j -> next = node_i;

    Node* temp = node_i -> next;
    node_i -> next = node_j -> next;
    node_j -> next = temp;

    return head;
}

int main(){
	// io
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	Node* head = takeInput();
	print(head);

	head = swapNodes(head,1,4);
	print(head);

	return 0;
}