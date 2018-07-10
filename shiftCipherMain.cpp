#include <iostream>
using namespace std;
#include <string>

char rotateChar(char myChar, int rotateNum) {
	if (myChar >= 48 && myChar <= 57) {
		myChar -= 3;
		myChar += (rotateNum % 10);
		if (myChar > 57) {
			myChar -= 10;
		}
		if (myChar < 48) {
			myChar += 10;
		}
	}
	else if (myChar >= 65 && myChar <= 90) {
		myChar += (rotateNum % 26);
		if (myChar > 90) {
			myChar -= 26;
		}
		if (myChar < 65) {
			myChar += 26;
		}
	}
	else if (myChar >= 97 && myChar <= 122) {
		if (myChar + (rotateNum % 26) > 122) {
			myChar += (rotateNum % 26) - 26;
		}
		else {
			myChar += (rotateNum % 26);
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

	for (int i = 0; i < mystring.length(); i++) {
		cout << rotateChar(mystring[i], rotateNum);
	}
	cout << endl;

	system("pause");
	return 0;
}
