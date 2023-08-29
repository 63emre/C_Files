#include<iostream>
#include<stack>
using namespace std;
template <typename T>
void n2top(stack<T>&s, int n){
    stack<T> e;
    while (s.size()>n-2)
    {
        e.push(s.top());
        s.pop();

    }
    T temp = s.top();
    s.pop();
    while(!e.empty()){
        s.push(e.top());
        e.pop();
    }
    s.push(temp);
}

int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int n;
    cout<<"Enter the n to run n2top function: ";
    cin>>n;
    n2top(s,n);
    while (!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    
    return 0;

}
