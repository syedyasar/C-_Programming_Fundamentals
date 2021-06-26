
/*   Find area and perimeter of triangle   and   represent triangle by an object

class name is  Triangle
------------------------------------
data  members  --->  a , b  , c
get()  --->   reads values of  a , b , c
test()  --->  stop  execution when  a, b,c do  not  form a  triangle
area()   --> returns  area  of  triangle ---> 
peri()  ---> returns  perimeter  of   triangle 
-------------------------------------------------------------------
main()  ---->  creates  triangle  object and  call  all  the  functions
*/


#include <iostream>
#include <math.h>
using namespace std;

class Triangle{
    private:
    float a;
    float b;
    float c;
    
    public:
    void get(){
        cout << "Enter the three sides of the triangle\n";
        cin >> a >> b >> c;
    }

    bool test(){
       return  (a+b>c && b+c >a && c+a>b) ? true : false;
    }
    //float a, float b, float c
    float area(){
        float s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    
    float perimeter(){
        return a+b+c;
        
    }
    
};

int main() {
    bool c;
    Triangle t1;
    t1.get();
    c=t1.test();
    if(c){
       cout << "Area of Triangle : " << t1.area() <<  endl;
       cout << "Perimeter of Triangle : " << t1.perimeter() <<  endl;  
    }
    else{
        cout << "Not a Triangle "  << endl;
    }
    return 0;
}

