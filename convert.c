#include <stdio.h>

void convert(double *grades, double *scores, int size);

int main(void) {
        double scores[10];
        double grades[10];
        int i;
        
        for(i=0; i<10; i++) {
                printf("점수 입력(단, 4.3점 만점) :\n");
                scanf("%f", &grade[i]);
                }
        
        printf("100점 만점일 때 점수\n");
        convert(grades, scores, 10);
        
        return ;
}

void convert(double *grades, double *scores, int size)
{
        int i;
        for(i=0; i<size; i++)
        {
                scores[i] = (100*grades[i])/4.3;
                printf("scores[%d] = %10f점\n", i, scores[i]);
        }
}
