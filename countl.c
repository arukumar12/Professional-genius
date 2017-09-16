#include <stdio.h>
void main(int argc, char* argv[])
{
    int l=0;
    FILE *fp1;
    char ch;
    fp1=fopen(argv[1],"file_name");
    while((ch=fgetc(fp1))!= EOF)
    {
        if (ch=='\n')
        {
            l++;
        }
    }
    printf("The number of lines present in the given string is %d",l);
}
