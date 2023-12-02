#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float basic, ta,da,gs;
    basic=10000; ta=800; da=5000;
    gs=basic+ta+da;
    cout<<setw(10)<<"Basic"<<setw(10)<<basic<<endl
        <<setw(10)<<"TA"<<setw(10)<<ta<<endl
        <<setw(10)<<"DA"<<setw(10)<<da<<endl
        <<setw(10)<<"GS"<<setw(10)<<gs<<endl;
    return 0;
}
