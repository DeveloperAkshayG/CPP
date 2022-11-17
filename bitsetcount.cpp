
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4>b("1110");
    bitset<6>b1("100000");
    cout << b << " has" << ' ' << b.count() << " bits set" <<endl;
    cout << b1 << " has" << ' ' << b1.count() << " bits set" << endl;
    return 0;
}
