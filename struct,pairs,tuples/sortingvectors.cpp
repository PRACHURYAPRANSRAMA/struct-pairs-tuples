//#include <iostream>

//using namespace std;

//int main()

//{
  //  vector<int> v={1,3,2,6,24,7,4,9,2,5,3,65,443,3,6,98,2,1,0,34};
    //sort(v.begin(),v.end());
    
//}
// C++ program to sort a vector in non-decreasing
// order.
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
int main()
{
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
  
    sort(v.begin(), v.end());
  
    cout << "Sorted \n";
    for (auto x : v)
        cout << x << " ";
  
    return 0;
}
