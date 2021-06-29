/*
Add  polar   co-ordinates

p1   --->  r = 3.5  ,  a  = 35  degress
p2   --->  r  =  4.5  , a = 45 degress
p1  --->  r1   -->  x  =  r    cos(a) , y = r   sin(a)
p2  --->  r2   -->  x  =  r    cos(a) , y = r   sin(a)
r3 = r1 + r2  ---> x = r1 . x +  r2 . x ,  y = r1 . y + r2 .  y
r3  ---->   p3 --->  r = sqrt(x  x +  y  y) , a = tan inverse(y / x)
print   p3

atan  means  tan  inverse  ,  <math .h>

class   polar
--------------------
data  members   --->   r   and  a
Functions  ----->  get() , constructor ,  disp() , getr() , geta()

class   rect
--------------------
data  members   --->   x  and  y
Functions  ----->  constructor , getx() , gety()  and   add()

1. Read  p1  and  p2
2. convert  p1  to  r1  and  p2  to  r2
3) Add  r1  and  r2 and  store   results  in   r3
4.  convert  r3  to   p3
5) print  p3

*/

#include <iostream>
#include <math.h>
#define PI 3.14159265
using  namespace  std;


class  cartesian
{
	private:
			float  x , y;
	public:
			cartesian(){
				
			}
			cartesian(polar  c)
			{
				x= c.getr() *cos( c.geta()* PI / 180.0 );
				y= c.getr() *sin( c.geta()* PI / 180.0 );
			}
			cartesian add(cartesian a, cartesian b){
				this->x= a.x+b.x;
				this->y= a.y+b.y;
				return *this;
			}
			float  getx()
			{
					return x;
			}

			float  gety()
			{
					return y;
			}
			void   disp()
			{
				cout << "\n x : "  << x << "\n y :" << y ;
			}
};


class  polar
{
	private:
			float r , a;
	public:
			polar(){	
			}
			polar(cartesian c)
			{
				
				float r = sqrt(c.getx()*c.getx() +  c.gety() * c.gety()) ;
				float a = atan(c.gety() / c.getx()) ;
			}
			void  get()
			{
				cout << "Enter radius : ";
				cin >> r;  
				cout << "Enter  Angle in Degrees: ";
				cin >> a; 
			}
			
			float  getr()
			{
					return r;
			}

			float  geta()
			{
					return a;
			}
};



int main()
{
	polar   p1,p2;
	p1 . get();
	p2 . get();
	cartesian  r1= p1;
	cartesian  r2= p2;
	cartesian  r3 ;
	r3.add(r1,r2);
	polar p3=r3;
	r3 . disp();
	return 0;
}
