#include <iostream>
//#include "string"
using namespace std;
int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 7-i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}


	
		/*cout << "please enter your name";
		string name;
		cin >> name ;
		// first line 
		 string firstLine(name.size,'*');
		cout << firstLine << "\n" ;
		*/
/*
	// ex 1 slide 
	for (int i = 0; i < 7; i++)
	{
		for (int j = 7-i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
*/
/*
	for (int i = 1; i < 6; i++)
	{
		for (int k = 1; k < i; ++k) // =
		{
			cout << k; 
		}
		  
		for (int j = 6-i; j > 1; j--)
		{
			cout << "*" ;
		}
		cout << endl;
	}
*/