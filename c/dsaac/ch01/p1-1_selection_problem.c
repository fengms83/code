#include <stdio.h>
#include <assert.h>

typedef int ElemType;

#define less(a, b) ((a) < (b) ? 1:0)

/******************************************************************************/
/* 描    述：选择问题（selection problem）算法实现1：冒泡排序                 */
/* 输入参数：                                                                 */
/*           input - 输入数组                                                 */
/*           len   - 输入数组长度                                             */	
/*           k     - 第k大的元素，k从1开始                                    */
/* 返 回 值：第k大的元素                                                      */
/* 创 建 人：冯茂盛                                                           */
/* 创建日期：2016-05-30                                                       */
/******************************************************************************/
int select_01(ElemType* input, int len, int k)
{
	ElemType i = 0;
	ElemType j = 0;
	ElemType tmp;

	for (i = 0; i < len; ++i)
	{
		for (j = i; j < len; ++j)
		{
			if (less(input[i], input[j]))
			{
				tmp = input[i];
				input[i] = input[j];
				input[j] = tmp;
			}
		}
	}

	for (i = 0; i < len; ++i)
	{
		printf("%d\n", input[i]);
	}

	return input[k-1];
}

/******************************************************************************/
/* 描    述：测试用例                                                         */
/* 输入参数：无                                                               */
/* 返 回 值：无                                                               */
/* 创 建 人：冯茂盛                                                           */
/* 创建日期：2016-05-30                                                       */
/******************************************************************************/
void test_case_01()
{
	ElemType input[] = {1,2,3,4,5};
	int len = sizeof(input) / sizeof(input[0]);
	assert(5 == select_01(input, len, 1));
}

void test_cases()
{
	test_case_01();
}

/******************************************************************************/
/* 描    述：测试入口                                                         */
/* 输入参数：无                                                               */
/* 返 回 值：无                                                               */
/* 创 建 人：冯茂盛                                                           */
/* 创建日期：2016-05-30                                                       */
/******************************************************************************/
int main(int argc, char const *argv[])
{
	test_cases();
	printf("All Test Cases Passed!\n");
	return 0;
}