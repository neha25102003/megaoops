#include<iostream>
using namespace std;
class fraction{
   private:
   int numerator;
   int denominator;
   public:
   fraction(int numerator,int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
   }
   int getnumerator(){
    return numerator;
   }
   int getdenominator(){
    return denominator;
   }
   void setdenominator(int n){
     denominator=n;
   }
   void setnumerator(int n){
    numerator=n;
   }
   void print(){
     cout<<numerator<<"/"<<denominator<<endl;
   }
   void simplify(){
    int gcd=1;
    int j=min(this->numerator,this->denominator);
    for (int i = 1; i < j; i++)
    {
        if ( this->numerator%i==0 && this->denominator%i==0)
        {
             gcd=i;
        }
        
    }
    this->numerator=this->numerator/gcd;
    this->denominator=this->denominator/gcd;
    print();
   }
   void add(fraction f2){
    int lcm= denominator*f2.denominator;
    int x=lcm/denominator;
    int y=lcm/f2.denominator;
    int num=x* numerator+y*f2.numerator;
    fraction fadd(num,lcm);
    fadd.print();
    fadd.simplify();
     }
     void multiply(fraction f2){
          numerator=numerator*f2.numerator;
          denominator=denominator*f2.denominator;
          print();
          simplify();
          print();
     }
};
int main(){

    fraction f1(10,2);
    f1.print();
    f1.add(fraction (15,4));
    f1.simplify();
    f1.multiply(fraction(15,4));
}