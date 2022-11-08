#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector <int> v1; // syntax for vector declaration is vector <data type name> vector_object
   vector <int> :: iterator itr1; //syntax for iterator declaration
   v1.push_back(21); //pre-defined function to insert element to vector
   v1.push_back(30);
   v1.push_back(40);
   v1.push_back(50);
   for(itr1=v1.begin();itr1!=v1.end();itr1++)
   {
       cout << *itr1 << endl;
   }
    return 0;
}