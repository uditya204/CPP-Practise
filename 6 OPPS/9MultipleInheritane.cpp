/*
Multiple Inheritance: Single derived class inherites from multiple parent classes

Note:- In below example-
TA are the college students who teaches in the college
*/

#include <iostream>
using namespace std;

class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollno;
    float cgpa;
};

//This class inherites from Teacher and student both.

class TA : public Teacher, public Student {
public:
    string name;
};


int main() {
    TA stud1;

    stud1.name="Uditya";
    stud1.rollno=10497;
    stud1.subject="Phyics";
    stud1.salary=40000;
    stud1.cgpa=9.5;

    cout<<"name:- "<<stud1.name<<endl;
    cout<<"rollno:- "<<stud1.rollno<<endl;
    cout<<"subject:- "<<stud1.subject<<endl;
    cout<<"cgpa:- "<<stud1.cgpa<<endl;



    return 0;
}