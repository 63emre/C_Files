#include<iostream>
#include<vector>
using namespace std;

template <typename T>
int binarySearch(const vector<T>& s_e,int first,int last,const T& target){
    int size_F=size(s_e);
    int accessIndex = 0;
    int currentIndex = 0;
    while(currentIndex <= last){
      int accessIndex=(first + last)/2;
      if(s_e[accessIndex] < target){
        first = accessIndex + 1;
      }
      else if(s_e[accessIndex] > target){
        last = accessIndex - 1;
      }
      else{
        return accessIndex;
      }
    }
    cout << "Target not found!" << endl;
    return currentIndex;   
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number of the elements for vector(dynamic array): "<<endl;
    int size;
    cin>>size;
    int bs[size];
    cout<<"Enter the elements of the vector(dynamic array): "<<endl;
    //int size_bs=sizeof(bs)/sizeof(bs[0]);
    vector<int> s_e;
    for (int i = 0; i < size ; i++)
    {
      cin>>bs[i];  
    }
      for (int i = 0; i < size ; i++)
    {
      s_e.push_back(bs[i]);  
    }
    cout<<"Enter the element you wanna found: "<<endl;
    int target;
    cin>>target;
    int first=bs[1];
    int last=bs[size];
    cout<<"The element you seek is in the "<<binarySearch(s_e,first,last,target)<<". element "<<endl;
    return 0;
}
