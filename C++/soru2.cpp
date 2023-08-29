#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
void writevector(vector<T>&v){
        for (int i = 0; i <9; i++)
    {
        cout<<v[i]<<" ";
            
    }
}
template<typename T>
void foo(vector<T>&v){
    queue<int> q;
    for (int i = 0; i <9; i++)
    {
        q.push(v[i]);
    }

}
int main(int argc, char const *argv[])
{
    int arr[9]={6,12,34,15,67,45,53,3,5};    
   vector<int> v(arr,arr+9);
   cout<<"Unsorted vector: "
       <<endl;
    writevector(v);
    cout<<endl;
    foo(v);
    cout<<"Sorted vector: "
        <<endl;
    writevector(v);
    return 0;
}
