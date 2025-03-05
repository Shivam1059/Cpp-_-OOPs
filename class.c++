//Class & Object

#include<iostream>
#include<string>
using namespace std;

class Teacher {

  private: 
     double salary;

  //declear access modifer
  public : 
  //Properties // atriibutes
  string name;
  string dept;
  string subject;
 

  //member function //inside of the class functions
  void changeDept(string newDept){
    dept = newDept;
  }

 //setter
  void setSalary(double s){
      salary = s;
  }

  //getter
  double getSalary(){
    return salary;
  }

};

int main(){

Teacher t1;//object
  t1.name = "shradha";
  t1.dept = "IT";
  t1.subject = "OOPs";
  t1.setSalary(25000);

  cout << t1.name <<endl;
  cout << t1.dept <<endl;
  cout << t1.subject <<endl;
  cout << t1.getSalary() <<endl;

return 0;

}