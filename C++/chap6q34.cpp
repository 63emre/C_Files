#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
    string str[]={"Joe","Glenn","Dave","Bret","Bryce","Heater"};
    int strsize=sizeof(str)/sizeof(string);
    list<string> strList(str,str+strsize);
    list<string>::iterator it=strList.begin();

    return 0;
}