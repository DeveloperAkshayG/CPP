
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{1,2,4,5,7,6,9};
    v.resize(10,10); //to resize the size of vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
    v.resize(5); //to resize the size of vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
