//Note:-> Don't forget to include "#include <cstring>"

#include <iostream>  
#include <cstring>  
using namespace std;  
int main()  
{  
    char s1[25], s2[25];  
    cout << "Enter the s1 string: ";  
    cin.getline(s1, 25);  
    cout << "Enter the s2 string: ";  
     cin.getline(s2, 25);  
    strcat(s1, s2);   
    cout << "S1 = " << s1 << endl;  
    cout << "S2 = " << s2<<endl;  
    return 0;  
} //revised.
