#include <iostream>

using namespace std;

struct student

{
    int roll;
    string name;
    int marks;
};

void print_student(student x)
{
    cout<<x.name<<"----"<<x.roll<<"----"<<x.marks;
}

struct complex_number
{
    int real;
    int imaginary;
};

complex_number subtract(complex_number a,complex_number b)
{
    complex_number temp;
    temp.real = a.real-b.real;
    temp.imaginary=a.imaginary-b.imaginary;
    return temp;
    
}

int main()

{
     student a[2];
    
    a[0].roll = 10;
    a[0].name = "PRACHURYA";
    a[0].marks = 100;
    
    a[1].roll = 4;
    a[1].name ="holla";
    a[1].marks =75;
    
    for(int i=0;i<2;i++)
    {
        print_student(a[i]);
        cout<<endl;
    }
    
}
