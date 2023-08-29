#include<iostream>
using namespace std;

class Bucket_Sort
{
private:
int data_1;
int data_2;
char id;
public:
    Bucket_Sort(int,int,char);
void bucket_algorithm();
};
Bucket_Sort::Bucket_Sort(int,int,char)
{



}

int main(int argc, char const *argv[])
{
    int s;
    cout<<"Enter the elements of the array:";
    cin>>s;
    cout<<"Enter a array to sort:";
    char arr[s];
    for (size_t i = 0; i < s; i++)
    {
        cin>>arr[i];
    }
    return 0;
}