#include<iostream>
#include<queue>
using namespace std;
// eğer n=1 olursa range error throwla bebeğimm
template<typename T>
void n2front(queue<T>&q,int n);
int main(int argc, char const *argv[])
{
    int arr[5];
    cout<<"Enter the elements of the queue: ";
    queue<int> q;
    for (int i = 0; i <5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <5; i++)
    {
        q.emplace(arr[i]);
    }
    int n;
    cout<<"Enter the element to move the front of the queue:  ";
    cin>>n;
    while(n==1){
        cout<<"rangeError please enter a different element value (2-5): ";
        cin>>n;
    }
    n2front(q,n);
    return 0;
}

template<typename T>
void n2front(queue<T>&q,int n){
    int arr_A[4];
    long arr_B[5];
    int temp;
    switch (n)
    {
    case 2:
    arr_A[0]=q.front();
    q.pop();
    temp=q.front();
    q.pop();
    for (int i = 1; i < 4; i++)
    {
        arr_A[i]=q.front();
        q.pop();
    }
    q.emplace(temp);
    for (int i = 0; i<4; i++)
    {
       q.emplace(arr_A[i]);
    }
    
    cout<<"Final queue after modification is: "
        <<endl;
    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    break;
    case 3:
    arr_A[0]=q.front();
    q.pop();
    arr_A[1]=q.front();
    q.pop();
    temp=q.front();
    q.pop();
    arr_A[2]=q.front();
    q.pop();
    arr_A[3]=q.front();
    q.pop();
    q.emplace(temp);
    for (int i = 0; i <4; i++)
    {
        q.emplace(arr_A[i]);
    }
    cout<<"Final queue after modification is: "
        <<endl;
    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    break;
    case 4:
    for (int i = 0; i < 3; i++)
    {
        arr_A[i]=q.front();
        q.pop();
    }
    temp=q.front();
    q.pop();
    arr_A[3]=q.front();
    q.pop();
    q.emplace(temp);
    for (int i = 0; i < 4; i++)
    {
        q.emplace(arr_A[i]);
    }
     cout<<"Final queue after modification is: "
        <<endl;
    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    break;
    case 5:
    for (int i = 0; i < 4; i++)
    {
        arr_B[i]=q.front();
        q.pop();
        }
    for (int i = 0; i < 4; i++)
    {
        q.emplace(arr_B[i]);
        }
    cout<<"Final queue after modification is: "
        <<endl;
    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    break;
    }
}