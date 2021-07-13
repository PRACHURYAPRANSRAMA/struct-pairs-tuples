//
//  main.cpp
//  2struct,pairs,tuples
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 04/02/21.
//

#include <iostream>

using namespace std;

struct student
{
    int roll;
    string name;
    int marks;
};

void print_student(student p)
{
    cout<<p.name<<"--"<<p.roll<<"--"<<p.marks<<endl;
}

int main()
{
    struct student a[2];
    
    a[0].roll = 10;
    a[0].name = "shyam";
    a[0].marks = 57;
    
    a[1].roll = 5;
    a[1].name = "ram";
    a[1].marks =89;
    
    pair<int, string> p;
    pair<int, pair<int,int> > pp;
    pp.first=78;
    pp.second.first=68;
    pp.second.second=98;
    cout<<"holla"<<pp.second.first<<'\n';
    //cin>>p.first>>p.second;
    p.first=56;
    p.second="ruferf";
    cout<<p.first<<p.second<<endl;
    for(int i=0;i<2;i++){
    print_student(a[i]);
    }
    cout<<endl;
    cout << "NAMASTE, World!\n"<<endl;
    return 0;
}

