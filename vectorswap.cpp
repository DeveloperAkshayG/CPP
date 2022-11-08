
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v1{1,2,3,4,5};
    vector <int> v2{7,8,9,3,1};
    cout << "before swapping elements of v1:";
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << '\n';
    cout << "before swapping elements of v2:";
    for(int i=0;i<v2.size();i++)
    {
        cout << v2[i] << " ";
    }
    cout << '\n';
    v1.swap(v2); // to swap the elements of two vectors we use swap()
    cout << "after swapping elements of v1:";
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << '\n';
    cout << "after swapping elements of v2:";
    for(int i=0;i<v2.size();i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}
