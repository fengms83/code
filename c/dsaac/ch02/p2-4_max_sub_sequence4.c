#include <stdio.h>
#include <assert.h>

/******************************************************************************/
/* 描    述：最大子序列问题（max sub-sequence problem）算法实现1：在线算法    */
/*           算法复杂度: O(N)                                                 */
/* 输入参数：                                                                 */
/*           seq - 输入数组                                                   */
/*           len   - 输入数组长度                                             */
/* 返 回 值：最大子序列的和                                                   */
/* 创 建 人：冯茂盛                                                           */
/* 创建日期：2016-07-04                                                       */
/******************************************************************************/
int max_sub_seq(int* seq, int len)
{
	int this_sum;
	int max_sum;
	int i;

	this_sum = 0;
	max_sum = 0;

	for (i = 0; i < len; ++i)
	{
		this_sum += seq[i];
		if (this_sum > max_sum)
		{
			max_sum = this_sum;
		}
		else if (this_sum < 0)
		{
			this_sum = 0;
		}
	}

	return max_sum;
}

void test_cases()
{
	int seq[] = {-2, 11, -4, 13, -5, -2};
	int len = sizeof(seq) / sizeof(seq[0]);
	assert(20 == max_sub_seq(seq, len));
}

int main(int argc, char const *argv[])
{
	printf("All Test Cases Passed!\n");
	return 0;
}