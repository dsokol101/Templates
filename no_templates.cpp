/** When the difference between functions is ONLY the data type,
 *  you want to define a function template where the data type
 * becomes a parameter to the function
 * and the compiler will instantiate copies of the function for
 * each data type that your program needs.
 */
 #include <iostream>
 #include <string>
 using namespace std;
 
 int add(int x, int y) {
     return x+y;
 }
 
 double add(double x, double y) {
     return x+y;
 }
 
 string add(string x, string y) {
     return x+y;
 }
 
 int main() {
     cout << "no templates are used in the first version" << endl;
     int num1=2, num2=3;
     cout << "add num1 and num2: " << add(num1, num2) << endl;
     double d1=1.1, d2=2.2;
     cout << "add d1 and d2: " << add(d1, d2) << endl;
     string s1{"Hello"}, s2{" World!"};
     cout << "add s1 and s2: " << add(s1, s2) << endl;
     return 0;
 }