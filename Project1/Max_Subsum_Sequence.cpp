#include <stdio.h>
#include <iostream>
#include<vector>

using namespace std;

int max_sub(int arr[], int len);
int result = 0;
int main(void) 
{

	int arr[9] = { -2,1,-3,4,-1,2,1,-5,4 };

	int n = max_sub(arr, 9);

	cout << "n is : " << n << endl;

	return 0;
}


int get_bigger(int a, int b) {

	if (a > b) {
	
		return a;
	}
	else {
	
		return b;
	}
}

int max_sub(int arr[], int len) {

	vector<int> max_list;
	int max_sum = arr[0];
	int temp = 0;
	bool temp_changed = false;
	for (int i = 1; i < len; i++){

		if (max_sum > 0)
		{
			if (arr[i] > 0)
			{
			 max_sum += arr[i];

			}else if(max_sum + arr[i] >0){

			 temp_changed = true;
			 temp = get_bigger(temp, max_sum);
			 max_sum += arr[i];
					
			}else {

			 temp_changed = true;
			 temp = get_bigger(temp, max_sum);
			 max_sum = 0;
			}

		}else {
		
			max_sum = get_bigger(max_sum, arr[i]);
		}
		
		}

	   result = temp_changed ? get_bigger(max_sum, temp) : max_sum;

	   return result;
}