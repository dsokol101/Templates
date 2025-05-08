/** When the difference between functions is ONLY the data type,
 *  you want to define a function template where the data type
 * becomes a parameter to the function
 * and the compiler will instantiate copies of the function for
 * each data type that your program needs.
 */
 #include <iostream>
 #include <string>
 #include <vector>
 using namespace std;
 
 template <typename T>
 T add(T x, T y) {
     return x+y;
 }
 template <typename T>
 T maxOf2(T x, T y) {
     return x>y? x : y;
 }
 
 int main() {
     cout << "This is V2 with a funtion template: " << endl;
     int num1=2, num2=3;
     cout << "add num1 and num2: " << add(num1, num2) << endl;
     double d1=1.1, d2=2.2;
     cout << "add d1 and d2: " << add(d1, d2) << endl;
     string s1{"Hello"}, s2{" World!"};
     cout << "add s1 and s2: " << add(s1, s2) << endl;
 
     vector<int> v1{3,4}, v2{1,2};
     // v1 = v1+v2; no operater+ for vector operands
     // v1 = add(v1, v2); when you compile you will see: no operater+ for vector operands
     vector<int> maxVec = maxOf2(v1, v2);
     cout << "max vector: " << endl;
     for (auto it=maxVec.begin(); it<maxVec.end(); it++) {
         cout << *it << " ";
     }
     cout << endl;
     return 0;
 }