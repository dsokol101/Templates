#include <fstream>
#include <iostream>
#include <cstdlib>
#include "Lab3_Templates.h"
using namespace std;

int main()
{
    string filename = "my_file.txt";

    // first use for a vector of strings
    vector<string> names;
    load(names, filename);
    cout << "Input names: " << endl;
    print(names);
    sort_vec(names);
    cout << "After sorting: " << endl;
    print(names);
 
    // now try for a vector of integers
    vector<int> numbers;
    filename = "my_numbers.txt";
    load(numbers, filename);
    cout << "Input numbers: " << endl;
    print(numbers);
    sort_vec(numbers);
    cout << "After sorting: " << endl;
    print(numbers);

    return 0;
}
/************************************************************************************** */