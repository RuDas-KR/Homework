#include <stdio.h>
#include <string.h>

int str_chr(char *s, int c);

int main()
{
         char str[100];
         int key;

         printf("문자열을 입력하시오 : ");
         gets(str);

         printf("개수를 셀 문자를 입력하시오 :");
         scanf("%c", &key);

         printf("%c의 개수 : %d\n", key, str_chr(str, key));
         return 0;
}

int str_chr(char *s, int c)
{
         int i, count = 0;

         for(i=0; s[i]!=NULL; i++)
         {
                 if(s[i] == c)
                         count++;
         }

         return count;
}