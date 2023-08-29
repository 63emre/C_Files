//Palindrome number
#include<iostream>
using namespace std;

template<typename P>

P  templatepalindrome(P number){
    int temp;
    int reversed_number = 0,remainder;
    temp=number;
    while (number!=0)
    {
        remainder = number % 10;
        reversed_number=reversed_number*10+remainder;
        number=number/10;
    }
    if (reversed_number==temp)
    {
        return 6;
    }
    else
        return 3;

}


int main(int argc, char const *argv[])
{
    int number;

    cout<<"Enter a positive integer: ";
    cin>>number;
int result=templatepalindrome(number);
    if (result==6)
    {
        cout<<"This integer is a palindrome integer."<<endl;

    }
    if (result==3)
    {
     cout<<"This integer is not a palindrome integer."<<endl;

    }
    
    return 0;
}
