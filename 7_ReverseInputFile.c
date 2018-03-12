//Assignment - 1 Task 7

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    // We assume argv[1] is a filename to open
    FILE *file = fopen( argv[1], "r" );
    FILE *outfile = fopen( argv[2], "w" );

    /* fopen returns 0, the NULL pointer, on failure */
    if ( file == 0 )
    {
        printf( "Could not open file\n" );
    }
    else
    {
        char ch, input[20]={'\0'}, output[20]={'\0'};
        int i=0;
        while  ( ( ch = fgetc( file ) ) != EOF )
        {
            if (isalpha(ch) || isdigit(ch)) {
                input[i]=ch;
                i++;
                continue;
            } else {
                i--;
                for(int a=0; a<=i;a++){

                    fprintf(outfile,"%c",input[i-a]);
                }
                fprintf(outfile,"%c",ch);
                i=0;
            }
        }
        fclose(file);
        fclose(outfile);
    }
    return 0;
}

