
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5,6,7};
    v1.erase(v1.begin()+2); //to delete at specified position
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<'\n';
    v1.erase(v1.begin()+2,v1.begin()+4); //to delete in range
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<'\n';
    return 0;
}
