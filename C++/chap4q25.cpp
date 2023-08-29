#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={1,6,9,12,15,33,28};
    int arrSize=sizeof(arr)/sizeof(int);
    vector<int> vectorr(arr,arr+ arrSize);
    int sum=accumulate(vectorr.begin(), vectorr.end(), 0);
    int avalue=sum/arrSize;
    cout<<"Vector (dynamic array is) : ";
    for (int i = 0; i <arrSize; i++)
  {
   cout<<vectorr[i]<<" ";
  }
  cout<<endl;
    cout<<"Avarage value is: "<<avalue<<endl;
     cout<<"Sorted deviation is: ";
  for (int i = 0; i <arrSize; i++)
  {
   cout<<vectorr[i]-avalue<<" ";
  }
    return 0;
}
