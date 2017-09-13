#include <stdio.h>
void main()
{
    char s[100];
    int cd,ca,cs,csc;
    int c;
    cd=ca=csc=cs=0;
    printf("Enter a string: ");
    gets(s);
    for(c=0;s[c]!=NULL;c++)
    {
        if(s[c]>='0' && s[c]<='9')
            cd++;
        else if((s[c]>='A' && s[c]<='Z')||(s[c]>='a' && s[c]<='z'))
            ca++;
        else if(s[c]==' ')
            cs++;
        else
            csc++;
    }
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",cd,ca,cs,csc);
}
