
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4>b("1110");
    bitset<6>b1("100000");
    cout << b << " after flipping" << ' ' << b.flip() <<endl; //flip() to toggle the particular value in bitset
    cout << b1 << " after flipping 3 bit " << ' ' << b1.flip(3) << endl;
    return 0;
}
