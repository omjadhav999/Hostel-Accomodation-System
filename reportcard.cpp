#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

class Student{
    private:
      string RollNo, Name, Grade;
    public:
    Student(): RollNo(""), Name(""), Grade(""){}

string setRollNo(string rollNo){
    RollNo = rollNo;
}

string setName(string name){
    Name = name;
}

string setGrade(string grade){
    Grade = grade;
}

string getRollNo(){
    return RollNo;
}

string getName(){
    return Name;
}

string getGrade(){
    return Grade;
}
};

int main(){
    Student s;

bool exit = false;
    while(!exit){
        system("cls");
        int val;
        
        cout<<"Welcome to student report card system"<<endl;
        cout<<" ";
        cout<<"1. Report Card"<<endl;
        cout<<"2. Exit"<<endl;
        cout<<"3. Enter choice:";
        cin>>val;

        if(val==1){
            system("cls");
        string rollno, name;
        cout<<"Enter RollNo Of Student: ";
        cin>>rollno;
        s.setRollNo(rollno);

        cout<<"Enter Name Of Student: ";
        cin>>name;
        s.setName(name);

        int Sub1, Sub2, Sub3;
        cout<<"Enter Sub1 Marks: ";
        cin>>Sub1;
  
        cout<<"Enter Sub2 Marks: ";
        cin>>Sub2;

        cout<<"Enter Sub3 Marks: ";
        cin>>Sub3;

        system("cls");
        cout<<"Student Report Card"<<endl;
        cout<<" "<<endl;

        int total = Sub1 + Sub2 + Sub3;
        cout<<"Total Marks Of Student: "<<total<<endl;

        int avg = total/3;
        cout<<"Average MArks Of Student: "<<avg<<endl;

    if(avg >= 90 && avg <= 100){
        s.setGrade("A+");
    } 

    if(avg >= 80 && avg < 90){
        s.setGrade("A");
    } 

    if(avg >= 70 && avg < 80){
        s.setGrade("B+");
    } 

    if(avg >= 60 && avg < 70){
        s.setGrade("B");
    } 

    if(avg >= 50 && avg < 60){
        s.setGrade("C");
    } 
    
    if(avg >= 40 && avg <= 50){
        s.setGrade("D");
    } 

    if(avg < 40){
        s.setGrade("F");
    } 

    cout<<"Grade Of Student: "<<s.getGrade()<<endl;

    ofstream out("D:/Student.txt", ios::app);
    out<<" "<<s.getRollNo()<<" : "<<s.getName()<<" : "<<s.getGrade()<<endl<<endl;
    out.close();
    cout<<"Report Card Is Saved To File!"<<endl;
    Sleep(10000);
}

else if(val == 2){
    system("cls");
    exit = true;
    cout<<"Good Luck!"<<endl;
    Sleep(3000);
}
    }
}
