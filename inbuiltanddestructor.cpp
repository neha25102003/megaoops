#include <iostream>
using namespace std;
#include "studentoops.cpp"
int main(){
    student s1(10,1111);
    student s2(20,2222);
    student *s3=new student(30,3333);
    s2=s1;
    s2.display();
    s1=*s3;
    s1.display();
    delete s3;//we have to deallocate the dynamic memory manually
}