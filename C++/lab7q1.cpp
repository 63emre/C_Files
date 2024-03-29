#include <iostream>
using namespace std;
#include<queue>
#include<cstdlib>
class Node {
public:
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
class Linkedlist {
	Node* head;

public:
	Linkedlist() { head = NULL; }
    void insertNode(int);
	void printList();
	void deleteNode(int);
};
void Linkedlist::deleteNode(int nodeOffset)
{
	Node *temp1 = head, *temp2 = NULL;
	int ListLen = 0;

	if (head == NULL) {
		cout << "List empty." << endl;
		return;
	}
	while (temp1 != NULL) {
		temp1 = temp1->next;
		ListLen++;
	}
	if (ListLen < nodeOffset) {
		cout << "Index out of range"
			<< endl;
		return;
	}
	temp1 = head;
	if (nodeOffset == 1) {
		head = head->next;
		delete temp1;
		return;
	}
	while (nodeOffset-- > 1) {
		temp2 = temp1;
		temp1 = temp1->next;
	}	temp2->next = temp1->next;
	delete temp1;
}
void Linkedlist::insertNode(int data)
{	Node* newNode = new Node(data);
	if (head == NULL) {
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}
void Linkedlist::printList()
{
	Node* temp = head;
	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main()
{
	Linkedlist list;
	queue<int> qu;
    cout<<"Enter the random element number for the queue: ";
    int xlock;
    cin>>xlock;
    int element=xlock;
    int temp;
    int arr[xlock];
    while(xlock!=0){
        temp=rand()%100 + 1;
        qu.push(temp);
        list.insertNode(temp);
        xlock--;
    }
    cout<<"The random queue with "<<element<<" elements is: "<<endl;
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;
cout<<"The random Singly Linked List is: "<<endl;
list.printList();
	return 0;
}


