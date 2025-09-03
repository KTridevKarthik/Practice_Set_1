#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    int roll_no;
    float marks;


    Student (string name, int roll_no, float marks){
        this->name = name;
        this-> roll_no = roll_no;
        this->marks = marks;
    }
};
int main(){
    Student s1 ("Tridev", 21 , 97);
    Student s2("Shivani",20,65);
    Student s3("Shailu",18,89);
    cout <<"Student Details:- "<<endl <<"Student 1: "<<s1.name <<endl << s1.marks << endl << s1.roll_no << endl ;
    cout <<s2.name << s2.marks << s2.roll_no << endl ;
    cout <<s3.name << s3.marks << s3.roll_no << endl ;
}