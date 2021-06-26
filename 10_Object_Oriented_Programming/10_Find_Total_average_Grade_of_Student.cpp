
/*
/* HOMEWORK 1 =============================================================================================  */

// Find  total , avg  and  grade  of  a  student
// Inputs  are  roll  number , student  name , gender   and  marks  of  3  subjects
/*
class  name  :  Stud
data  members :  ---> rollnumber , studname, marks of  3  subjects , gender , total , avg  and  grade
Functions --->
1)  get()  ---> reads  rollnumber , studname, marks of  3  subjects  and  gender 
2)  compute()  ---> calculate  total , avg  and  grade
                cond                      grade
   -------------------------------------------------
   at  least  one  sub  < 40     Fail
       avg >=  70                       Distinction
       avg >=  60                       1st  class
       avg >=  50                       2nd  class
       avg >= 40                        3rd  class

3)  disp()  ---> prints  rollnumber , studname, gender , total , avg  and  grade

main()  ---> creates  object , call get , compute  and  disp  functions
*/

/* =============================================================================================  */

#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
    int Rollno,marks[3];
    string sname, grade, gender;
    float total=0, average=0;
    
    public:

    void get(){
        cout << "Enter Student Roll Number: ";
        cin >> Rollno;
        cout << "Enter Student Name: " ;
        cin.ignore();
	    getline( cin , sname);
        cout  << "Enter Student Gender: ";
        cin >> gender ;
        cout  << "Enter Marks of 3 Subjects: " << endl;
        for(int i=0;i<=2;i++){
            cout <<  " Subject" << i+1 << "  : " ;
            cin >> marks[i] ;
        }
        
    }
   
    void compute(){
        for(int i=0;i<=2;i++){
            total+=marks[i];
        }
        average = total/3;
        
        //Grade
        if(marks[0]<40 || marks[1]<40 || marks[2]<40)
            grade = "Fail";

        else if(average>=70)
            grade = "Distinction";
    
        else if(average>=60)
            grade = "First Division";
        
        else if(average>=50)
            grade = "Second Division";
        
        else if(average>=40)
            grade = "Third Division";
        
    }
    
    void display(){
        cout <<"\n" << "Student Roll Number: " << Rollno << endl;
        cout << "Student Name : " << sname << endl;
        cout << "Student Gender : " << gender << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Average Marks : " << average << endl;
        cout << "Grade  : " << grade << endl << endl;;
    }
};


int main() {
    Student s1;
    s1.get();
    s1.compute();
    s1.display();
    return 0;
}


