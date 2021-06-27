#include <iostream>
using   namespace  std;
class  Test  //  Empty  class  becoz  there   are  no   data members
{
	public:
		static  int  ctr1 , ctr2;  // They  are  global  to  all  Test  class   objects
		Test() // constructor
		{
			cout << "Object is  created at  address :  " << this << "\n";
			ctr1++; //  inc  ctr1  and  ctr2  every  time  an  object  is  created
			ctr2++;  
		}

		~Test()  // destructor 
		{
			ctr2--;   //  decrement  ctr2  every  time  an   object  is  lost
			cout << "object  at  address :  " <<  this << "  is  lost\n";
		}
};
int  Test :: ctr1 , Test :: ctr2; // Memory  is  allocated  to   static  members  and  they  contain   0
Test  a;  // constructor  is  executed
main()
{
	cout << sizeof(Test) << "\n"; //  size  of  empty  class  is   1B
	Test  b ; // constructor  is  executed
	{
		Test c , d; // constructor  is  executed 2   times
	} // destructor  is   executed  2  times  in  the  order  d  and  c
	{
		Test  e; // constructor  is  executed
		Test*  p  = new  Test;  // constructor  is  executed  for  runtime  object
		Test  f; // constructor  is  executed
		delete  p;	 // destructor  is   executed  for   runtime  object
	} // destructor  is   executed  2  times  in  the  order  f  and  e
	Test  g; // constructor  is  executed
	cout << "Total number of  objects : " << Test :: ctr1 << "\n";  // 8
	cout << "Number of  objects alive  : " << Test :: ctr2 << "\n";  // 3
}		 // destructor  is   executed  3  times  in  the  order  g , b  and  'a'
