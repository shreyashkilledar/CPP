#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout<<"You have entered "<<argc<<endl<<"arguments:\n";
 
    for (int i = 0; i < argc; i++) {
        cout<<argv[i];
        cout<<"r";
    }

}
