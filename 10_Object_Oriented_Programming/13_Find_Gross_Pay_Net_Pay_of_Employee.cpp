
/* =============================================================================================  */
/*
Find  Gross  pay  and  Net pay  of  an  employee
Inputs  are  emp number , emp name , salary , city
da = 50%  of  salary
hra = 20%  of  salary
cca = 200 when employee  lives  in  Hyderabad  and   100  otherwise
grosspay = sal + da + hra + cca
pf = 8%  of  grosspay  but  a  maximum  of  Rs.400
tax  is  10%  of   grosspay  when  grosspay < 10000 and  15%  otherwise
Netpay = Grosspay - pf - tax

class  name  ---->  Emp
data members ---> empno , empname , salary , city , grosspay , netpay
Functions
------------------
get()  --->  reads empno , empname , salary and  city
compute()  --->  calculates grospay and netpay
disp()    ---> prints  empno , empname , salary , city , grosspay , netpay
main()  ---> creates an  object  and  calls  get() , compute() and disp()
*/
/* =============================================================================================  */

#include <iostream>
#include <string>
using namespace std;

class Employee{
    
private:
  int Empno;
  string emp_name,city;
  float salary,gross_pay,Net_pay;
  
public: 
  void get(){
        cout << "Enter EMployee Number :";
        cin >> Empno;
        cout << "Enter EMployee Name :";
        cin.ignore();
        getline(cin , emp_name);     
        cout << "Enter EMployee City Location :";
        cin >> city;           
        cout << "Enter EMployee Salary:";
        cin >> salary;    
        }
        

  void compute(){
    float da,hra,cca,pf,tax;
    da= 0.5*salary;
    hra=0.2*salary;
    cca= ((city=="Hyderabad") ? 200 :100);
    gross_pay = salary + da +hra +cca;
    pf=((0.08*gross_pay)>=400? 400 : (0.08*gross_pay) );
    tax=(gross_pay<10000)? (0.1*gross_pay):(0.15*gross_pay);
    Net_pay =   gross_pay -pf -tax;  
    }
    
     void display(){
        cout <<"\n"<< "EMployee Number :" << Empno << endl;
        cout << "Enter EMployee Name :" << emp_name << endl;
        cout << "Employee City Location :"<< city << endl;
        cout << "EMployee Salary:" << salary << endl;
        cout << "Gross Pay :" << gross_pay << endl;
        cout << "Net Pay:" << Net_pay << endl;
        }
            
};


int main() {
    
    Employee e1;
    e1.get();
    e1.compute();
    e1.display();

    return 0;
}


