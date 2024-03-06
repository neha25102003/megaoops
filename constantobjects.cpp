#include <iostream>
using namespace std;

class fraction{
   private:
   int numerator;
   int denominator;
   public:
   fraction(){

   }
   fraction(int numerator,int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
   }
   int getnumerator()const{
    return numerator;
   }
   int getdenominator()const{
    return denominator;
   }
   void setdenominator(int n){
     denominator=n;
   }
   void setnumerator(int n){
    numerator=n;
   }
   void print(){
     cout<<numerator<<"/"<<denominator<<endl;}
};
int main(){
 fraction const f3;
 cout<<f3.getdenominator()<<"  "<<f3.getnumerator()<<endl;
     }
 