
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{12,3,4,5,6,67,8};
    cout << "the size of vector is "<<v.size(); //to find the size of vector we use size() method
    cout<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    v.clear();//to clear the vector elements
    cout<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
