#include <stdio.h>
#include <ctype.h>

main()
{
        char c;

        while(1)
        {
                printf("문자를 입력하시오 : ");
                c = getchar();
                fflush(stdin);
                fflush(stdout);

                if(c == '.')
                        break;

						if(isalpha(c)) // 알파벳인지 검사
						{
						
						if(isupper(c)) // 대문자인지 검사
						{
                                c = tolower(c);
                                putchar(c);
                                printf("\n");
                                fflush(stdout);
                        }
                        
						else if(isupper(c) == 0)
                        {
                                c = toupper(c);
                                putchar(c);
                                printf("\n");
                                fflush(stdout);
                        }
						}
						
						else if(isalpha(c) == 0)
						printf("알파벳이 아닙니다.\n");
        }
}