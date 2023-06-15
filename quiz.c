#include <stdio.h>
int main()
{

    int mathAndSci = 1;
    int math = 2;
    int sci = 3;
    int mark;

    printf("Enter you subject code:");
    scanf("%d", &mark);

    if (mark == mathAndSci)
    {
        printf("your earned 45");
    }
    else if (mark == math)
    {
        printf("you earned 15");
    }
    else if (mark == sci)
    {
        printf("you earned 15");
    }
    else
    {
        printf("bhai fail");
    }

    return 0;
}
