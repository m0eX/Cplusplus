#include <iostream>
#include <string>
using namespace std;
//	CREATED BY
//	ZVONIMIR PALAC
void main()
{
	string text;
	cout << "Insert text you want to reverse: ";
	getline(cin, text);
	cout << "Reversed text: ";
	for (int i = text.length() - 1; i >= 0; i--)
	{
		cout << text[i];
	}
	cout << endl;
	system("pause");
}