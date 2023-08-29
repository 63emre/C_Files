#include<iostream>
#include<stack>
using namespace std;
//3->1, 4->2 ,5->3 ,6->4
template <typename T>
T  second(stack<T>& s , int n){
    int clock;
    clock=n-1;
    while(clock!=2){
        s.pop();
        clock --;
    }
    return s.top();
}
int main(int argc, char const *argv[])
{
    stack<int> s;
    int temp;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int n;
    n=s.size();
    cout<<"The second element of the stack is:"<<second(s,n)<<endl;
    return 0;
}
