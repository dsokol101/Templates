// std::pair example
// and map example (sorted associative container) using [key,value] pair
#include <utility>  // std::pair, std::make_pair
#include <string>   // std::string
#include <iostream> // std::cout
#include <map>      // std::map
#include <vector>   // std::vector

using namespace std;

int main()
{
    // uses std::pair
    pair<string, double> product1;                   // default constructor
    pair<string, double> product2("tomatoes", 2.30); // value init
    pair<string, double> product3(product2);         // copy constructor

    product1 = make_pair(string("lightbulbs"), 0.99); // using make_pair (move) 
    product2.first = "shoes"; // the type of first is string
    product2.second = 39.90;  // the type of second is double

    cout << "The price of " << product1.first << " is $" << product1.second << '\n';
    cout << "The price of " << product2.first << " is $" << product2.second << '\n';
    cout << "The price of " << product3.first << " is $" << product3.second << '\n';
    /************************************* 
     * introduction to map data structure in C++ STL
     * A map is a sorted associative container that contains key-value pairs with unique keys.
    */
    map<string, vector<int>> mymap;
    mymap["Alice"] = {90, 87, 95};
    mymap["Bob"] = {85, 80, 88};
    mymap["Charlie"] = {78, 82, 80};
    cout << "all scores:" << endl;
    // print entire map using range based for loop
    for (const auto &[name, scores] : mymap)
    {
        cout << name << ": ";
        for (const auto &score : scores)
        {
            cout << score << " ";
        }
        cout << endl;
    }
    mymap["Aa"] = {90, 87, 95};
    // print entire map using iterator
    cout << "all scores using iterator:" << endl;
    for (auto it = mymap.begin(); it != mymap.end(); ++it) {
        cout << it->first << ": ";
        for (const auto &score : it->second)
        {
            cout << score << " ";
        }
        cout << endl;   
    }
        return 0;
}
