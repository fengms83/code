#include <stdio.h>
#include <assert.h>

/******************************************************************************/
/* 描    述：最大公约数（greatest commom divisor）算法实现1：欧几里得算法     */
/* 输入参数：                                                                 */
/*           a  - 第一个数                                                    */
/*           b  - 第二个数                                                    */
/* 返 回 值：最大公约数                                                       */
/* 创 建 人：冯茂盛                                                           */
/* 创建日期：2016-07-06                                                       */
/******************************************************************************/
unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int rem;

	while(b > 0)
	{
		rem = a % b;
		a = b;
		b = rem;
	}

	return a;
}

void test_cases()
{
	assert(2 == gcd(4, 2));
	assert(1 == gcd(3, 2));
	assert(1 == gcd(2, 3));
	assert(3 == gcd(1989, 1590));
}

int main(int argc, char const *argv[])
{
	test_cases();
	printf("All Test Cases Passed!\n");
	return 0;
}