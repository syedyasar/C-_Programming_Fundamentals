// for .. each  loop  demo  program
#include <iostream>
using  namespace std;
main()
{
	string  a[] = {"Hyd" , "Pune" , "Chennai" , "Vijayawada"};
	for(string   s  :  a)  //  s  is  each  string   of  array  'a'
			cout << s  << "\n";  // 
}


/*
Disadvantages  of   for .. each  loop
----------------------------------------------------------
1)  Not  possible to  process  array  in  reverse  order

2)   for  each  loop  is  used  for  array  processing  but  not    print  even numbers , odd  numbers , natural  numbers 
      and  so  on

3) Not  possible  to  access  subscripts
*/
