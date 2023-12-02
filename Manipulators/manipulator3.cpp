#include<iostream>
using namespace std;
#include<string.h>
#include <sstream>
#include <string>
 
int main()
{
    istringstream str("           Programmer");
    string line;
   
    getline(str >> std::ws, line);
 
   
    cout << line << endl;
 
  
    cout << "only a test" << flush;
 
    
    cout << "\na";
 
    
    cout << "b" << ends;
    cout << "c" << endl;
 
    return 0;
}
