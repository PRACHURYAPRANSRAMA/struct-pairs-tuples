#include<iomanip>
#include<tuple>
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
    
    bool operator <(const student& rhs) const {
        return marks< rhs.marks;
    }
    
};

void print_student(student p)
{
    cout<<p.name<<"--"<<p.marks<<"--"<<p.roll<<'\n';
}

int main()

{
    

    student p[3]={{1,"d",3445},{2,"erv",457},{4,"tev",65}};
    sort(p,p+3);
    //sorting vectors-
    //sort(v.begin(),v.end);
    //in sorting we have three condition the third one is operator i.e, to sort in increasing or decreasig order;by default this is in increasing.
    for(int i=0;i<3;i++)
    {
        print_student(p[i]);
    }
    
    tuple<int,char,int,float> b= {10,'d',23,0.34};
    
    //or we can code as b=make_tuple{3,'s',23.0.233};
    cout<<"Use of tuple"<<" "<<get<2>(b)<<'\n';
    cout<<'\n';
    
    int e,r;
    char o;
    float u;
    tie(e,o,r,u) = b;
    
    cout<<e<<" "<<r<<" "<<o<<" "<<u<<'\n';
    cout<<'\n';
    
    cout<<"NAMASTE WORLD"<<'\n';
    cout<<endl;
    
    
    return 0;
}


