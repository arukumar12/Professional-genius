#include <stdio.h>
void main()
{
   char c;
   printf("Enter the character 'q' to quit the program : ");
   scanf("%c",&c);
   if((c=='q')||(c=='Q'))
   {
       exit(0);
   }
}
