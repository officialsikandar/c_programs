#include <stdio.h>  
  
int main()  
{  
    int year;  
  
    printf("Enter the year\n");  
    scanf("%d", &year);  
    if(year % 4 == 0)  
    {  
        printf("%d is leap year!\n", year);  
    }  
    else  
    {  
        printf("%d is not leap year!\n", year);  
    }  
  
    return 0;  
}  
