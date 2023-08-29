
#include <iostream>
#include<iterator>
#include<string>
using namespace std;
 
void recursiveReverse(string &str, int i = 0)
{
    int n = str.length();
    if (i == n / 2)
        return;
    swap(str[i], str[n - i - 1]);
    recursiveReverse(str, i + 1);
}
int main()
{
    string str;
    cout<<"Enter a sentence to reverse: ";
    getline(cin,str);
    recursiveReverse(str);
    cout <<"Reversed sentence is: "<<str<<endl;
    return 0;
}