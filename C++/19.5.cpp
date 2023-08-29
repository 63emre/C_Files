#include<iostream>
using namespace std;

 void Bubble_Sort(int arr[],int n){
    // for loopu i<n-1 olacak çünkü arrayler 0 dan başlar...
    // swap loopu ise iç içe olduğu için sırayla örn.. 5 elemanlı arr önce 0 dan başlayacak sonra 4 e kadar devam
    // edecekki önce 0<5 1<5 2<5 3<5 4<5 5 eleman oldu sonra 0<4 1<4 2<4 3<4.....
int i,z;
    for ( i = 0; i <n-1; i++)
    {
        for (z = 0; z <n-1-i; z++)
        {
            if(arr[z]>arr[z+1])
                swap(arr[z],arr[z+1]);
        }
        
    }
}
int main(int argc, char const *argv[])
{
int n;
int s;
cout<<"Enter the element number of the array to sort by bubble sort: ";
cin>>s;
int arr[s];
cout<<"Enter the elements of the array: "<<endl;
for(int z=0;z<s;z++){
    cin>>arr[z];
}
n=sizeof(arr)/sizeof(arr[0]);
cout<<"Sorting by ascending order...."<<endl;
Bubble_Sort(arr,n);
for (int i = 0; i <n; i++)
{
cout<<" "<<arr[i];
}
return 0;
}