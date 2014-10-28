#include <stdio.h>
#include <string.h>

int get_response(char *prompt);

main()
{
        char ans[5];
        int check;
        printf("게임을 하시겠습니까? ");
        gets(ans);
        fflush(stdin);

        check = get_response(ans);

        if(check == 0)
                printf("Positive\n");

        else if(check == 1)
                printf("Negative\n");

        return 0;
}

int get_response(char *prompt)
{
        int i;

        for(i=0; i<5; i++)
                prompt[i] = tolower(prompt[i]);

        if(strcmp(prompt, "yes"))
                return 1;

        else if(strcmp(prompt, "no"))
                return 0;
}

