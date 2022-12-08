#include <stdio.h>
//Variable Declaration
int n=0,ch,chh;

// Structure for storing Cars Data
struct carData{
    char ID[5];
    char name[20];
    char mobile[12];
    char fees[10];
}c[];

//Input Data for Inventory
int input(){
    printf("\n\n");
    printf("Enter Bill Number :\t");
    scanf("%s",&c[n].ID);
    printf("Enter Car Name :\t");
    scanf("%s",&c[n].name);
    printf("Enter Car User Mobile No. :\t");
    scanf("%s",&c[n].mobile);
    printf("Enter Car Service Charges :\t");
    scanf("%s",&c[n].fees);
    // printf("Mobile no.: %s",c[n].mobile);
    n++;
    check();
    return 0;
}

//Search Data using Mobile No.
int usemob(){
    char mob[10];
    printf("Enter Student Mobile Number :\t");
    scanf("%s",&mob);
    for(int i=0;i<=n;i++){
        if(strcmp(c[i].mobile, mob)==0){
            printf("\n");
            printf("Student ID Number :\t\t%s\n",c[i].ID);
            printf("Student Name :\t\t%s\n",c[i].name);
            printf("Student Mobile No. :\t%s\n",c[i].mobile);
            printf("Student Fees :\t%s\n",c[i].fees);
        }
    }
    check();
    return 0;
}

//Search Data using Bill No.
int usebill(){
    char bil[5];
    printf("Enter Student ID Number :\t");
    scanf("%s",&bil);
    for(int i=0;i<=n;i++){
        if(strcmp(c[i].billNo, bil)==0){
            printf("\n");
            printf("Student ID Number :\t\t%s\n",c[i].ID);
            printf("Student Name :\t\t%s\n",c[i].name);
            printf("Student Mobile No. :\t%s\n",c[i].mobile);
            printf("Student Fees :\t%s\n",c[i].fees);
        }
    }
    check();
    return 0;
}

//Search Option for User
int search(){
    printf("Select Option:\n\n1. Using Mobile No.\n2. Using ID No.\n\n");
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

//Display All Inventory
display(){
    for(int i=0;i<n;i++){
        printf("\n");
        printf("Student ID Number :\t\t%s\n",c[i].ID);
        printf("Student Name :\t\t%s\n",c[i].name);
        printf("Student Mobile No. :\t%s\n",c[i].mobile);
        printf("Student Fees :\t%s\n",c[i].fees);
    }
    check();
    return 0;
}
//Add Inventory or Search Inventory
int check(){
    printf("Select Option:\n\n1. Add Student Data\n2. Search Student Data\n3. Display All Students Data\n4. Exit\n\n");
    printf("Selected Option is:\t");
    scanf(" %d",&ch);
    switch(ch){
        case 1:
        input();
        break;
        case 2:
        search();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
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
