#ifndef LAB2_H // Include guard to prevent multiple inclusions
#define LAB2_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
void print(const vector<T>& vec, string filename)  {
    cout << "vector in print function: " << endl;
    for (auto it=vec.begin(); it<vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}
template <typename T>
void load(vector<T>& myvec, string filename) 
{
    ifstream file(filename);
    
    if (!file.is_open())
    {
        cerr << "Error opening file: " << filename << endl;
        exit(EXIT_FAILURE);
    }
    while (!file.eof())
    {
        T temp;
        file >> temp;
        myvec.push_back(temp);
    }
    file.close();
}
/* sorts the elements in the vector names */
template <typename E>
void sort_vec(vector<E>& vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] > vec[j])
            {
                swap(vec[i], vec[j]);
            }
        }
    }
}

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


#endif