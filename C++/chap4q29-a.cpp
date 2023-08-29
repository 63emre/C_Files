#include<iostream>
#include<vector>
#include<cstdlib>
#include<iterator>
using namespace std;
void writeVector(vector<int>&);
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    srand(time(NULL));
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        v.push_back(rand()%10);
    }
    writeVector(v);
    cout << "Modify" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i; j < n; j++)
        {
            if(i != j && v[i] == v[j]){
                v[i] = -1;
            }
        }
    }
    writeVector(v);   
    return 0;
}
// 1 2 3 4 5 
// 0 1 2 3 4 
void writeVector(vector<int>& v){
    vector<int>::iterator iter = v.begin();
    for (auto i = iter; i !=  v.end(); i++)
    {
        cout << *i <<" ";
    }
    cout<<endl;
}