#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
 
int main()
{
    std::vector< std::string > StringVector;
    std::vector< std::string >::const_iterator i;
 
    // Pushing string elements in Container
    StringVector.push_back("Python");
    StringVector.push_back("Java");
    StringVector.push_back("Haskell");
    StringVector.push_back("C++");
    StringVector.push_back("Ruby");
    StringVector.push_back("JavaScript");
    // Sorting container strings lexicographically
    sort(StringVector.begin(), StringVector.end());
    std::cout << "Sorted List of Programming Languages"
        << std::endl;
    // Printing sorted container elements
    for (i = StringVector.begin(); i != StringVector.end(); i++)
        std::cout << *i << "  ";
    std::cout << std::endl;
    return 0;
}
