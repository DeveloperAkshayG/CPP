
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1;
    if(v1.empty()) //empty() to check if vector has elements or not
    {
        cout << "vector is empty"<<endl;
    }
    else
    {
        cout << "vector is not empty"<<endl;
    }
    return 0;
}
