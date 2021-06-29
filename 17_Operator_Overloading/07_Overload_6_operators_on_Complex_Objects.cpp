// overload  + , - , * , / , >> and  <<  on   complex  object
#include  <iostream>
using  namespace  std;
class  Complex
{
		private:
				float  rp , ip;
		public:
				friend  Complex  operator  + (Complex  a , Complex   b);
				friend  Complex  operator  - (Complex  a , Complex   b);
				friend  Complex  operator  * (Complex  a , Complex   b);
				friend  Complex  operator  / (Complex  a , Complex   b);
				friend  istream&  operator  >> (istream&  din ,  Complex &   a);
				friend  ostream&  operator  << (ostream&  dout ,  Complex   a);
};

Complex  operator  +(Complex  a , Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = a . rp + b . rp;
		c . ip = a . ip + b . ip;
		return  c;
} // object   c   is  lost

/*
1) d  =  a + b  ---> simple  call

2) d = operator  +(a , b)  ---> Alternative call

3) s = p + q +  r
       =  nameless  object +  r
	   = nameless  object
*/


Complex  operator  -(Complex  a , Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = a . rp - b . rp;
		c . ip = a . ip - b . ip;
		return  c;
} // object   c   is  lost

/*
1) d  =  a - b  ---> simple  call

2) d = operator  -(a , b)  ---> Alternative call
*/

Complex  operator  *(Complex  a , Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = a . rp * b . rp - a . ip * b . ip;
		c . ip = a . rp * b . ip + a . ip * b . rp;
		return  c;
} // object   c   is  lost

/*
1) d  =  a * b  ---> simple  call

2) d = operator  *(a , b)  ---> Alternative call

3) d = a + b * c  = a + namelessobj =  namelessobject
*/

Complex  operator  /(Complex  a , Complex  b)
{
		Complex  c;  // An  object  is  created  to  hold  the   results
		c . rp = (a . rp * b . rp + a . ip * b . ip) / (b . rp * b . rp + b . ip * b . ip);
		c . ip = (a . ip * b . rp - a . rp * b . ip) / (b . rp * b . rp + b . ip * b . ip);
		return  c;
} // object   c   is  lost

/*
1) d  =  a / b  ---> simple  call

2) d = operator  /(a , b)  ---> Alternative call

*/







istream&  operator >>(istream&  din , Complex &a) // din  and  a   are  references  to  actual  parameter  objects
{
		cout << "Enter  Real part : ";
		din >> a . rp;
		cout << "Enter  Imaginary part : ";
		din >> a . ip;
		return  din;	//  object   cin  is   returned
}

/*
1) cin >> x   ---> simple  call

2) operator >>(cin , x)   ---> alternative call

3) cin >> x >> y >> z
    cin >> y >> z
    cin  >> z
        cin  --->  ignored

4)  If  return  din   is  omitted,  each  object  must  be  read  separately like
     cin >>  x;
     cin >>  y;
     cin >>  z;

5) The  advantage  of  return  din  is   that  multiple  objects  can  be  read  in   the  same  line  like  cin >> x >> y >> z

6) If  formal  parameter  is  Complex   a,  inputs   are  read  to  formal   parameter  object  'a'   but  not   reflected  to
    actual  parameter  object   'x'.   Thus   'x'  contains  garbage  values  even   after   cin >>  x   is   executed
		
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
