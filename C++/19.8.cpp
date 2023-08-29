//RECURSIVE LINEAR SEARCH FOR ARRAY
#include<iostream>
using namespace std;

int recursive_linear_search(int arr[],int size,int wanted){
    size--;
        if (size<0)
        {
            return -1;
        }
            if (arr[size]==wanted)
            {
                return size;
            }
    return recursive_linear_search(arr,size,wanted);       

}

int main(int argc, char const *argv[])
{
    int element,size;
    cout<<"Enter the element number of the array"<<endl;
    cin>>element;
    int arr[element];
    cout<<"Enter the elements of the array: "<<endl;
    size=sizeof(arr)/sizeof(arr[0]);
    int temp=size;
    for (size_t i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element for recursive lineer search: "<<endl;
    int wanted;
    cin>>wanted;
    int a= recursive_linear_search(arr,size,wanted);
    for (size_t i = 0; i < temp; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Searched element is the "<<a+1<<". element of this array."<<endl;
    return 0;
}
