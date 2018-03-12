//Assignment - 1 Task 6

#include <stdio.h>


int main(void)
{   int a[10]={0}, b[10]={0}, c[20]={0}, i=0, j=0, k=0;
    char ch;
    printf("Enter array A:\n");
    while ((ch = getchar()) != '\n' && i<10)
    {
        if (ch != ' '){
            a[i] = a[i] * 10 + ch - '0';
        }
        else{
            i++;
        }
    }
    printf("Enter array B:\n");
    i=0;
    while ((ch = getchar()) != '\n' && i<10)
    {
        if (ch != ' '){
            b[i] = b[i] * 10 + ch - '0';
        }
        else{
            i++;j++;
        }
    }

    /*
    for (i=0;i<10;i++){
    printf("%d ", a[i]);
    printf("%d\n", b[i]);
    }
    */
    printf("Output: \n");
    i=0;
    while (i<10){
        if(a[i]=='\0'){
            while(j>=0){
                c[k++]=b[j--];
            }
            //printf("a[i]=='\0'");
            break;
        }
        else if( j<0){
            while(a[i]!='\0'){
                c[k++]=a[i++];
            }
            break;
        }
        else if (a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
            //printf("a[i]<b[j]\n");
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            k++;
            j--;
            //printf("a[i]>b[j]\n");
        }
        else{
            c[k++]=b[j];
            c[k]=a[i];
            k++;
            i++;
            j--;
            //printf("a[i] == b[j]\n");
        }
    printf("%d ", c[k-1]);
    }
    printf("%d \n", c[k-1]);
    return 0;
}

