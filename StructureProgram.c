#include <stdio.h>
#include<conio.h>
struct employee
{
    int id, pds, wd, gross, total_salary, total_esi, total_pf, pf, esi;
    char fname[10], lname[10];
    
};
int main()
{
    int n;
    
    printf("Enter No. of Employees in your Office \n");
    scanf("%d",&n);
    struct employee em[n];
    
    for(int i=0; i<n ;i++)
    {
    printf("********************Employee : %d**************************\n\n",i+1);
    printf("Enter Employee Full Name :\n");
    scanf("%s",&em[i].fname);
    printf("Enter Employee ID No. :\n");
    scanf("%d",&em[i].id);
    printf("Enter Employee Per Day Salary :\n");
    scanf("%d",&em[i].pds);
    printf("Enter Employee Working Days\n");
    scanf("%d",&em[i].wd);
    
    //Calculat Payroll Details
    
    em[i].total_salary=em[i].pds*em[i].wd;                      //cal total with (per day salary * Total Working Days)
    em[i].esi=(5*em[i].total_salary)/100;                       //cal 5% ESI of total salary
    em[i].total_esi=em[i].esi+((5*em[i].total_salary)/100);     //cal 5% ESI of emp + 5% ESI from Company
    em[i].pf=(10*em[i].total_salary)/100;                       //cal 10% PF of total Salary
    em[i].total_pf=(em[i].pf+(10*em[i].total_salary)/100);      //cal 10% PF of EMP + 10 from Company
    em[i].gross=(em[i].total_salary-em[i].total_esi)-em[i].total_pf;    //Cal Gross Salary (total_salary-esi-pf)
    }
    
    
    printf("********************Employee Payroll**************************\n\n");    
    printf("Employee Name\t Employee Id\t Per Day Salary\t Working Days\t Total Salary\t Total ESI\t Total PF\t Gross Salary\n");
    for(int i=0; i<n ;i++)
    {
        printf("%s\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n",em[i].fname, em[i].id, em[i].pds, em[i].wd, em[i].total_salary, em[i].total_esi, em[i].total_pf, em[i].gross);
    
    // printf("Enter Employee Full Name :%s\n", em[i].fname);
    // printf("Enter Employee ID No. :%d\n", em[i].id);
    // printf("Enter Employee Per Day Salary :%d\n", em[i].pds);
    // printf("Enter Employee Working Days :%d\n",em[i].wd);
    // printf("Enter Employee Working Days :%d\n",em[i].total_salary);
    // printf("Enter Employee Working Days :%d\n",em[i].total_pf);
    // printf("Enter Employee Working Days :%d\n",em[i].total_esi);
    // printf("Enter Employee Working Days :%d\n",em[i].gross);
    // printf("Enter Employee Full Name :\n");
    }
    
    

    return 0;
}
