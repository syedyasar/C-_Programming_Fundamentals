// default  arguments  (or) Optional  arguments
#include <iostream>
using namespace std;
int  add(int  a, int b  , int c  )
{
	return a + b + c;
}
void  f1()
{
		int add(int , int = 40 , int = 50); 
		cout<< add(100) << "\n";  //  190
}

main()
{
	int add(int  , int = 20 , int = 30);  // 2nd  and  3rd  parameters  have  default  values 20 and 30
	cout << add(100) << "\n"; // 150
	f1();
	cout << add(100 , 200) << "\n";  // 330
	cout << add(100 , 200 , 300) << "\n";  // 600
	//cout << add() << "\n";  //   Error  becoz  1st  parameter  has  no  default  value
}

/*
Default      arguments
-------------------------------------
1) Default  values   can  be    assigned  to  parameters  in  the  function  header (or) in function prototype

2) int  add(int  a , int  b = 20 , int  c  = 30);  --->  Parameters  b  and  c  have  default  values  20  and  30
             
3) Default  values  are  sent  to  the  function  only  when  actual  parameters  are  missing  in  the   function  call.
	Eg :  add(100)  --->   parameters  b  and  c  take  default  values  20  and  30  becoz   only  one 	argument    is
                                    passed  from  function  call

4) Default  values  are  ignored  when  actual  parameters  are  passed  from  function  call.
	Eg : add(100 , 200 , 300)  --->  a  is  100,  b  is  200,  c  is  300

5) Actual  parameter  has  higher  priority  over  default  value
*/
