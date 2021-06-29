/*
Overload   +  operator  on  the  following
1) object + object
2) object + int
3) int + object
*/

#include <iostream>
using  namespace  std;
class  Vector
{
	private:
		int  *a;  //  'a'  points  to  runtime  array  of  size  n
		static   int  n; // 'n'  is   global  to all  Vector  class  objects
	public:
		static  void  get()
		{
			cout << "How  many  elements ?  :  ";
			cin >> n;
		}
		friend   istream&  operator  >>(istream&  din , Vector&  x);
		friend   ostream&  operator  <<(ostream&  dout , Vector  x);
		friend   Vector   operator  +(Vector  x , Vector y);  // object + object
		friend   Vector   operator  +(Vector  x , int  y);  // object +  variable
		friend   Vector   operator  +(int  x , Vector  y); // variable +  object
		//friend   int   operator  +(int  x , int  y);  //  Error  becoz  no  parameter  is  object
};

// Rule  :  At  least  one  parameter  must be  object  for   operator  op()    function.  This  rule  is  only  for  NMF   but   not
// for   MF.  This  is  becoz  MF  is  anyway  called  wrt   object  and  hence  parameters  need  not  be  objects
int  Vector :: n; // Memory  allocation   to  static  member  'n'

istream&  operator  >>(istream&  din , Vector&  x)
{
	x . a = new  int  [Vector :: n];
	cout << "Enter  elements \n";
	for(int i = 0 ; i <=  Vector ::  n - 1 ; i++)
			din >> x . a[i];
	return  din;
}

Vector  operator  + (Vector  x  , Vector  y)
{
	Vector  z;
    z . a = new  int [Vector :: n];
    for(int  i = 0 ; i <= Vector :: n - 1 ; i++)
			z . a[i] = x . a[i] + y . a[i];
	return   z;
}

Vector  operator  + (Vector  x  , int  y)
{
	Vector  z;
    z . a = new  int [Vector :: n];
    for(int  i = 0 ; i <= Vector :: n - 1 ; i++)
			z . a[i] = x . a[i] + y;
	return   z;
}

Vector  operator  + (int  x  ,  Vector  y)
{
	Vector  z;
    z . a = new  int [Vector :: n];
    for(int  i = 0 ; i <= Vector :: n - 1 ; i++)
			z . a[i] = x  + y . a[i];
	return   z;
}


ostream&  operator   <<(ostream&  dout , Vector  x)
{
	cout << "Results \n";
	for(int i = 0 ; i <=  Vector ::  n - 1 ; i++)
			dout << x . a[i] << "\t";
	dout << "\n";
	return  dout;
}


void  menu()
{
	cout << "1. object + object \n";
	cout << "2. object + int \n";
	cout << "3. int + object\n";
	cout << "4. Exit\n";
}

main()
{
	int  ch;
	menu();
	cout << "Enter  choice : ";
	cin >> ch;
	while(ch < 4)
	{
		switch(ch)
		{
			case  1 : {
								Vector :: get(); // reads  array size  to  static  member  'n'
								Vector  x , y;
								cin >> x >> y; // operator >>   function is  executed  twice
								cout << x + y;  // name less  object  is  printed
								break;
						   }
			case  2 : {
								Vector :: get(); // reads  array size  to  static  member  'n'
								Vector  x;
								int  y;
								cin >> x; // user  defined  function  is  executed
								cout << "Enter  any  number  :   ";
								cin >> y; // pre-defined  function  is  executed
								cout << x + y;  // name less  object  is  printed
								break;
							}
			case  3 : {
								Vector :: get(); // reads  array size  to  static  member  'n'
								int   x;
								Vector  y;
								cout << "Enter  any  number  :   ";
								cin >> x >> y;
								cout << x + y;
								break;
							}
			}

			menu();
			cout << "Enter choice : ";
			cin >> ch;
	} // while
}