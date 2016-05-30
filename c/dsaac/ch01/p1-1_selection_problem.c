#include <stdio.h>
#include <assert.h>

typedef int ElemType;

/******************************************************************************/
/* 描    述：选择问题（selection problem）算法实现1：冒泡排序                 */
/* 输入参数：                                                                 */
/* 返 回 值：                                                                 */
/* 创 建 人：                                                                 */
/* 创建日期：                                                                 */
/******************************************************************************/
int select_01(ElemType* i, int len, int k)
{
	return 0;
}

/******************************************************************************/
/******************************************************************************/
void test_case_01()
{
	ElemType input[] = {1,2,3,4,5};
	int len = sizeof(input) / sizeof(input[0]);
	assert(5 == select(input, len, 1));
}

void test_cases()
{
	test_case_01();
}

int main(int argc, char const *argv[])
{
	test_cases();
	printf("All Test Cases Passed!\n");
	return 0;
}