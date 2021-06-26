
/*  =========== 

 Repeat  same  program   for  'n'  students

Roll  Number     Stud name   Gender    Total    Average   Grade
10                         .....	
20                         ....
15                         .....

*/

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

    cout << Rollno<<  "\t\t" << sname << "\t\t" << gender <<  "\t\t" << total << "\t\t" << average << "\t\t" << grade << endl;
            }
};


int main() {
    int n,i;
    
    cout << "Enter the Number of Students:" << endl;
    cin >> n;
	Student s[n];
    for(i=0;i<n;i++){
    cout << "\n" <<"Student" << i+1 << " Details : " << endl;
    s[i].get();
    }
    
    cout << "\n" << "RollNumber" << "\t" << "Name " << "\t\t"  << "Gender" <<  "\t\t"  << "Total" << "\t\t"  << "Average" << "\t\t" << "Grade" << endl;
    cout << "==================================================================================================================" << endl;
    for(i=0;i<n;i++){
           s[i].compute();
           s[i].display(); 
        }

    return 0;
}



