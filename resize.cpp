// C++ code to demonstrate the working of 
// resize()

#include<iostream> 
#include<string> // for string class 
using namespace std; 
int main() 
{ 
	// Initializing string 
	string str = "MAHATMA GANDHI WAS GREAT"; 

	// Displaying string 
	cout << "The initial string is : "; 
	cout << str << endl; 

	// Resizing string using resize() 
	str.resize(13); 

	// Displaying string 
	cout << "The string after resize operation is : "; 
	cout << str << endl; 

	

	return 0; 

} 
