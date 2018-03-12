//Assignment - 1 Task 1

#include <stdio.h>


//#define PI 3.14159

int main(void)
{ int a,b,c;

  printf("Enter 3 integers you want to sort:");

  	scanf("%d", &a);
 	scanf("%d", &b);
	scanf("%d",&c);
printf("Input: %d %d %d\n",a,b,c);
for(int i=0;i<2;i++){

if(a>b){
a=a+b;
b=a-b;
a=a-b;
}
if(b>c){
b=b+c;
c=b-c;
b=b-c;
}

}

printf("Output: %d %d %d\n", a,b,c);
  return 0;
}

