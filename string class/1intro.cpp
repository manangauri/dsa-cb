#include<iostream>
#include<string>
using namespace std;
int main() {
	string str; // string declr
	str = "coding"; // string assignment
	cout << str << endl;
	string str2 = "coding blocks";
	cout << str2 << endl;
	string str3 = "hell";
	cout << "str3 = " << str3 << endl;
	str3.push_back('o');//add this character to the string
	str3.push_back('w');// add one more char
	cout << "str3 = " << str3 << endl;
	str3.pop_back();// removes the last char from the string
	cout << "str3 = " << str3 << endl;
	return 0;
}