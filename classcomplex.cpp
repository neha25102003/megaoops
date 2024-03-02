#include <iostream>
using namespace std;
class complexnumbers
{
private:
    int real;
    int imaginary;
public:
    complexnumbers(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void print(){
      cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void add(complexnumbers cn2){
       this->real=real+cn2.real;
       this->imaginary=imaginary+cn2.imaginary;
       print();
    }
    void multiply(complexnumbers cn2 ){
        this->real=real*cn2.real-imaginary*cn2.imaginary;
       this->imaginary=real*cn2.imaginary+imaginary*cn2.real;
       print();
    }
    };
