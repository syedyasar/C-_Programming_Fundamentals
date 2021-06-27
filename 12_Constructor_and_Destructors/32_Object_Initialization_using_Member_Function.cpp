//  Object  initialization  using  member   function
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		int nr , dr ;
	public:
		void  init()
		{
			nr = 5;
			dr = 8;
		}
		void  disp()
		{
			cout << nr << "/" << dr << "\n";
		}
};
main()
{
	Rat  a; // object  contains  garbage  values  becoz  there  is  no  constructor  in  the  class
	a . init();  //  object  is  initialized  with  5  and  8
	a . disp();  //  5 / 8
}


/*
How  To  initialize  an  object  ?
------------------------------------------------
Object  can  be  initialized  in  2  ways
1) Constructor
2) Member  Function



      Member  Function                                                                       Constructor
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1) class  Rat																			1) class  Rat
    {																								{
		private:																						private:
				int  nr , dr;																	                	int  nr,dr;
		public:																							public:
				void   init()																						Rat()
				{																										{
					nr = 5;																								nr = 5;
					dr = 8;																								dr = 8;
				}																										}
	};																								};

2) Rat  a;  --> creates  object													2) Rat  a;
    a . init();  ---> initializes object								  			    single  stmt  is  enough  for  creation  and  initialization
    2  stmts  are  required					                                                                               
    
3) object  is  not  initialized  unless  init   function              3) object  is  automatically  initialized  as  soon  as 
    is  called								                                                    it   is  created(guranteed  initializtion)

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Constructor  is  preferred  over  Member   function as  far  as  object  initialization  is  concerned
*/