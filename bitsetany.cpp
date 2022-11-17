
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4>b("1100");
    bitset<6>b1("000000");
    if(b.any()) //any() to check whether any single bit is set
    cout<<b<<"has minimum one bit set" << endl;
    else
    cout << b << " has not bit set" << endl;
    if(b1.any()) 
    cout<<b1<<" has minimum one bit set" << endl;
    else
    cout << b1 << "has no bit set" << endl;
    return 0;
}
