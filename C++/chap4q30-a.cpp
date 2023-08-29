#include<iostream>
#include<vector>
#include<stack>
using namespace std;
template <typename T>
void reverseVector(vector<T>&);
int main(int argc, char const *argv[])
{
    int arr[]={9,12,6,24,16,8,3,19,11,4};
    int arrSize=sizeof(arr)/sizeof(int);
    vector<int> v(arr,arr+arrSize);
    cout<<"Unmodified vector is: "
        <<endl;
    for (int i = 0; i <arrSize; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl
        <<"Modify....(reversing the order...)"<<endl;
    reverseVector(v);
    return 0;
}
template <typename T>
void reverseVector(vector<T>&v){
    stack<int> stackk;
    int size=v.size();
    for (int i = 0; i <size; i++)
    {
        stackk.push(v[i]);
    }
    while (!stackk.empty()) {
        cout << stackk.top() <<" ";
        stackk.pop();
    }

}