#include<iostream>
using namespace std;

// Circular S LinkedList ---> lastNode->next = head
// Circular D LinkedList ---> lastNode->next = head ; firstNode->prev = lastNode 

class Node {
    public:
        int data;
        Node* prev; 
        Node* next;
        Node(int data) {
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

// head->prev = tail
// tail->next = head 
class CircularDoublyLinkedList {
    public:
        Node* head; Node* tail;                         // head --> firstNode | tail --> lastNdde
        CircularDoublyLinkedList() {
            this->head = NULL;
            this->tail = NULL;
            //this->head->prev=tail->next;      why cant we ?
            //this->tail->next=head->prev;
        }
        // Utility function to add a Node at the end of LL

        void append(int data) {
            Node* newNode = new Node(data);
            // LL is empty, this is the first Node getting created
            if(this->head == NULL && this->tail == NULL) {
                this->head = 
                this->tail = newNode;
                this->head->prev = this->tail->next = newNode;
                return;
            }
            Node* temp = this->tail;                        // temp = head (if head = tail = firstName)
            this->tail->next = newNode;
            this->tail = newNode;
            // newNode is the new lastNode ; newNode->next & newNode->prev = NULL
            this->tail->prev = temp;
            this->tail->next = this->head;
            this->head->prev = this->tail;
            delete(temp); 
        }
        // Utility function to display values of LL
        void display() {
            Node* temp = this->head;
            while(temp->data != this->tail->data) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << temp->data << endl;
            delete(temp); 
        }
};

int main() {
    CircularDoublyLinkedList list = CircularDoublyLinkedList();         // head = tail = NULL
    list.append(100);
    list.append(200);
    list.append(300);
    list.append(400);
    list.append(500);
    list.display();                             // 100 200 300 400 500

    return 0;
}