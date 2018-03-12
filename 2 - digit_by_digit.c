//Assignment - 1 Task 2

#include <stdio.h>


//#define PI 3.14159

int main(void)
{ int a,b,c;

  printf("Enter a positive number: ");
  	scanf("%d", &a);
printf("Input: %d \n",a);
printf("Output: ");
while(a){
int temp = a;
temp = temp%10;
printf("%d ",temp);
a=a-temp;
/*
if(a==0){
break;
}
*/
a=a/10;
}
printf("\n");
return 0;
}

