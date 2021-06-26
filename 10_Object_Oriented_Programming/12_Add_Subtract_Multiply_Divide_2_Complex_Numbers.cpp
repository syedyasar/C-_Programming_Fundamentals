
// Add , subtract , multiply  and  divide  2  complex numbers. Represent  complex  number  by  an  object
/*
class  name  is  complex
-----------------------------------------
data  members  ---> real part  and imag  part
Functions
----------------
get()  ---> reads  real  part  and imag  part
disp()  --->  prints  3 + i4  or  3 - i4  depending imag  part  is  +ve  or  -ve
c . add(a , b)  --->  c  =  a + b 
d . sub(a , b )  ---> d  =  a  - b
e . mul(a , b)   ---> e = a *  b
f . div(a , b)  ---> f = a /  b

main() ---> creates  6  objects  a , b , c , d ,  e,  f,  reads inputs  into  objects  a  and  b ,  stores results  in  c , d , e ,  f
			     and  prints  c , d  ,  e ,  f
a  --> 3  ,  4
b  ---> 5  ,  6
c   ---> 8 , 10
d  ---> -2 , -2
e  ---> (3+i4) * (5+i6)  ---> 15 + 18i + 20i - 24  ---> (15-24) +  i(18 +20)  ---> -9 , 38
f   ---->  (3 + i4) / (5+i6) ---> (3+i4)  (5-i6) /  (5+i6)  (5-i6) =  (15 - 18i + 20i + 24) / (25 + 36) 
            =  (15 + 24) / (25 + 36)  +  i (20 - 18) / (25 + 36)
			
/*   =============================================================================================  */			
			


/* =============================================================================================  */

#include <iostream>
#include <string>

using namespace std;

class complex{
    private:
    float real, imaginary;
    
    public:
    void get(){
       cout << "Enter real part : " ;
       cin >> real;
       cout << "Enter Imaginary part : " ;
       cin >> imaginary;  
    }
    
    void display(){
        cout << real << ((imaginary>=0)? " +" : " ") << imaginary << "i" << endl;
    }
    
    void add(complex a, complex b){
        real = a.real + b.real;
        imaginary = a.imaginary +b.imaginary;
    }
    
    void subtract(complex a, complex b){
        real = a.real - b.real;
        imaginary = a.imaginary - b.imaginary;
    }
    
    void multiply(complex a, complex b){
        real = a.real * b.real - a.imaginary * b.imaginary ;
        imaginary = a.real*b.imaginary +  b.real*a.imaginary;
    }
    
    void divide(complex a, complex b){
    float t = b.real*b.real + b.imaginary*b.imaginary;
    real = (a.real * b.real + a.imaginary * b.imaginary)/t;
    imaginary =(b.real*a.imaginary- a.real*b.imaginary)/t ;
    }
};


int main() {
    
    complex a,b,c,d,e,f;
    cout << "\n" << "Enter Complex number a " << endl;
    a.get();
    cout << "\n" << "Enter Complex number b " << endl;
    b.get();
    c.add(a,b);
    d.subtract(a,b);
    e.multiply(a,b);
    f.divide(a,b);
    cout << "\n" << " Sum ( a + b ) = " ;
    c.display();
    cout << "\n" << " Difference ( a - b ) = " ;
    d.display();
    cout << "\n" << " Product ( a * b ) = " ;
    e.display();
    cout << "\n" << " Division ( a / b ) = " ;
    f.display();
    
    return 0;
}


