
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{6,7,8,9,10};
    v1.insert(v1.begin()+1,12);  //to insert at specified pos after first element
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout << '\n';
    v1.insert(v1.begin()+2,2,24); //to insert element for n number of time syntax is insert(iterator,n,val)
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}
