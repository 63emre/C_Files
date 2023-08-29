#include<iostream>  
using namespace std;  
int main()  
{  
    cout<<"Enter a sentence to reverse: ";
    string str;  
    getline(cin,str);
    for(string::reverse_iterator itr=str.rbegin();itr!=str.rend();++itr)  
    cout<<"Reversed sentence is: "<<*itr<<endl;  
    return 0;  
}  