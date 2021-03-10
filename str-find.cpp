#include<iostream>  
using namespace std;  
int main()  
{  
    string str="This is an object oriented programming language";  
    string key="language";  
    int i=str.rfind(key);  
    cout<<i;  
    return 0;  
}