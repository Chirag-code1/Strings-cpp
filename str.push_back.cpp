#include<iostream> 
#include<string> 
using namespace std; 
int main() 
{ 
	string str; 

	getline(cin,str); 

	// Displaying string 
	cout << "The initial string is : "; //entered string is "Chirag".
	cout << str << endl; 

	// Using push_back() to insert a character 
	// at end 
	// pushes 's' in this case 
	str.push_back('K'); 
	cout << "The string after push_back operation is : "; 
	cout << str << endl; 

	return 0; 

} 
