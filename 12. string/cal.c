#include <stdio.h>
#include <string.h>

main()
{
        char op[10];
        int a,b;

         printf("연산을 입력하시오:");
        scanf("%s %d %d", op, &a, &b);

        if(strcmp(op,"add") == 0)
                printf("연산의 결과 : %d\n", a+b);

        else if(strcmp(op,"sub") == 0)
                printf("연산의 결과 : %d\n", a-b);

        else if(strcmp(op,"mul") == 0)
                printf("연산의 결과 : %d\n", a*b);

        else if(strcmp(op,"div") == 0)
                printf("연산의 결과 : %d\n", a/b);
}
