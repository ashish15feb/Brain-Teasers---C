//Assignment - 1 Task 3

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
  char input[20]={};
  char num[10]={};
  printf("Enter a positive number: ");
  scanf("%s", input);
  printf("Input: %s \n",input);
  //printf("%d\n",strnlen(input));
  printf("Output: ");
  int i=0;
	while(i<strnlen(input)){
		int temp=input[i];
		//printf("%d",temp);
		switch(temp){
			case 48:
			strncpy(num,"zero",10);
			break;
			case 49:
			strncpy(num,"one",10);
			break;
			case 50:
			strncpy(num,"two",10);
			break;
			case 51:
			strncpy(num,"three",10);
			break;
			case 52:
			strncpy(num,"four",10);
			break;
			case 53:
			strncpy(num,"five",10);
			break;
			case 54:
			strncpy(num,"six",10);
			break;
			case 55:
			strncpy(num,"seven",10);
			break;
			case 56:
			strncpy(num,"eight",10);
			break;
			case 57:
			strncpy(num,"nine",10);
			break;
			default:
            strncpy(num,"not_digit",10);
		}
		i++;
		printf("%s ",num);
	}
	printf("\n");
	return 0;
}

