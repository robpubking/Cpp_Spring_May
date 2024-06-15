#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int Max_Sequence_Sum(vector<int> nums);

int main(void)
{
	vector<int> arr = { -2,1,-3,4,-1,2,1,-5,4 };

	int n = Max_Sequence_Sum(arr);

	cout << "n is : " << n << endl;

	return 0;


}

int Max_Sequence_Sum(vector<int> nums) 
{
	int max_sum = nums[0];
	int sub_sum = 0;
	for (int x : nums ) 
	{  
		sub_sum = max(sub_sum + x, x);
		max_sum = max(sub_sum, max_sum);
	}

	return max_sum;
}