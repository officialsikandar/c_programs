#include <stdio.h>
#include <conio.h>
int main()
{
    char ckpass[20];
    char inpass[20];
    char copyps[20];
   
    int corr, len;
    printf("ENTER YOUR PASSWORD\n");
    scanf("%s",inpass);
    printf("Re-ENTER YOUR PASSWORD\n");
    scanf("%s",ckpass);
        corr=strcmp(inpass,ckpass);   //Compaire Two String in C  "strcmp(first_string, second_string)"
        len=strlen(inpass);           //Check Leangth of String in C  "strlen(string_name)"
        strcpy(copyps,inpass);        //Copy password for Print in Copy  "strcpy(destination, source)"
        strcat(ckpass,inpass);        //Joint Two String in C "strcat(first_string, second_string)"    ****after join operation, join value is stored in first string value****

                       
    //printf("Uper case of password %s:",strrev(chpass));         // Convert your string in Reverse String          
    //printf("Uper case of password %s:",strupr(chpass));         // Convert your string in Lower case          
    //printf("Uper case of password %s:",strlwr(chpass));       // Convert your string in Lower case    
    printf("Your Reverse ");    
    printf("Your Join String is %s\n",ckpass);    
    printf("Your Enter %s \n",copyps);    
    printf("you enter %d correctors in your password\n\n", len);
    if(corr==0)
    {
        printf("Password Accepted  :)");
    
    }
    else
            printf("Password not Accepted  :(");
    
    return 0;
}
