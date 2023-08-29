#include<iostream>
#include<queue>
using namespace std;
template<typename T>
void cut(queue<T>&q, int n, const T& item);
int main(int argc, char const *argv[])
{
    double long arr[5];
    cout<<"Enter the elements of the queue(5 elements) ";
    for (int i = 0; i <5; i++)
    {
        cin>>arr[i];
    }
    queue<int> q;
    for (int i = 0; i <5; i++)
    {
        q.emplace(arr[i]);
    }
    
    int n;
    cout<<"Enter the place you wanna input the element: ";
    cin>>n;
    cout<<"Enter the element: ";
    int item;
    cin>>item;
    cut(q,n,item);
    cout<<"Modified queue is: ";
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
template<typename T>
void cut(queue<T> &q,int n,const T& item){
    int arr_A[5];
    int clock=0;
    switch (n)
    {
    case 1 :
        while (!q.empty())
        {   
            arr_A[clock]=q.front();
            q.pop();
            clock++;
        }
        q.emplace(item);
        for (int i = 0; i <5; i++)
        {
            q.emplace(arr_A[i]);
        }
        break;
        case 2:
         while (!q.empty())
        {   
            arr_A[clock]=q.front();
            q.pop();
            clock++;
        }
        q.emplace(arr_A[0]);
        q.emplace(item);
        for (int i = 1; i < 5; i++)
        {
            q.emplace(arr_A[i]);
        }
        break;
        case 3:
         while (!q.empty())
        {   
            arr_A[clock]=q.front();
            q.pop();
            clock++;
        }
        q.emplace(arr_A[0]);
        q.emplace(arr_A[1]);
        q.emplace(item);
        for (int i = 2; i < 5; i++)
        {
            q.emplace(arr_A[i]);
        }
        break;
        case 4:
           while (!q.empty())
        {   
            arr_A[clock]=q.front();
            q.pop();
            clock++;
        }
        for (int i = 0; i < 3; i++)
        {
            q.emplace(arr_A[i]);
        }
        q.emplace(item);
        for (int i = 3; i < 5; i++)
        {
            q.emplace(arr_A[i]);
            }
        break;
        case 5:
             while (!q.empty())
        {   
            arr_A[clock]=q.front();
            q.pop();
            clock++;
        }
        for (int i = 0; i < 4; i++)
        {
            q.emplace(arr_A[i]);
        }
        q.emplace(item);
        q.emplace(arr_A[4]);
        break;
    }
        
        
}