#include <iostream>
#include <string>
using namespace std;
int main()
{
	// size of datatypes
	cout << sizeof(char)<<endl ;
	cout << sizeof(int)<<endl;
	
	// range of integer and overfolw
	int a = 2147483647;
	cout << a << endl;
	int b = 2147483650;
	cout << b << endl;
	
	//Strings
	
	string name = "mohamed";
	cout << name << endl;


		// take the input from the user
		//cin >> name;
		//cout << name << endl;

		getline(cin,name);
		int i = name.length();
		cout << name << "  " << i <<endl;
		

		string str="We think in generalities, but we live in details.";		// (quoting Alfred N. Whitehead)

		string str2 = str.substr (3,5);			   // "think"

		string str3 = str.substr (3);        // from "think" to the end
		
		int pos = str.find("live");      // position of "live" in str

		string str4= str.substr (pos);     // get from "live" to the end

		  std::cout << str2 << '\n' << str4 << '\n';

		/*
	for (int i = 0; i < 7; i++)
	{
		for (int j = 7-i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}*/
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