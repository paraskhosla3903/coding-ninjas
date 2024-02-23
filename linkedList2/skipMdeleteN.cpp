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

Node* skipMdeleteN(Node* head, int M, int N){
    if(M == 0 && N != 0){
        return NULL;
    } else if(N == 0){
        return head;
    }
	Node* t1 = head;
    int cnt1 = 1, cnt2 = 1;
    while(t1 != NULL){
        if(cnt1 == M){
            cnt1 = 1;
            Node* t2 = t1 -> next;
            while(t2 != NULL && cnt2 != N){
                t2 = t2 -> next;
                cnt2 += 1;
            }
            cnt2 = 1;
            if(t2 != NULL){
                t1 -> next = t2 -> next;
                t1 = t1 -> next;
                t2 -> next = NULL;
                delete t2;
            } else{
                t1 -> next = NULL;
            }
        } else{
            cnt1 += 1;
            t1 = t1 -> next;
        }
    }
    return head;
}

int main(){
	// io
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	Node* head = takeInput();
	print(head);

    head = skipMdeleteN(head,0,0);
    print(head);
	return 0;
}