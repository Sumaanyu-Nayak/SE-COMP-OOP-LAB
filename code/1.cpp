#include <iostream>
using namespace std;

class Complex{
    private:
        float real, imag;
    public:
        Complex(float r=0, float i=0){
            real = r;
            imag=i;
        }
        
     
        friend istream& operator>>(istream& cin, Complex& c){
            cin>>c.real>>c.imag;
            return cin;
        }
        friend ostream& operator<<(ostream& cout,Complex& c){
            if(c.imag < 0){
            cout<<c.real<<"-"<<abs(c.imag)<<"i";
            }
            else{
            cout<<c.real<<"+"<<c.imag<<"i";
            }
            return cout;
        }
        Complex operator + (Complex const &obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        Complex operator *(Complex const &obj){
            Complex res;
            res.real = real * obj.real - imag * obj.imag;
            res.imag = imag * obj.imag + real*obj.imag;
            return res;
        }
};

int main(){
    int option;
    Complex c1,c2;
    cout <<"Enter the real and imaginary part of the complex c1: "<<endl;
    cin>>c1;
    cout <<"Enter the real and imaginary part of the complex c2: "<<endl;
    cin>>c2;
    cout<<endl;
    cout<<"Menu:"<<endl;
    cout<<"1. Add the two complex"<<endl;
    cout<<"2. Multiply the two complex"<<endl;
    cout<<endl;
    cout<<"Enter the option: "; cin>>option;
    if(option == 1){
        Complex c3;
        c3 = c1+c2;
        cout<<c3<<endl;
    }    
    else if(option == 2){
        Complex c3;
        c3 = c1*c2;
        cout<<c3<<endl;
    }
}