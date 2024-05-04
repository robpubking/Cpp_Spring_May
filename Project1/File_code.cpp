// This program tried to print the content of a text to screen


#include <stdio.h>

int main(void) {

	FILE *fp = fopen("C:\\Users\\maybl\\Desktop\\test.txt","r");
	if (!fp) {
	
		printf("File open failed!");
	
	}
	else {
		
		char c;
		while (!feof(fp)) 
		{
			c = fgetc(fp);
			printf("%c", c);
		
		}

		fclose(fp);
	
	}
	

	return 0;

}

