#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<char> v;  
    v.push_back('j');  
    v.push_back('a');  
    v.push_back('v');  
    v.push_back('a');  
    for(int i=0;i<v.size();i++)  
    cout<<v[i];
	v.pop_back();  
     for(int i=0;i<v.size();i++)  
    cout<<v[i];
}  
