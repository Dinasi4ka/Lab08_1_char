// Lab08_1_char.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* s, const char* cs) 
{
	int k = 0,
		pos = 0; 
	char* t;
	while (t = strpbrk(s + pos, cs))
	{
		pos = t - s + 1;
			k++;
	}
	return k;
}
char* Change(char* s) 
{

	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	
	*t = 0;
	while ((p = strchr(s + pos1, '+')) || (p = strchr(s + pos1, '-')) || (p =
		strchr(s + pos1, '=')))
	{
			pos2 = p - s + 1; 
			strncat_s(t,101, s + pos1, pos2 - pos1 - 1);
			strcat_s(t,101, "**");
			pos1 = pos2;
	}
	strcat_s(t,101, s + pos1);
	strcpy_s(s,101, t);
	return t;
}
int main()
{
	char str[101];
	char cs[] = "'+','-','='";

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "String contained " << Count(str, cs) << " symbols of '+ - ='" << endl;

	char* dest = new char[151];
	size_t len = strlen(str);
    dest = Change(str);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
   
}
