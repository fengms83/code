/*
 * 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，
 * 把回退符替换为\b，把反斜杠替换为\\
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

    memset(output, 0, MAX_LEN);

    for (i = 0, j = 0; i < len; i++, j++)
    {
        if(input[i] == '\t')
        {
            output[j++] = '\\';
            output[j] = 't';
        }
        else if(input[i] == '\b')
        {
            output[j++] = '\\';
            output[j] = 'b';
        }
        else if(input[i] == '\\')
        {
            output[j++] = '\\';
            output[j] = '\\';
        }
        else
        {
            output[j] = input[i];
        }
    }
    printf("output = %s\n", output);

    return ;
}

void test_case01()
{
    char* input  = "a\tb";
    char output[MAX_LEN];
    char* expected = "a\\tb";

    int flag = -1;

    func(input, output);
    flag = strcmp(output, expected);
    assert(0 == flag);
}

void test_case02()
{
    char* input  = "hello\bworld";
    char output[MAX_LEN];
    char* expected = "hello\\bworld";

    int flag = -1;

    func(input, output);
    flag = strcmp(output, expected);
    assert(0 == flag);
}

void test_case03()
{
    char* input  = "hello\\world";
    char output[MAX_LEN];
    char* expected = "hello\\\\world";

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
    test_case03();

    printf("Tested >>> %-30s Succeed!\n", __FILE__);

    return 0;
}
