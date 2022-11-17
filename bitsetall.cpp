
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4>b1;
    bitset<4>mask("1111");
    if(b1.all()) //all() is used to check whether all bits are set or not
    {
        cout<<"all bits are set" << endl;
    }
    else
    {
        cout<<"no bits are set" << endl;
    }
    b1 |= mask;
    if(b1.all())
    cout << "all bits are set" << endl;
    return 0;
}
