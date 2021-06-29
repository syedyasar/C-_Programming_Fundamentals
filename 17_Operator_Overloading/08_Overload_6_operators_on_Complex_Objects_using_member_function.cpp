// Same  program  but  they   are   member   functions
#include  <iostream>
using  namespace  std;
class  Complex
{
		private:
				float  rp , ip;
		public:
				Complex  operator  + (Complex   b);
				Complex  operator  - (Complex   b);
				Complex  operator  * (Complex   b);
				Complex  operator  / (Complex   b);
				friend  istream&  operator  >> (istream&  din ,  Complex &   a);
				friend  ostream&  operator  << (ostream&  dout ,  Complex   a);
};

Complex  Complex ::  operator  +(Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = rp + b . rp;
		c . ip = ip + b . ip;
		return  c;
} // object   c   is  lost

/*
1) d  =  a + b  ---> operand  1  (a)  is   owner  object  and  operand  2(b)  is  parameter  object

2) d = a . operator  +(b)  ---> Alternative call

3) s = p + q +  r
       =  nameless  object +  r
	   = nameless  object
*/


Complex   Complex ::  operator  -(Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = rp - b . rp;
		c . ip = ip - b . ip;
		return  c;
} // object   c   is  lost

/*
1) d  =  a - b  ---> simple  call

2) d =  a . operator  -(b)  ---> Alternative call
*/

Complex  Complex :: operator  *(Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = rp * b . rp - ip * b . ip;
		c . ip = rp * b . ip + ip * b . rp;
		return  c;
} // object   c   is  lost

/*
1) d  =  a * b  ---> simple  call

2) d = a . operator  *(b)  ---> Alternative call

3) d = a + b * c  = a + namelessobj =  namelessobject
*/

Complex  Complex  ::  operator  /(Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = (rp * b . rp + ip * b . ip) / (b . rp * b . rp + b . ip * b . ip);
		c . ip = (ip * b . rp - rp * b . ip) / (b . rp * b . rp + b . ip * b . ip);
		return  c;
} // object   c   is  lost

/*
1) d  =  a / b  ---> simple  call

2) d = operator  /(a , b)  ---> Alternative call

*/


istream&   operator >>(istream&  din ,  Complex &a) // din  and  a   are  references  to  actual  parameter  objects
{
		cout << "Enter  Real part : ";
		din >> a . rp;
		cout << "Enter  Imaginary part : ";
		din >> a . ip;
		return  din;	//  object   cin  is   returned
}

/*
1) cin >> x   ---> simple  call

2) operator >>( cin ,  x)   ---> alterbative call

3) operator  >>  can  not  be  a  MF of  complex  class  becoz   it  is  called  wrt  istream  class  object  cin

4) Operand 1 (cin)  is  owner  object  when  operator >>  is  a  MF 
	
*/

ostream&  operator  <<(ostream&  dout , Complex  a) // dout  is   reference  to  actual  parameter  object  cout  
{
		if (a . ip < 0)
				dout << a . rp << " - i " << -a.ip << "\n";
		else
				dout << a . rp << " + i " << a.ip << "\n";
		return  dout;	//  object   cout  is   returned
}

/*
1) cout <<  x
2)  operator <<(cout , x)
*/


main()
{
		Complex  a , b;
		cin >> a >> b;
		cout << "Sum : " << a + b;
		cout << "Difference : " << a - b;
		cout << "Product : " << a * b;
		cout << "Quotient : " << a / b;
}

/*
1) cout << variable;  ---> It  is  a   function  call  to  predefined  function  becoz  operand 2   is   variable

2) cout << string;  ----> It  is  a   function  call  to  predefined  function  becoz  operand 2   is   string

3) cout << object;  ----> It  is  a   function  call  to  user defined  function  becoz  operand 2   is   object
*/
