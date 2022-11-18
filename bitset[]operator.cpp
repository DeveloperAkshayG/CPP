
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<4>b;
    b[0]=1;
    b[1]=b[2]=0;
    b[3]=1;
    cout<<"using operator [] b:" << b << endl;
    return 0;
}
