#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;
int main()
{
	string theLine;
	string arr[26];
	getline (cin,theLine);
	cout << '\n' ;
	// remove white spaces
	//remove_if(theLine.begin(), theLine.end(), isspace);
	//cout <<  theLine << endl << endl;
	theLine.erase(remove_if(theLine.begin(), theLine.end(), isspace), theLine.end());
	cout <<  theLine << endl << endl;
	// http://stackoverflow.com/questions/83439/remove-spaces-from-stdstring-in-c
	transform(theLine.begin(), theLine.end(), theLine.begin(), ::tolower);
	cout << theLine << endl ;

	for (int i = 0; i< theLine.length();i++)
		{
			int k=0; // flag to the index array as many elemnts would be empty if we use "i" 
			bool flag= true;
			for (int j = 0; j < 26; j++)
			{
				if (theLine.substr(i,1)== arr[j])
					{flag = false;
					 break;}
			}
			if (flag)
			{
				arr[k] = theLine.substr(i,1);
				k++;
			}	
		}
	if (arr[25].empty() )
	{
		cout << "done"<< endl;
	}
	else cout << "nope" << endl;
}

/*
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


		//********* take the input from the user
		//cin >> name;
		//cout << name << endl;

		getline(cin,name);
		int i = name.length();
		cout << name << "  " << i <<endl;
		
		// **** substring and find functions 
		string str="We think in generalities, but we live in details.";		// (quoting Alfred N. Whitehead)

		string str2 = str.substr (3,5);			   // "think"

		string str3 = str.substr (3);        // from "think" to the end
		
		int pos = str.find("live");      // position of "live" in str

		string str4= str.substr (pos);     // get from "live" to the end

		  std::cout << str2 << '\n' << str4 << '\n';

		// initials 
		  cout << "Please enter your full name (first middle last): ";

		 string first;

		string middle;

		string last;

		cin >> first >> middle >> last;

		string initials = first.substr(0, 1) + middle.substr(0, 1) + last.substr(0, 1);

		cout << "Your initials are " << initials << "\n";
		/*

		
		/*
	for (int i = 0; i < 7; i++)
	{
		for (int j = 7-i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	
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