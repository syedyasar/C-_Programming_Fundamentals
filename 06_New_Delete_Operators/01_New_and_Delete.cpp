// new  and  delete  operators  demo  program
#include <iostream>
using  namespace  std;
main()
{
		int*  a = new int(25);  //  'a'  points  to   int  variable  with  value  25
		float*  b = new  float(10.8);  //  'b'  points  to   float   variable  with  value  10.8
		char*  c = new  char('g');   //  'c'  points  to   char  variable  with  value   'g'
		string*  d = new   string("Hyd");  //  'd'  points  to   string  variable  with  value   "Hyd"
		cout << "a : "  << a << "\n";  //  address of  int  variable wit value  25
		cout << "*a : "  <<*a << "\n"; // 25
		cout << "b : "  << b << "\n";  // address of  10.8
		cout << "*b : "  << *b << "\n"; // 10.8
		cout << "c : "  <<  c << "\n";  // address  of   char  'g'
		cout << "*c  : "  << *c << "\n"; // g
		cout << "d : "  << d << "\n";  //  address  of  "Hyd"
		cout << "*d : "  << *d << "\n"; // Hyd
		delete  a; //  int  variable  is  deleted  becoz  'a'  points  to  int  variable
		delete  b; //  float  variable  is  deleted  becoz  'b'  points  to   float  variable
		delete  c;
		delete  d;
		cout << *a << "\n";   //  Variable  can  not  be  accessed  after  deletion
		cout << *b << "\n";
		cout << *c << "\n";
		cout << *d << "\n";
}

/*
1)  new  operator  creates  variable  at  run  time  and  address  of  the  variable  is   returned

2) LHS  of  new  operator  is  pointer becoz  new  is   returning  address

3) pointer  =  new  datatype(value)

*/