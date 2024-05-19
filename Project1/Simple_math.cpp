#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(void) {

	srand((unsigned) time(NULL));
	// To generate random integer from 1 to 100
	int a = (rand() % 99 +1);
	int b = (rand() % 99 + 1);

	cout << "please enter an operator like : + - * / %" << endl;
	char cr=' ';
	cin >> cr;
	cout << a << cr << b << " is :" << endl;

	cout << "please enter your answer:" << endl;

	int ans=0;
	cin >> ans;
	cout << a << cr << b << " is :"<< endl;
	

	switch(cr) {
	case '+' : cout << a + b << endl;
		break;
	case '*': cout << a * b << endl;
		break;
	case '-': cout << a - b << endl;
		break;
	case '/': cout << a / b << endl;
		break;
	case '%': cout << a % b << endl;
		break;
	}

	return 0;
}