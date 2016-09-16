#include <stdio.h>
#include <assert.h>

#define MAX_LEN 1024

/******************************************************************************/
/* 描    述：二分查找（binary search problem）算法实现1：分治法               */
/* 输入参数：                                                                 */
/*           seq   - 输入数组                                                 */
/*           left  - 数组左下标                                               */
/*           right - 数组右下标                                               */
/*           val   - 待查找的值                                               */
/* 返 回 值：若查找成功，返回待查找值的下标                                   */
/*           若查找失败，返回-1                                               */
/* 创 建 人：冯茂盛                                                           */
/* 创建日期：2016-07-05                                                       */
/******************************************************************************/
int binary_search(int* seq, int left, int right, int val)
{
	int center = (left+right) / 2;
	int ret_val = 0;

	if (left > right)
	{
		return -1;
	}

	if ((left == right) && (seq[left] != val))
	{
		return -1;
	}

	if (seq[center] == val)
	{
		return center;
	}

	if (seq[center] < val)
	{
		return binary_search(seq, center+1, right, val);
	}

	if (seq[center] > val)
	{
		return binary_search(seq, left, center-1, val);
	}
}

int binary_search2(int* seq, int left, int right, int val)
{
	int center;

	while(left <= right)
	{
		center = (left+right) / 2;
		if (seq[center] > val)
		{
			right = center-1;
		}
		else if (seq[center] < val)
		{
			left = center+1;
		}
		else if (seq[center] == val)
		{
			return center;
		}
	}

	return -1;
}

void test_cases()
{
	int seq[] = {1,2,3,4,5,6};
	int len = sizeof(seq) / sizeof(seq[0]);

	assert(2 == binary_search(seq, 0, len-1, 3));
	assert(3 == binary_search(seq, 0, len-1, 4));
	assert(-1 == binary_search(seq, 0, len-1, 0));

	assert(2 == binary_search2(seq, 0, len-1, 3));
	assert(3 == binary_search2(seq, 0, len-1, 4));
	assert(-1 == binary_search2(seq, 0, len-1, 0));
}

int main(int argc, char const *argv[])
{
	test_cases();
	printf("All Test Cases Passed!\n");
	return 0;
}