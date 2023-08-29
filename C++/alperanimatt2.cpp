#include  "d_dnode.h"
#include "d_node.h"
#include "d_nodel.h"
#include<iostream>
#include<cstddef>
using namespace std;
template<typename T>
void bulEkle(node<T> *&front,const T& item) {
    node<T> *prev, *temp;
    prev = front;
    temp = front;
    int bayrak = 0;
    if (item>8)
    {
     
     
    }
    

    
    if (front->nodeValue == item) {
        node<T> *newNode = new node<T>(10,front);
        front=newNode;
        bayrak=1;
    }
    while (temp != NULL && bayrak == 0) {
            temp = temp->next;
            if (temp->nodeValue == item) {
                node<T> *newNode = new node<T>(10, temp);
                prev->next = newNode;
                bayrak = 1;
            }
            prev = prev->next;
    }
    if (bayrak==0) {
        node<T> *newNode = new node<T>(10);
        temp->next=newNode;
    }

}
int main(){
    node<int> *front=new node<int>(0),*temp;
    temp=front;
    for(int i=1;i<8;i++){
        node<int> *newNode= new node<int>(i);
        temp->next=newNode;
        temp=newNode;
    }
    cout<<endl;

    bulEkle(front,45);
    writeLinkedList(front);


    return 0;
}