#include <stdio.h>
int main()
{
    /* 
    A: 90-100
    B: 80-89
    C: 70-79
    D: 60-69
    F: Below 60
    */
   int mark;

   printf("Enter your mark: ");

   scanf("%d", &mark);

   if(mark >= 90 && mark <= 100){
    printf("A grade\n");
   } else if(mark >= 80 && mark <= 89){
    printf("B grade");
   } else if (mark >= 70 && mark <= 79){
    printf("C Grade");
   } else if(mark >= 60 && mark <= 69){
    printf("D grade");
   } else if(mark <= 59 && mark >= 0){
    printf("Fail korsen");
   } else{
    printf("100 er o beshi paisen naki miya bhai");
   }

    return 0;
}