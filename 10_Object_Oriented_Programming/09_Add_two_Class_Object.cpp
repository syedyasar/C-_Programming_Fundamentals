
/*
Add 2 class objects and each object contains 3 values

class name is Test
-----------------------------------
data members x , y , z
get() ---> reads x , y , z

c . add(a , b) ---> adds objects a and b and store results in object 'c'
disp() ---> prints x , y and x
-------------------------
main() ----> creates 3 objects a , b and c, a and b are input objects and 'c' is output object
*/


#include <iostream>
#include <math.h>
using namespace std;

class Test{
private:
float x , y , z;
public:
void get(){
cout << "Enter any three numbers \n";
cin >> x >> y >> z;
}

void add(Test a, Test b)
{
x=a.x + b.x;
y=a.y + b.y;
z=a.z + b.z;
}


void display(){
cout << "x : " << x << endl;
cout << "y : " << y << endl;
cout << "z : " << z << endl;
}
};


int main() {
Test a,b,c;
a.get();
b.get();
c.add(a,b);
c.display();

return 0;
}

