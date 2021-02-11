// C++ program to demonstrate functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will
    // be of double type
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["string 1"] = 10;
    umap["Practice"] = 20;
    umap["string 2"] = 30;

    // Traversing an unordered map
    for (auto x : umap)
        cout << x.first << " " << x.second << endl;
}