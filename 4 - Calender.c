//Assignment - 1 Task 4

#include <stdio.h>


int main(void)
{ int a,b,c;

    printf("    January 2016    \n");
    printf("Su Mo Tu We Th Fr Sa\n");
    printf("               ");
  	for (int i=1; i<=31;i++){
        if(i<10){
            printf(" ");
        }
        printf("%d", i);
        if ((i+5)%7==0){
            printf("\n");
        }
        else{
            printf(" ");
        }
  	}
  return 0;
}

