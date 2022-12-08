#include <stdio.h>
//Variable Declaration
int n=0,ch,chh;

// Structure for storing Cars Data
struct carData{
    char billNo[5];
    char name[20];
    char mobile[10];
    char serviceCharge[10];
}c[];

//Input Data for Inventory
int input(){
    printf("\n\n");
    printf("Enter Bill Number :\t");
    scanf("%s",&c[n].billNo);
    printf("Enter Car Name :\t");
    scanf("%s",&c[n].name);
    printf("Enter Car User Mobile No. :\t");
    scanf("%s",&c[n].mobile);
    printf("Enter Car Service Charges :\t");
    scanf("%s",&c[n].serviceCharge);
    n++;
    check();
    return 0;
}

//Search Data using Mobile No.
int usemob(){
    char mob[10];
    printf("Enter Mobile Number :\t");
    scanf("%s",&mob);
    for(int i=0;i<=n;i++){
        if(strcmp(c[i].mobile, mob)==0){
            printf("\n");
            printf("Bill Number :\t\t%s\n",c[i].billNo);
            printf("Car Name :\t\t%s\n",c[i].name);
            printf("Car User Mobile No. :\t%s\n",c[i].mobile);
            printf("Car Service Charges :\t%s\n",c[i].serviceCharge);
        }
        check();
    }
    return 0;
}

//Search Data using Bill No.
int usebill(){
    char bil[10];
    printf("Enter Bill Number :\t");
    scanf("%s",&bil);
    for(int i=0;i<=n;i++){
        if(strcmp(c[i].billNo, bil)==0){
            printf("\n");
            printf("Bill Number :\t\t%s\n",c[i].billNo);
            printf("Car Name :\t\t%s\n",c[i].name);
            printf("Car User Mobile No. :\t%s\n",c[i].mobile);
            printf("Car Service Charges :\t%s\n",c[i].serviceCharge);
        }
        check();
    }
    return 0;
}

//Search Option for User
int search(){
    printf("Select Option:\n\n1. Using Mobile No.\n2. Using Bill No.\n\n");
    printf("Selected Option is:\t");
    scanf(" %d",&chh);
    switch(chh){
        case 1:
        usemob();
        break;
        case 2:
        usebill();
        break;
        default:
        printf("Entered value is not valid ");
    }
    return 0;
}

//Add Inventory or Search Inventory
int check(){
    printf("Select Option:\n\n1. Add Invantory\n2. Search Invantory\n\n");
    printf("Selected Option is:\t");
    scanf(" %d",&ch);
    switch(ch){
        case 1:
        input();
        break;
        case 2:
        search();
        break;
        default:
        printf("Entered value is not valid ");
    }
}



int main()
{
    check();
    return 0;
}
