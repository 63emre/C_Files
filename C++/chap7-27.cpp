#include<iostream>
#include<stack>
using namespace std;
template<typename T>
void n2top(stack<T>&s,int n);
int main(int argc, char const *argv[])
{
    int arr[5];
    cout<<"Enter the elements of the stack: ";
    for (int i = 0; i <5; i++)
    {
        cin>>arr[i];
    }
    stack<int> s;
    cout<<endl;
    for (int i = 0; i <5; i++)
    {
        s.emplace(arr[i]);
    }
    cout<<"Moving second element to the top...."
        <<endl;
    n2top(s,2);
     for (int i = 0; i <5; i++)
     {
        cout<<s.top()<<" ";
        arr[i]=s.top();
        s.pop();     
    }
    cout<<endl;
  for (int i = 0; i <5; i++)
    {
        s.emplace(arr[i]);
       
    }
    cout<<"Moving last element to the top...."
        <<endl;
    n2top(s,5);
    for (int i = 0; i <5; i++)
     {
        cout<<s.top()<<" ";
        arr[i]=s.top();
        s.pop();     
    }
    return 0;
}
template<typename T>
void n2top(stack<T>&s,int n){
    int arr_A[5];
    int arr_B[5];
    int temp;
    switch (n)
    {
    case 1:
    break;
    case 2:
    arr_A[1]=s.top();
    s.pop();
    arr_A[2]=s.top();
    s.pop();
    arr_A[3]=s.top();
    s.pop();
    temp=s.top();
    s.pop();
    arr_A[4]=s.top();
    s.pop();
    s.push(temp);
    for (int i = 4; 0 < i; i--)
    {
        s.push(arr_A[i]);
   }
    break;
    case 3:

    break;
    case 4:
    break;
    case 5:
    temp=s.top(); 
    s.pop();
    arr_B[1]=s.top(); 
    s.pop();
    arr_B[2]=s.top(); 
    s.pop();
    arr_B[3]=s.top(); 
    s.pop();
    arr_B[4]=s.top(); 
    s.pop();
    s.push(temp); 
    for (int i = 4; 0<i; i--) 
    {
        s.push(arr_B[i]);
    }
    break;
    }
    return;
}