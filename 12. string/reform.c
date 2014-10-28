#include <stdio.h>
#include <string.h>
 
void main()
{
    void str_correct(char*);
 
    char str[256];
 
    printf("텍스트를 입력하시오 : ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    str_correct(str);
    printf("결과 텍스트 출력 : %s\n", str);
}
 
void str_correct(char* str)
{
    if (*str >= 'a' && *str <= 'z')
    {
        *str -= ' ';
    }
    if (*(str + strlen(str) - 1) != '.')
    {
        *(str + strlen(str) + 1) = '\0';
        *(str + strlen(str)) = '.';
    }
}