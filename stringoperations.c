#include <stdio.h>
#include <string.h>

int main()
{
    char str1[12]="Hello";
    char str2[12]="gta";
    char str3[12];
    int len,compare;
    /*str1 into str3*/

    strcpy(str3,str1);

    printf("using stringcpy(str3,str1) function will copy string 1 to string 3 :%s",str3);
    strcat(str1,str2);
    printf("\nusing strcat(str1,str2) we concatenate str2 to end of str1 :%s ",str1);
    len=strlen(str1);
    printf("\nstrlen(str1)=%d\n",len);
    compare=strcmp(str1,str2);
    printf("\n the comparision of strings is : %d",compare);

    



    return 0;
}