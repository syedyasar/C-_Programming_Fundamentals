#include  <iostream>
using  namespace  std;
template  <class   T1 , class  T2>
void    disp(T1   x , T2  y = 20)
{
	cout << x  <<  "\t"  << y << "\n";
}
main()
{
	disp(25 , 10.8f); //
	disp("Hyd" , 25);
	disp(70.2 , 'g');
	disp(10 , 20);
	disp(25 , "Hyd");
	//disp(25);
}

/*
1)  Advantage  of  T1  x , T2    y   --->  We  can send  different  types  of  parameters  or  same  type  of  parameters
     from  the   function  call

2) Disadvantage  of  T  x , T   y   --->  Not  possible  to  send  different  types  of  parameters  from  the   function  call

3) Default  arguments  are  not  allowed  when parameter  type  is   T
*/
