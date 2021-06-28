// Constructor  of   child class
#include  <iostream>
using   namespace  std;
class  Parent
{
	public:
		  Parent()
		  {
			cout << "Parent  constructor\n";
		  }
};

class  Child  :  public  Parent
{
	public:
		Child() //  OS   executes  Parent constructor  before  execution  of  Child  constructor
		{
			cout << "Child  constructor\n";
		}
};

class  Gc  :  public  Child
{
	public:
		Gc() //  OS   executes  Child constructor  before  execution  of   Gc  constructor
		{
			cout << "Grand  child  constructor\n";
		}
};

main()
{	
	Gc  g; 
	Child  c; 
	Parent  p; 
}
