
#include<iostream> 
#include<string> // for string class 
using namespace std; 
int main() 
{ 
	// Declaring string 
	string str; 
	getline(cin,str); 

	// Displaying string 
	cout << "The initial string is : "; 
	cout << str << endl; 



	// Using pop_back() to delete a character 
	// from end 
	str.pop_back(); 

	// Displaying string 
	cout << "The string after pop_back operation is : "; 
	cout << str << endl; 

	return 0; 
} 
