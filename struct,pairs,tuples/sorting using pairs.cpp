#include<iomanip>

#include<iostream>

using namespace std;

#define pb     push_back
#define endl    '\n'
#define pll    pair<int,int>
#define vll    vector<int>
#define all(a) (a).begin(),(a).end()
#define x       first
#define y      second
#define sz(x)  (int)x.size()
#define hell   1000000007
#define lbnd   lower_bound
#define ubnd   upper_bound
#define bs     binary_search
#define mi     map<int,int>
#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie

struct student
{
    int roll;
    string name;
    float marks;
    
    bool operator <(const student& rhs) const{
        return marks < rhs.marks;
    }
};

void print_student(student p)
{
    cout<<p.name<<" "<<p.roll<<" "<<p.marks<<'\n';
    
}
int main()

{
    
    //string s[3]={"A","B","C"};
    
    //int marks[3]={10,2,90};
    
   // pair<int,char> p[3];//pair<int,strings> p[3];
    //p[0]={10,'A'};//p[0]={10,"A"};//or you can write-p[0]=makepair(10,'A');
    //p[1]={2,'B'};//p[1]={2,"B"};
    //p[2]={90,'c'};//p[2]={90,"c"};
    
    //sort(p,p+3);
    
    //for(int i=0;i<3;i++)
    //{
      //  cout<<p[i].second<<" "<<p[i].first<<'\n';
    //}
    //pair<pair<int,int>,pair<int,int> > p;
    //p.first.first;
    //p.first.seccond;
    //p.second.first;
    //p.second.second;
    student a[3]={{1,"d",3445},{2,"erv",457},{4,"tev",65}};
    
    
    for(int i=0;i<3;i++)
    {
        print_student(a[i]);
    }
    
    cout<<'\n';
    cout<<"After sorting-"<<'\n';
    cout<<'\n';
    
    sort(a,a+3);
    for(int i=0;i<3;i++)
    {
        print_student(a[i]);
    }
    
    return 0;
}
