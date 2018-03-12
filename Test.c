//Test
#include <stdio.h>


//#define PI 3.14159

int main(void)
{
    char word[20]={'\0'};
    for(int i=0;i<20;i++){
        printf("%d - %c -\n", i, word[i]);
        if(word[i]=='\0'){
            printf("foo");
        }
    }
  return 0;
}

