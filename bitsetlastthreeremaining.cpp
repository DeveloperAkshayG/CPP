
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<8>b("10101010");
    cout << "b: " << b.to_string()<<endl; //to represent in string
//unsigned long long representationof bitset
    cout << "unsigned long long representation of b:" << b.to_ullong()<<endl;
//unsigned long representation of bitset
    cout << "unsigned long representation of b:" << b.to_ulong()<<endl;
    return 0;
}
