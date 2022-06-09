#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std ; // grp19 9th june 2022 


class Student{
private:
ull roll_no;
string name ;
int semester;
public:
// constructor
Student(ull x , string y , int z){
    roll_no = x ; name = y ; 
    semester = z ;
}
void display_student(){
    cout<<"Roll No :    "<<roll_no<<endl;
     cout<<"Name :  "<<name<<endl;
        cout<<"Semester :   "<<semester<<endl;
}
void change_roll_no(ull x){
    roll_no = x;
}
void change_name(string x){
    name = x;
}
void change_semester(int x){
    semester = x;
}
};
class Department:public  Student{
private:
string programme;
public:
//constructor
Department(ull x , string y , int z,string grp19):
Student(x,y,z){
    programme = grp19 ;
}
void show_department(){
    cout<<"Department :    "<<programme<<endl;
}
void change_department(string x){
    programme = x ;
}
};
class Exam_Cell:public  Student{
private:
int marks;
public:
//constructor
Exam_Cell(ull x , string y , int z,int salmon):
Student(x,y,z){
    marks = salmon ;
}
void show_Marks(){
    cout<<"Marks :    "<<marks<<endl;
}
void change_Marks(int x){
    marks = x ;
}
};
class Marksheet:public virtual Department , public virtual Exam_Cell{
public:
// Marksheet constructor //

Marksheet(ull x , string y , int z , string s , int m):
Department(x,y,z,s),Exam_Cell(x,y,x,m){/*null*/}
void Display_student_information(){
      Department::display_student();
    show_department();
    show_Marks();
    cout<<endl;
    cout<<"************************************"<<endl;
    cout<<endl;
}
};

int main(){
  /*     create, update and display the information contained in 
                       Marksheet object                         */
   Marksheet obj1(112115157 , "som singh lodhi" , 2 , "computer science" , 0);
   obj1.Display_student_information();
   obj1.change_department("civil");
   obj1.change_Marks(100);
   obj1.Department::change_name("sourish mittal");
   obj1.Department::change_roll_no(112115158);
   obj1.Department::change_semester(5);
   obj1.Display_student_information();

}
