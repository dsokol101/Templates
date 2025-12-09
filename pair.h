#pragma once
#include <iostream>
#include <utility>
/** A class template is a class that receives one or more datatypes
 * as parameters to the class. It's really a blueprint for creating classes.
 *
 * A struct is like a class, except that its members are public by default.
 */
template <typename T1, typename T2>
struct pair
{
    T1 first;
    T2 second;

    pair() {}
    pair(const T1 &a, const T2 &b) : first(a), second(b) {}
    pair(const pair &p) : first(p.first), second(p.second) {}
    pair(pair &&p) : first(std::move(p.first)), second(std::move(p.second)) {}
};
// this is called a factory function
template <typename T1, typename T2>
pair<T1, T2> make_pair(const T1 &x, const T2 &y)
{
    return pair<T1, T2>(x, y); // constructor called to create a pair object
                               // then copy (or move) constructor is called to copy the object to the return value
}
template <typename T1, typename T2>
void print_pair(const pair<T1, T2> &p)
{
    std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
}