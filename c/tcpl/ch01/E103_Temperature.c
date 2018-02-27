#include <stdio.h>
#include <assert.h>

int main()
{
	float fahr;
	float celsius;
	
	int lower;
	int upper;
	int step;
	
	printf("Testing >>> %-30s ...\n", __FILE__);
	printf("----------------------------------\n");
	printf("  fahr\t\tcelsius\n");
	printf("----------------------------------\n");
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-2.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}
	
	printf("Tested >>> %-30s Succeed!\n", __FILE__);
	
	return 0;
}