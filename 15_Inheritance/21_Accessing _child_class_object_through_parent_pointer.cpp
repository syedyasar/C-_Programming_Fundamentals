// Accessing  child class object through parent pointer

#include  <iostream>
using   namespace  std;
class  Parent
{
	public:
		int  a = 10 , b = 20;
};
class  Child :  public  Parent 
{
	public:
		int  c = 30 , d = 40;
};
main()
{
	Parent*   p = new  Child; //  Parent   pointer  points  to Child  object
	cout << "a  :  " << p -> a << "\n"; //  valid  becoz  'a'   is  Parent  classs   member  and  'p'  is  Parent pointer  ---> 10
	cout << "b  :  " << p -> b << "\n"; //  valid  becoz  'b'   is  Parent  classs   member  and  'p'  is  Parent pointer  ---> 20
	//cout << "c  :  " << p -> c << "\n"; // Error  becoz  type  of  p  is  Parent*   and   member   'c'  does  not  exist in  Parent  class
	//cout << "d  :  " << p -> d << "\n"; // Error  becoz  type  of  p  is  Parent*   and   member   'd'  does  not  exist in  Parent  class
	cout << "c  :  " <<  ((Child  *)p) -> c   << "\n";
	cout << "d  :  " << ((Child  *)p) -> d  << "\n";
}
			


/*
1) Parent  pointer  can  point  to  Child  object  but  members  of  the  Child  object  can  not  be  accessed  through  Parent  
    pointer

2) Convert  Parent  pointer  to  Child  pointer  in order to  access  members  of  Child  object
*/
