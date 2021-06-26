
/* =============================================================================================  */
/*  =============================================================================================  */

// Repeat  the  same  program  for  'n'  employees
// Homework 5

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
        cin.ignore();
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
    Employee e[100];   
    int n,i;
    
    cout << "ENter the number of EMployees :" << endl;
    cin >> n;

    for(i=1;i<=n;i++){
        cout << "\n" << "Employee" << i << "  Details :" <<endl;
        e[i].get();
    }
    
    for(i=1;i<=n;i++){
        e[i].compute();
        cout <<"\n" << "Employee" << i << "  Details :" <<endl;
        e[i].display();
    }


    return 0;
}
