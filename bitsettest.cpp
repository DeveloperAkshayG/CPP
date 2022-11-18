
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<8>b("10101010");
//to test whether bit at particular position is set or not we use test() function.1-true,0-false
    cout<<"status of bit is set at position 2 is : " << b.test(2) <<endl;
    cout<<"status of bit is set at position 2 is : " << b.test(3) <<endl;
    cout<<"status of bit is set at position 2 is : " << b.test(7) <<endl;
    return 0;
}
