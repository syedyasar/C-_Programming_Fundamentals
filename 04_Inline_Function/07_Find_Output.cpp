// Find  outputs
#include <iostream>
using namespace std;
int   f1(int  x = 25)
{
        return  x;
}

int  f2(int  x)
{
        return  x;
}

main()
{
	cout <<  f1(10) << "\n";  // 10
	cout <<  f1() << "\n";  //  25
	cout <<  f2(20) << "\n"; //  20
	//cout <<  f2() << "\n";  //  Error  becoz  parameter   'x'  has  no  default value
}

/*
1)  When  a  parameter  has  default  value,  there  are  2  options  :
      a)  Send  argument  from  function  call   and  default  value  is  ignored
      b)  default  value  is  sent  to  the  function  when  argument  is  not  passed  from  function  call

2) When  a  parameter  has  no  default  value,  argumnet    must  be  sent  from   the  function  call
    otherwise  it  leads  to  error
*/