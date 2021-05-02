#include <stdio.h>
#include <assert.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
    printf("Testing >>> %-30s ...\n", __FILE__);


    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("fahr = %d\tcelsuis = %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("Tested >>> %-30s Succeed!\n", __FILE__);

    return 0;
}
