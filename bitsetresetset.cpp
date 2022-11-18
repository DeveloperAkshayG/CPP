
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4>b("1000");
    bitset<4>b1("1100");
    
    cout<<"b:"<<b.reset()<<endl; //to reset all the bits
    cout<<"b1:"<<b1.reset(2)<<endl; // to reset only particular bit
    
    cout<<"first resetting and then setting b:"<<b.set()<<endl; //to set all the bits
    cout<<"first resetting and then setting b1:"<<b1.set(2)<<endl; //to set particular bit
    //to set the particular bit value according to our need
    cout<<"first resetting and then setting the bit value according to our need b1:"<<b.set(3,0)<<endl;
    return 0;
}
