// Generics
// function templates
// When you overload functions, the compiler disambiguates which 
// function to call based on the number and types of arguments passed.
#include <iostream>
#include <string>
using namespace std;

template <typename T>
T sum(T a, T b)
{
    return a + b;
}   

int sum(int a, int b, int c)
{
    return a + b + c;
}   

int main()
{
    cout << "Sum of 3 and 5 is: " << sum<int>(3, 5) << endl; 
    string s1 = "hello, ";
    string s2 = "world";
    cout << "Sum of hello, world is: " << sum<string>(s1, s2) << endl;
    return 0;
}