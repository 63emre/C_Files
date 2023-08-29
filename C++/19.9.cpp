#include<iostream>
using namespace std;

int RecursiveBinarySearch(int arr[],int num,int beg,int end){
int med;
       if (beg>end)
        {
        cout<<"Number is not found.....";
        return -1;
       }
    else{
        med = (beg + end) / 2;
  
      if(arr[med] == num){
   
        cout << "Number is found at " << med + 1 << " index \n";
      return 0;
  
  } else if (num > arr[med]) {
   
        RecursiveBinarySearch (arr, num, med+1, end);
   
  } else if (num < arr[med]) {
   
        RecursiveBinarySearch (arr, num, beg , med-1);
  }
 }
 return 0;
}

 int main(int argc, char const *argv[])
 {
 cout<<"Enter the size of the array:";
 int o;
 cin>>o;
 int arr[o];
 int beg,end;
 cout<<"Enter the sorted values for reccursive binary research:"<<endl;
 for (size_t i = 0; i < o; i++)
 {
     cin>>arr[i];
 }
 cout<<"Enter the value to search: "<<endl;
 int num;
 cin>>num;
 beg = 0;
 end = o - 1;
 int idx=RecursiveBinarySearch(arr,num,beg,end);
     return 0;
  }