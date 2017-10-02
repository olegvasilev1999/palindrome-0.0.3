# palindrome-0.0.3

#include "stdafx.h"
#include "iostream"
#include "string"
#include "cctype"

using namespace std;


int main()
{
	string a, b,c;
	char n[100],h;
	int i, j;

	cin.getline(n, 100);

	for (i = 0; i < strlen(n); i++) {

		if (isupper(n[i])) n[i]=tolower(n[i]);
		if (ispunct(n[i])) n[i] = ' ';
		if (islower(n[i])) a += n[i];
	}
	
	b = a;

	for (i = 0, j = a.length() - 1; j > i; i++, j--) {
		h = a[i];
		a[i] = a[j];
		a[j] = h;
	}

	if (a == b) cout << "1" << endl;
	else cout << "0" << endl;
	
	metka :

	system("pause");
	return 0;
}

