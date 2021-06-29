// virtual  pointer
#include <iostream>
using  namespace  std;
class  Parent // It  is  not  an  empty  class  becoz  class  contains  vptr
{
	public:
		 virtual  void  disp()	//  1000
		 {
				cout << "Parent function\n";
		}	
};
class  Child  :  public  Parent  // It  is  not  an  empty  class  becoz   vptr  is   inherited  to  child  class
{
	public:
		 void  disp() //  2000
		{
			cout << "Child function\n";
		}
};

class  Gc  :  public  Child // It  is  not  an  empty  class  becoz   vptr  is   inherited  to  Gc  class  class
{
	public:
		 void  disp() // 3000
		{
			cout << "Grand  Child function\n";
		}
};


main()
{
	cout << sizeof(Parent) << "\n"; // 8
	cout << sizeof(Child) << "\n"; //  8
	cout << sizeof(Gc) << "\n"; //  8
	Parent*  p = new  Parent; //  parent   object  contains  vptr  which   is  initialized  to  1000
	p -> disp(); //  1000  is   substituted  and  Parent   function  is  executed
	p = new  Child;   //  Child   object  contains  vptr  which   is  initialized  to  2000
	p -> disp(); //  2000  is   substituted  and   Child    function  is  executed
	p = new  Gc;  //  Gc  object  contains  vptr  which   is  initialized  to   3000
	p -> disp();  //  3000  is   substituted  and   Gc    function  is  executed
}


/*
virtual  pointer
--------------------------
1) If   a   class contains  at  least  one  VF  or  PVF, C++  compiler  adds  virtual  pointer  to  the  class

2) virtual  pointer  pointer  contains  address  of   VF
     i.e. virtual  pointer  points  to  VF

3) virtual  pointer  is  initialized  by  OS  as  soon  as   object  is  created

4) Address in  virtual  pointer  is   substituted  whereever  VF  is  called. So  it  is  used  for  binding  i.e. Dynamic  Binding

5) size  of  the  class  is  sum  of  sizes  of  data members + 8 and  +8  is  due  to  virtual  pointer

6) Class  can  not  be  empty   when  class  contains  VF's   becoz  class  contains  virtual  pointer

7) virtual  pointer  is  inherited  to   Child   class  and  hence  size  of  child  class  is  also  +8  bytes

8) If  class  contains  multiple  VF's , virtual  pointer  points  to  virtual  table  and  virtual  table  contains  addresses   of 
    VF's

9) virtual  pointer  is  member  of  the  object   but not  virtual   table
*/

