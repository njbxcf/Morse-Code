/*


Your system should be able to decode a message using the morse tree that you
built. For example, decoding (symbols don't copy over) results in “dg”. The problem text briefly explains how you
can do that. Notice that between the symbols (dots and dashes) is a space. The space is a
delimiter that separates the codes for letters.

Your system should also encode a message. For example, encoding “ac” results in

You may use a binary search tree or a map to store the codes for letters.
---------------------------------------------
Plan 
Main will ask the user if they want to imput morse code or convert to morse code
Tree Header will build the morse tree = Write a function that builds the morse tree shown in the figure above. The
information of the tree (the letters and the codes) is stored in a file.

*/

#include <iostream>

using namespace std;

void main()

{
	//cin.get() morse.txt file

	int userinput;
	cout << "Please indicat if you would like to: \n" << "A. Morse Code into English Alphabet" << "\n 2.English Alphabet into Morse Code.";
	cin >> userinput;

	switch (userinput)
	{
	case 1:
			//call function for morse code into english Alphabet
			break;
	case 2:
		//call function for English Alphabet into Morse Code
		break;
	}
	


}