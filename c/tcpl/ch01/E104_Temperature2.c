#include <stdio.h>
#include <assert.h>

#define EPSILON (1e-2)

float trans(float celsius)
{
	float fahr;
	fahr = celsius * (9.0/5.0) + 32;
	
	printf("%6.1f\t%3.0f\n", fahr, celsius);
	
	return celsius;
}

void test_cases()
{
	assert(abs(trans(-17) - 0  ) < EPSILON);
	assert(abs(trans(-6 ) - 20 ) < EPSILON);
	assert(abs(trans(4  ) - 40 ) < EPSILON);
	assert(abs(trans(15 ) - 60 ) < EPSILON);
	assert(abs(trans(26 ) - 80 ) < EPSILON);
	assert(abs(trans(37 ) - 100) < EPSILON);
	assert(abs(trans(48 ) - 120) < EPSILON);
	assert(abs(trans(60 ) - 140) < EPSILON);
	assert(abs(trans(71 ) - 160) < EPSILON);
	assert(abs(trans(82 ) - 180) < EPSILON);
	assert(abs(trans(93 ) - 200) < EPSILON);
	assert(abs(trans(104) - 220) < EPSILON);
	assert(abs(trans(115) - 240) < EPSILON);
	assert(abs(trans(126) - 260) < EPSILON);
	assert(abs(trans(137) - 280) < EPSILON);
	assert(abs(trans(148) - 300) < EPSILON);
}

int main()
{
	float fahr;
	float celsius;
	
	int lower;
	int upper;
	int step;
	
	printf("Testing >>> %-30s ...\n", __FILE__);
	
	test_cases();
	
	printf("Tested >>> %-30s Succeed!\n", __FILE__);
	
	return 0;
}