
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4>b("0000");
    bitset<5>b1("10100");
    if(b.none()) //none() is used to check whether no bit is set 
        cout << b << " has no bit set" << endl;
    else
        cout << b << " has " << ' ' << b.count() << "bit set" << endl;
    if(b1.none())
        cout << b1 << "has no bit set" << endl;
    else
        cout << b1 << " has " << ' ' << b1.count() << "bit set" << endl;
    return 0;
}
