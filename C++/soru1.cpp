#include<iostream>
#include<stack>
using namespace std;
template<typename T>
void f(stack<T> &s,stack<T> &t,const T& item){
    T svalue;
    while (!s.empty())
    {
        svalue=s.top();
        s.pop();
        if(svalue<item)
        t.push(svalue);
    }
}
template <typename T>
void writestack(stack<T>&s,stack<T>&t){
    cout<<"Stack s is:";
    while (!s.empty())
    {
        cout<<endl;
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    cout<<"Stack t is:";
       while (!t.empty())
    {
        cout<<endl
            <<t.top();
        t.pop();
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[5]={5,30,25,10,20};
    stack<int> s,t;
    const int n=20;
    for (int i = 0; i < 5; i++)
    {
        s.push(arr[i]);
    }
     f(s,t,n);
    for (int i = 0; i < 5; i++)
    {
        s.push(arr[i]);
    }
     writestack(s,t);
    return 0;
}

