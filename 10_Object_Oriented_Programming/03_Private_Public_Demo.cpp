// private and  public  demo  program
#include  <iostream>
using  namespace  std;
class   c1
{
	private:
		int  x = 10;
		void  f1()
		{
			cout << "private  function\n";
		}
	public:
		int  y = 20;
		void  f2()
		{
				cout << x << "\n";  // valid  becoz  f2  is  a  function  of  same  class
				f1();  // valid
		}
};

main()
{
		c1    a;
		//cout << a . x << "\n"; // Error  becoz  NMF  main  can  not  use  private  member  'x'
		cout << a . y << "\n"; // valid  becoz  'y'  is  public  member
		//a . f1(); // Error  becoz  NMF  main  can  not  call   private  function  f1
		a . f2(); // valid  becoz  f2  is  public function
}




/*
Access  Specifiers
--------------------------------
There  are  3  scopes  in  a  class
1) private
2) public
3) protected

private
-------------
1) class  c1
	{
	     private:
				int  x;    ---->    It  is  private  data  member
	            void   f1()    ----->   It   is  private   function
	            {
	            }
	};

2) private  members   are  visible  to  same  class  and   hidden  from   other  classes  and  non-member  functions



4) Similarly  Non-member  function  can  not  use  private  members  of  a  class  (becoz  they  are  not  visible)

5) Functions   of  same  class  can  use  private  members

6) private  members  can  be  accessed  indirectly  through    public  functions  of  same  class
    i.e.  call  public  function   and    it  can  use  private  members  of  same  class.
    This  is  known  as  indirect  access.

7) If  data   members  are    private,  data  hiding  is  achieved
    i.e.  Contents  of  the  object  is  hidden    from  other  classes  and  non-member  functions

8) If  object  contains  sensitive  data,  it  must  be  hidden  from  other  classes  and  non-member  functions
    This  is  possible  only  when  data  members    are  private.
    Eg:  If  object  contains  user  name , password,  bank  account  information ,   they  must  be  hidden  from  other  classes
            non-member  functions

9) If  member  functions  are   private,  they  can  not  be  called  by  other  classes  and  non-member  functions
    i.e.  A  class  can    not  call    private   function   of  a  different  class.
  
10) Similarly  Non-member  function  can  not   call   private  functions   of  a  class 

11)  In  general,  hide  data  but  not  member  functions  becoz    function   contains  code  but  not  data

public
------------
1)  class  c1
	  {
	         public:
					int  x;    --->  It  is  public  data  member
	                void  m1()    --->   It   is  public  member   function
	                {
	                }
	   };

2) public  members(data  members  and   member   functions)  are  visible  to  same  class  ,  other  classes  and
     non-member  functions

3) They  are  not  hidden  from  any  class  and   function 
     i.e.  They  are  exposed  to  whole   program

4) A  class  can  use  public    members  of  a  different  class.

5)  Similarly,  non-member  functions   can   use  public  members  of  a  class

6) If  data  members  are  public  ,  data  hiding  is  lost  (dangerous)
     i.e.    Contents  of  the  object  is  exposed    to    other      classes   and   non-member  functions (which  is  not  a  good  idea).

6) If   member  functions  are  public,  they  can  be  called  by  other  classes
    i.e.    A  class  can    call      public   functions   of  a  different  class.
                                             
7)  Similarly,  non-member  functions   can  call  public  functions  of  a  class											  

8) In  general,  data  members  are  usually  private  and  member   functions    are  usually    public


Note:
1) Every  class  must  contain  at  least  one  public  function  so  that  private  members  can  be  used  through  that  public
    function

2) If  there  are  no  public  functions   in  the  class,  class  becomes  useless
*/


