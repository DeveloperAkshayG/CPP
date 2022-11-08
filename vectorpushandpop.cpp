
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v1{1,2,3,4,5};
    cout << "before pushing element are:";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<< " ";
    }
    cout << '\n';
    v1.push_back(6);
    v1.push_back(7);
    cout << "after push_back element are:";
    for(int i=0;i<v1.size();i++)
    {
        cout <<v1[i]<< " ";
    }
    cout << '\n';
    v1.pop_back();
    cout << "after pop_back element are:";
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i]<<" ";
    }
    return 0;
}
