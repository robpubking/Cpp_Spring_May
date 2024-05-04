/*** This project used to test malloc functions */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * print_hello();
char * print_hello_malloc();
int main(void) {
 
	printf("I am ready to call the print_hello function\n");
	char * ps = print_hello();
	// printf("ps is %s\n", ps);
	printf("I am ready to call the print_hello_malloc function\n");
	char *mps = print_hello_malloc();
	printf("mps is %s\n", mps);
	free(mps);
	printf("mps is %s\n", mps);



}


char * print_hello() {
	char p[20] = "hello world";
	printf("p is %s\n", p);
	return p;
}

char * print_hello_malloc() {
	char *mp = (char *)malloc(100);
	strcpy(mp, "hello world");
	printf("mp is %s\n", mp);

	return mp;
}




