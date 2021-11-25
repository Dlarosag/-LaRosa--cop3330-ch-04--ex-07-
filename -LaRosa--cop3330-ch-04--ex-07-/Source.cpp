/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 David La Rosa
 */
using namespace std;

#include <iostream>

/*Calculator that takes 2 single digits (numerical or spelled values) and perform basic operations*/

///Converts string to int
int getNum(string str) {

	if (str == "one")
		return 1;

	if (str == "two")
		return 2;

	if (str == "three")
		return 3;

	if (str == "four")
		return 4;

	if (str == "five")
		return 5;

	if (str == "six")
		return 6;

	if (str == "seven")
		return 7;

	if (str == "eight")
		return 8;

	if (str == "nine")
		return 9;

	return -1;
}

///Checks if string is a operator
int isOperan(string str) {

	if (str == "+")
		return 1;

	if (str == "-")
		return 1;

	if (str == "*")
		return 1;

	if (str == "/")
		return 1;
	
	return 0;
}

int main(){

	string operan, numStr1, numStr2;

	int num1 = -1, num2 = -1;

	cout << "Insert or spell out 2 single-digit Number followed by the operation type: ";

	cin >> numStr1;

	cin >> numStr2;

	cin >> operan;

	while (num1 == -1 || num2 == -1 || isOperan(operan) != 1) {

		//Transform string into int
		if (numStr1.length() == 1) {

			num1 = numStr1[0] - '0';

			if (num1 > 9)
				num1 = -1;
		}

		else
			num1 = getNum(numStr1);

		if (numStr2.length() == 1) {

			num2 = numStr2[0] - '0';

			if (num2 > 9)
				num2 = -1;
		}

		else
			num2 = getNum(numStr1);

		///Checks and get input again if necessary
		if (num1 == -1 || num2 == -1 || isOperan(operan) != 1) {

			cout << "Invalid Input\n\n";

			cout << "Insert or spell out 2 single-digit Number followed by the operation type: ";

			cin >> numStr1;
			cin >> numStr2;
			cin >> operan;
		}
	}


	//Perform operation
	if (operan == "+")
		cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;

	if (operan == "-")
		cout << "The result of substracting " << num2 << " to " << num1 << " is " << num1 - num2;

	if (operan == "*")
		cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2;

	if (operan == "/")
		cout << "The divison of " << num1 << " by " << num2 << " is " << num1 / num2;
}