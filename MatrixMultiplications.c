#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
    int am[10][10], bm[10][10], mul[10][10],row, col, i, j, k;    

    printf("Enter the number of row: \t");    
    scanf("%d",&row);    
    printf("Enter the number of column: \t");    
    scanf("%d",&col);   

    //input Values in Matrix
    printf("Enter the Matrix A Values: \n");    
    for(i=0;i<row;i++)    
    {
        for(j=0;j<col;j++)    
        {
            scanf("%d",&am[i][j]);    
        }    
    }   


    printf("Enter the Matrix B Values: \n");    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)    
        {
            scanf("%d",&bm[i][j]);    
        }    
    }    


    //Calculate matrix multiply    
    printf("multiply of the matrix=\n");    
    for(i=0;i<row;i++)    
    {
        for(j=0;j<col;j++)    
        {
            mul[i][j]=0;    
            for(k=0;k<col;k++)    
            {
                mul[i][j]+=am[i][k]*bm[k][j];    
            }
        }    
    }   


    //Output result    
    for(i=0;i<row;i++)    
    {   
        for(j=0;j<col;j++)    
        {
            printf("%d\t",mul[i][j]);    
        }
        printf("\n");    
    }  


    return 0;  
}  
