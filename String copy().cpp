#include<iostream>  
using namespace std;  
int main()  
{  
string source = "GandhiJi was Great!";  
char destination[20];  
cout<<"source string is : "<<source<<'\n';  
source.copy(destination,sizeof source);   
cout<<"destination string is :"<<destination;  

return 0;  
} //revised.
