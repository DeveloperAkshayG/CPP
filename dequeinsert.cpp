
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d{1,2,3};
    deque<int>d1{5,6,7};
    deque<int>::iterator itr1;
    d.insert(d.begin(),0); //insert at particular position
    for(itr1=d.begin();itr1!=d.end();itr1++)
    {
        cout<<*itr1<< " ";
    
    }
    cout<<"\n";
    cout<<"inserting at particular position for n times"<<endl;
    d.insert(d.begin()+4,2,4); //insert certain value at position for n number of times
    for(itr1=d.begin();itr1!=d.end();itr1++)
    {
        cout<<*itr1<< " ";
    
    }
    cout<<"\n";
    cout<<"inserting between the range of position provided"<<endl;
    d.insert(d.begin()+6,d1.begin(),d1.end());
    for(itr1=d.begin();itr1!=d.end();itr1++)
    {
        cout<<*itr1<< " ";
    
    }
    return 0;
}
