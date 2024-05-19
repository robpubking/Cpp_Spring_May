#include <iostream>
using namespace std;

int main(void) {

	for (int i = 1; i < 10; i++) {
	  
		for (int j = 0; j < 9; j++) {
			if (j < 9 - i) {
				cout << " ";
			
			}
			else {
				cout << "* ";
			
			}
		
		}
		cout << endl;
	}

	return 0;
}
