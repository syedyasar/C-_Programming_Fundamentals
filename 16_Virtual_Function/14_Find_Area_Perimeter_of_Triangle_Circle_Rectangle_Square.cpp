// Find  area  and  perimeter  of  Triangle , Circle , Rectangle  and  Square
#include <iostream>
#include <math.h>
using namespace  std;
class  Shape  
{
        protected:
					float  a;
        public:
				virtual   void get() 
				{
						cin >> a;
				}
				virtual  float  area()  = 0;
				virtual  float  peri() = 0;
				virtual  void   test() = 0;
};


/*
1) new  Shape;  -----> invalid 

2) shape   *p;   ----> valid  becoz  abstract  class  pointer  can  be  created

3) We  are  unable  to  implement  area , peri  and  test   functions   becoz  we  have  no  idea  what  shape  it  is ?

4) It  is  responsibility  of  child  classes  to  implement   area , peri  and  test  functions 

5) If  data  member  'a'   is  private ,  child  classes  can  not  use  the  member  
*/

class Triangle :  public Shape  
{
	protected:
				float   b , c;
	public:
				void   get()
				{
						cout << "Enter  3  sides  of   triangle\n";
						Shape ::  get();
						cin >> b >> c;
				}
				
				float   area()
				{
						float   s  = (a + b + c) / 2;
						return  sqrt(s * (s - a) * (s - b) * (s - c));
				}
		
				float   peri()
				{
						return  a + b + c;
				}

				void  test()
				{
						if (a + b >  c   &&  b + c > a  &&  c + a > b)
												; //  null  statement
						else
						{
								cout << "Not  a  triangle\n";
								exit(0);
						}
				}		
};


class  Circle :  public Shape  
{
	public:
				void   get()
				{
						cout << "Enter  Radius  of   circle\n";
						Shape ::  get();
				}
				
				float   area()
				{
						return  3.14159 * a * a;
				}
		
				float     peri()
				{
						return  2 * 3.14159 * a;
				}

				void  test()
				{
				}		
};

class  Rectangle :  public Shape  
{
	protected:
				float   b ;
	public:
				void   get()
				{
						cout << "Enter  length  and  breadth  of   rectangle \n";
						Shape ::  get();
						cin >> b ;
				}
				
				float   area()
				{
						return  a * b;
				}
		
				float   peri()
				{
						return  2 * (a + b);
				}

				void  test()
				{
						if (a == b)
						{
							cout << "Not  a  Rectangle\n";
							exit(0);
						}
				}		
};




class  Square :  public Shape  
{
	public:
				void   get()
				{
						cout << "Enter  Any side  of  square\n";
						Shape ::  get();
				}
				
				float   area()
				{
						return  a  *  a;
				}
		
				float   peri()
				{
						return   4 * a;
				}

				void  test()
				{
				}		
};

void  operation(Shape *  p) 
{
		p -> get();
		p -> test(); 
		cout <<  "Area :   "   << p -> area() << "\n" ;
		cout <<  "Perimeter : " << p -> peri() << "\n" ;
}

void  menu()
{
		cout << "1. Triangle\n";
		cout << "2. Circle\n";
		cout << "3. Rectangle\n";
		cout << "4. Square\n";
		cout << "5. Exit\n";
}

 
main()
{
		int  ch;
		menu();
		cout << "Enter choice : ";
        cin >> ch ;  //  4
        while(ch < 5) 
        {
              switch(ch)
			  {
					case 1 : operation(new Triangle); 
								  break; // go out of switch				
                    case 2 :  operation(new Circle);
                            	   break;
                    case 3 :  operation(new Rectangle);
                            	   break;
                    case 4 :  operation(new Square);
                            	   break;
      		  }
              menu();
              cout << "Enter choice : ";
			  cin >> ch ;   //  3
       }
}
