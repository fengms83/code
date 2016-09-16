#include <stdio.h>
#include <assert.h>

int max(int a, int b)
{
	return ((a) > (b)) ? (a) : (b);
}

int max3(int a, int b, int c)
{
	return max(max(a, b), c);
}

/******************************************************************************/
/* 描    述：最大子序列问题（max sub-sequence problem）算法实现1：分治法      */
/* 输入参数：                                                                 */
/*           seq - 输入数组                                                   */
/*           len   - 输入数组长度                                             */
/* 返 回 值：最大子序列的和                                                   */
/* 创 建 人：冯茂盛                                                           */
/* 创建日期：2016-07-04                                                       */
/******************************************************************************/
static int max_sub_sum(int* seq, int left, int right)
{
	int i;

	int center = (left + right)/2;

	int max_left;
	int max_right;

	int left_border_sum = 0;
	int left_border_max = 0;

	int right_border_sum = 0;
	int right_border_max = 0;

	if (left == right)
	{
		return seq[left] > 0 ? seq[left] : 0;
	}

	/* 计算左边最大值 */
	max_left = max_sub_sum(seq, left, center);
	

	/* 计算右边最大值 */
	max_right = max_sub_sum(seq, center+1, right);
	

	/* 计算从中间位置开始最大值 */
	for (i = center; i >= left; --i)
	{
		left_border_sum += seq[i];
		if (left_border_max < left_border_sum)
		{
			left_border_max = left_border_sum;
		}
	}

	for (i = center+1; i <= right; ++i)
	{
		right_border_sum += seq[i];
		if (right_border_max < right_border_sum)
		{
			right_border_max = right_border_sum;
		}
	}

	return max3(max_left, max_right,
				left_border_max + right_border_max);
}

int max_sub_seq(int* seq, int len)
{
	return max_sub_sum(seq, 0, len-1);
}

void test_cases()
{
	int seq[] = {-2, 11, -4, 13, -5, -2};
	int len = sizeof(seq) / sizeof(seq[0]);
	assert(20 == max_sub_seq(seq, len));
}

int main(int argc, char const *argv[])
{
	test_cases();
	printf("All Test Cases Passed!\n");
	return 0;
}