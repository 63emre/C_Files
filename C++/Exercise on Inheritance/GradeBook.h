#include<iostream>
using namespace std;
class GradeBook{
private:
string course_name;
public:
    GradeBook(string,string);//initializes the courseName and instructor name
    string instructor_name;
    void set_instructor_name(string);
    void set_course_name(string);
    string get_instructor_name();
    string get_course_name();
    void displaymessage();// welcome message and course name this course is inst b y : inst name
};
GradeBook::GradeBook(string instructor_name,string course_name){
set_course_name(course_name);
set_instructor_name(instructor_name);
}
void GradeBook::set_course_name(string course_name){
    cout<<"Enter a course name:  "<<endl;
    getline(cin,GradeBook::course_name);
}
void GradeBook::set_instructor_name(string instructor_name){
    cout<<"Enter a instructor name: "<<endl;
    getline(cin,GradeBook::instructor_name);
}
string GradeBook::get_course_name(){
    return GradeBook::course_name;
}
string GradeBook::get_instructor_name(){
       return GradeBook::instructor_name;
}
void GradeBook::displaymessage(){
    cout<<"Welcome to the grade book for: "<<course_name<<endl;
    cout<<"This lesson is presented by: "<<instructor_name<<endl;    
};