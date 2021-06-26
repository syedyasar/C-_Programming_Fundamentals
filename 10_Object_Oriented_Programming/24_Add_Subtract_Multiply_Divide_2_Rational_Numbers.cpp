/*
Add , subtract , multiply  and  divide  2  rational  numbers. Represent  rational   number  by  an  object

class name is  Rat
Data member --> nr  and  dr
Member  functions
get()  ---> reads nr and  dr  and call test
test()  --> Ask  user  to reenter dr  when dr  is  0
disp()  ---> prints nr / dr  ---> 2 / 3




c . add(a , b)  --->  adds  objects a  and b  and  store  results  in  c ,  simplify  object  'c'
a  --> 2 / 3
b  ---> 5 / 9
c  --> 2 / 3 + 5 / 9 = (2  9 + 3  5) / (3 * 9) = 33 / 27 = 11 / 9
d . sub(a , b)  --->  subtracts objects a  and b  and  store  results  in  d ,  simplify  object  'd'
a  --> 2 / 3
b  ---> 5 / 9
c  --> 2 / 3 - 5 / 9 = (2  9 - 3  5) / (3 * 9) = 3 / 27 = 1 / 9
e . mul(a , b)  --->  multiplies  objects a  and b  and  store  results  in  e  ,  simplify  object  'e'
a  --> 2 / 3
b  ---> 5 / 9
c  --> 2 / 3 * 5 / 9 = 10 / 27
f . div(a , b)  --->  divides  objects a  and b  and  store  results  in  f ,  simplify  object  'f'
a  --> 2 / 3
b  ---> 5 / 9
c  --> 2 / 3 /  5 / 9 =  2 / 3 * 9 / 5 = 18 / 15 = 6 / 5

simplify()  --->  33 /  27  --->  11 / 9
gcd()  --> returns gcd  of  nr  and  dr
-------------------------------------------------------------
main()  ---> creates  array  of   6  objects ,  reads first 2 objects , store results in  remaining  4 objects and print last  4
                   objects
*/




#include <iostream>
#include <math.h>
using namespace std;

class Rational{
    private:
    int nr, dr;

    public:
    void get(){

        cout << "Numberator : " ;
        cin >> nr;
        cout << "Denominator : " ;
        cin >> dr;
        Test();  //  this  -> Test();  (or)  (*this) . Test();
    }
	// a.get();
    void Test(){
      while(dr==0){
       cout << "Denominator  can't be 0. Re-Enter Denominator\n";
        cout << "Denominator : " ;
        cin >> dr;
      }
    }

    void display()
	{
            cout << nr << "/" << dr<< endl;
    }

    void simplify(){
        int gcd1=gcd();
        nr/=gcd1;
        dr/=gcd1;
        
    }

    int gcd(){
        
        if(nr == 0)
            return  1;
        int m = abs(nr);
		int n = abs(dr);
        while(m != n)
		{
            if (m > n)
					m = m - n;
			else
					n = n - m;
        }
        return m;
    }

    void add(Rational a, Rational b){
        nr = a.nr*b.dr + b.nr*a.dr;
        dr = a.dr*b.dr;
        simplify();
    }
	// c . add(a , b)

    void subtract(Rational a, Rational b){
        nr = a.nr * b.dr - b.nr * a.dr;
        dr = a.dr * b.dr;
        simplify();
    }

    void multiply(Rational a, Rational b){
        nr = a.nr*b.nr ;
        dr = a.dr*b.dr;
        simplify();
    }

    bool divide(Rational a, Rational b)
	{
		if (b . nr == 0)
				return  false;
        nr = a.nr*b.dr ;
        dr = b.nr*a.dr;
        simplify();
		return  true;
    }
};


int main() {
    Rational r[6];
    cout << "\nRational Number 1 : " << endl;
    r[0].get();
    cout << "\nRational Number 2 : " << endl;
    r[1].get();
    r[2].add(r[0],r[1]);
    r[3].subtract(r[0],r[1]);
    r[4].multiply(r[0],r[1]);
    bool   ans =  r[5].divide(r[0],r[1]);
    cout << "\nSum is: " ;
    r[2].display() ;
    cout << "Difference is : " ;
    r[3].display();
    cout << "Product is : " ;
    r[4].display();
	if (ans)
	{
		cout << "Division Result is : " ;
		r[5].display();
	}
	else
		cout << "Division is not permitted\n";

    return 0;
}
