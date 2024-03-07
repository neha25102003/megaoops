#include <iostream>
using namespace std;
#include "studentoops.cpp"
int main(){
    student s1;
    s1.age=1;
    s1.rollnumber=11;
    cout<<"S1 AGE"<<s1.age<<endl;
    student *s2=new student;
    (*s2).age=4;
    cout<<"S2 AGE"<<(*s2).age<<endl;
    s2->age=4;
    cout<<"S2 AGE"<<(*s2).age<<endl;
     
    delete s2;

    student s3;
    s3.age=21;
    s3.rollnumber=345;
    s3.display();
    student *s4=new student;
    (*s4).age=4;
    (*s4).rollnumber=40;
    (*s4).display();
    student s5;
    cout<<'S5 AGE2 '<<s5.getage2()<<endl;
    student s6;
    s6.setage2(34);
 cout<<"S6 AGE 2 "<<s6.getage2()<<endl;
 s6.display();
}
   
    
