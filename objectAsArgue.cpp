#include <iostream>
#include <memory>
using namespace std;

class complex{
    int real,imag;
    public:
    complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    complex add(complex c){
        complex temp;
        temp.real=real + c.real;
        temp.imag=imag + c.imag;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i";
    }
};
int main() {
	complex c1(2,3),c2(4,5);
	complex c3=c1.add(c2);
	c3.display();
	return 0;

}
