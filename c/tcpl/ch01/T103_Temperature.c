#include <stdio.h>
#include <assert.h>

int main()
{
    printf("Testing >>> %-30s ...\n", __FILE__);


    int fahr;
    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("fahr = %d\tcelsuis = %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("Tested >>> %-30s Succeed!\n", __FILE__);

    return 0;
}
