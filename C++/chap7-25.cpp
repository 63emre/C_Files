#include<iostream>
#include<vector>
#include<stack>
#include<cstdlib>
using namespace std;
template<typename T>
void writeVector(vector<T>);
int main(int argc, char const *argv[])
{
    cout<<"Enter the element number of the vector: ";
    int n;
    cin>>n;
        vector<int> vector;
        int temp= 0;
    for (int i = 0; i <n; i++)
    {
        temp=rand()%100+1;
        vector.push_back(temp);
     }
    stack<int> stack;
    int v_Size=vector.size();
    for (int i = 0; i <v_Size; i++)
    {
        stack.push(vector[i]);
    }
    cout<<"Vector"<<endl;
writeVector(vector);
   cout<<"Stack"
       <<endl;
while (!stack.empty())
{
    cout<<stack.top()<<" ";
    stack.pop();
}
    return 0;
}
template<typename T>
void writeVector(vector<T> vector){
    int size=vector.size();
    for (int i = 0; i <size; i++)
    {
        cout<<vector[i]<<" ";
    }
    cout<<endl;
    return;
}
