#include <stdio.h>
#include <string.h>




int main(void) {
	char str[1001];
	int count[26] = {};
	scanf("%s", str);
	int len = strlen(str);
	printf("len is %d\n", len);

	for (int i = 0; i < len; i++)
	{
		count[str[i] - 'a' ]++;

	}
	for (int i = 0; i < 26; i++) 
	{

		if (count[i] > 0) 
		{
		
		printf("%c is counts: %d\n", 'a' + i, count[i]);
		}
		


	}



}