#include <iostream>
using namespace std;
#include "classcomplex.cpp"
int main(){
int real1,real2,imaginary1,imaginary2;
cin>>real1>>imaginary1;
cin>>real2>>imaginary2;
complexnumbers c1(real1,imaginary1);
complexnumbers c2(real2,imaginary2);
 int choice ;
 cin>>choice;
 if (choice==1)
 {
    c1.add(c2);
 }
 if (choice ==2)
 {
    c1.multiply(c2);
 }
 else
 {
    return 0;
 }
}