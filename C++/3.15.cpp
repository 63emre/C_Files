#include<iostream>
using namespace std;
class Date{
public:
    int day;
    int month;
    int year;
    Date(int,int,int);
    void display_date();
    void set_day(int);
    void set_month(int);
    void set_year(int);
    int get_year();
    int get_day();
    int get_month();
};

Date::Date(int y, int m, int d){
    set_year(y);
    set_month(m);
    set_day(d);
}

void Date::set_day(int d){
    day = d;
}

void Date::set_month(int m){
    month = m;
}

void Date::set_year(int y){
    year = y;
}
int Date::get_day(){
    return day;
}
int Date::get_month(){
    return month;
}
int Date::get_year(){
    return year;
}

void Date::display_date(){
    cout << day << "\\" << month << "\\" << year << endl;
}

int main(int argc, char const *argv[])
{
    int day,month,year;
    cout<<"Enter a year: "<<endl;
    cin >> year;
    int exit = 0;
    while(exit == 0){
        cout<<"Enter a month: " <<endl;
        cin >> month;
        if(month > 0 && month < 13){
            exit = 1;
        }
    }
    cout << "Enter a day: " <<endl;
    cin >> day;
    Date s = Date(year, month, day);
    s.display_date();    
    return 0;
}
