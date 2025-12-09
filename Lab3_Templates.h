#ifndef LAB3_H 
#define LAB3_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdlib>

// swap_vals template function to be used in the sort_vec function
template <typename T>
void swap_vals(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void print(const std::vector<T>& vec)  {
    //cout << "vector in print function: " << endl;
    for (auto it=vec.begin(); it<vec.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void load(std::vector<T>& myvec, std::string filename) 
{
    std::ifstream file(filename);
    
    if (!file.is_open())
    {
        std::cerr << "Error opening file: " << filename << std::endl;
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
void sort_vec(std::vector<E>& vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] > vec[j])
            {
                swap_vals(vec[i], vec[j]);
            }
        }
    }
}

#endif