/*
 * 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替
*/
#include <stdio.h>
#include <assert.h>

#define MAX_LEN 1024

void func(const char* input, char* output)
{
    char c = '\0';

    int len = strlen(input);

    int i = 0;
    int j = 0;

    memset(output, 0, len);

    for (i = 0; i < len; i++)
    {
        if(input[i] == ' ' && c == ' ')
        {
            continue;
        }
        else
        {
            c = input[i];
            output[j++] = c;
        }
    }

    return ;
}

void test_case01()
{
    char* input  = "a  b cde   fg";
    char output[MAX_LEN];
    char* expected = "a b cde fg";

    int flag = -1;

    func(input, output);
    flag = strcmp(output, expected);
    assert(0 == flag);
}

void test_case02()
{
    char* input  = "hello\r\nworld";
    char output[MAX_LEN];
    char* expected = "hello\r\nworld";

    int flag = -1;

    func(input, output);
    flag = strcmp(output, expected);
    assert(0 == flag);
}

int main()
{
    printf("Testing >>> %-30s ...\n", __FILE__);

    test_case01();
    test_case02();

    printf("Tested >>> %-30s Succeed!\n", __FILE__);

    return 0;
}
