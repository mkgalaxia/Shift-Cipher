#include <iostream>
using namespace std;
#include <string>

//rotates uppercase and lowercase letters and numbers and leaves special characters
char rotateChar(char myChar, int rotateNum) {
	//rotates number characters
	if (myChar >= 48 && myChar <= 57) {
		myChar += (rotateNum % 10);
		//rolls around number if rotateNum is too big
		if (myChar > 57) {
			myChar -= 10;
		}
		if (myChar < 48) {
			myChar += 10;
		}
	}
	//rotates upper case letters
	else if (myChar >= 65 && myChar <= 90) {
		myChar += (rotateNum % 26);
		//rolls around upper case letters if rotateNum is to big
		if (myChar > 90) {
			myChar -= 26;
		}
		if (myChar < 65) {
			myChar += 26;
		}
	}
	//rotates lower case letters
	else if (myChar >= 97 && myChar <= 122) {
    		myChar += (rotateNum % 26);
		//rolls around lower case letters if rotateNum is too big
		if (myChar > 122) {
			myChar -= 26;
		}
		if (myChar < 97) {
			myChar += 26;
		}
	}

	return myChar;
}

int main() {
	string mystring;
	int rotateNum;

	cout << "Please insert your message." << endl;
	getline (cin, mystring);
	cout << "Please insert the number you would like to offset your message." << endl;
	cin >> rotateNum;

	//rotates each char with rotateChar and prints
	for (int i = 0; i < mystring.length(); i++) {
		cout << rotateChar(mystring[i], rotateNum);
	}
	cout << endl;

	system("pause");
	return 0;
}
