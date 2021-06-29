// Find  outputs
#include <iostream>
using  namespace  std;
class  Parent
{
	public:
		 void  disp(float  x)	 
		 {
				cout << "Parent function : " << x << "\n";
		}	
};
class  Child  :  public  Parent 
{
	public:
		void  disp(int  x)  
		{
			cout << "Child function : " << x << "\n";
		}
};

main()
{
	Child  c;
	c . disp(25);  
	c . disp(10.8);
    ((Parent)c) . disp(36.7);
    ((Parent)c) . disp(76);
}
