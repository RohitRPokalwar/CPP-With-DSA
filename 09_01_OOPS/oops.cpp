//For LL Go to direct Method 6

#include <iostream>
using namespace std;
class Student{
    public : 
    string name;
    int rno;
    Student(){
        string b=name;
    }
    Student( string n){
        name=n;
    }
    //If in PArameterised constructor the variable name is same as we declare or initalize;
    Student(string name  , int rno){
      //  name=name;  Gives Error
      //Use this operator
      this->name=name;
      this->rno=rno;
    }
};
void changee(Student* N){
    N->name="Harsh";
}
int main(){
    //Method 1
    Student s;
    s.name="Rohit";
    cout<<s.name<<endl;
    //Method 2
    Student s1("Rohit");
    cout<<s1.name<<endl;
    //Method 3
Student s2("Rohit" , 1000);
    cout<<s2.name<<endl; 
    cout<<s2.rno<<endl;
    //Method 4
    Student* s3=&s2;
    // (*s3).name="Raghav";
    s3->name="Raghav";
    cout<<s3->name<<endl;
    //Method 5 (Changing by FUnction)
    changee(&s2);
    cout<<s2.name<<endl;
    //Method 6
    Student *s5=new Student("Man" , 45);
    cout<<s5->name<<endl;
return 0;
}