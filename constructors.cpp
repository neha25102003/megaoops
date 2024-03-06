#include <iostream>
using namespace std;
#include "studentoops.cpp"
int main(){
    student s1;
    s1.display();
    student s2;
    student *s3=new student;
    (*s3).display();
    delete s3;
    student s4(32);
    s4.display();
    student *s5=new student(32);
    s5->display();
    student s6(23,42);
    s6.display();

}