#include <stdio.h>

void Solution1(int* nums, int numssize);
void Solution2(int* nums, int numssize);

void Solution3(int* nums, int numssize);

int main(void) 
{
	int nums[] = { 0, 1, 0, 3, 12,0,0,16,0,8 };
	Solution2(nums, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", nums[i]);

	}

}

void Solution1(int* nums, int numssize) {
	
	for (int i = numssize - 1; i >= 0; i--)
	{
		if (nums[i] == 0)
		{
		  int j = i;
		  for (; j < numssize - 1; j++) 
		  {			 
				if (nums[j + 1] != 0)
				{
					nums[j] = nums[j + 1];
				}else {
				  
					break;
				}
								
		  }
		  nums[j] = 0;

		}

	}

}


void Solution2(int* nums, int numssize)
{
	for (int i = numssize - 1; i >= 0; i--)
	{
		if(*(nums + i) == 0)
		{
			int j = i;
		    for (; j < numssize - 1; j++) {
			
				if (*(nums + j + 1) != 0)
				{
					*(nums + j) = *(nums + j + 1);
				}else {
					
					break;
				}

			}
			*(nums + j) = 0;
		}


	}
}

void Solution3(int* nums, int numsSize) 
{
	int numzero = 0;
	for (int i = 0; i < numsSize; i++)
	{
		
			if (nums[i] == 0)
			{
				numzero++;
				continue;
			}else{
				nums[i - numzero] = nums[i];
				if (numzero) {
					nums[i] = 0;
				}
			}

	}
}

