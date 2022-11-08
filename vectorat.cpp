
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v1{1,2,3,4,5};
    for(int i=0;i<v1.size();i++)
    {
        cout << v1.at(i) << endl; //specifying the use of at() method of vector
    }
    return 0;
}
