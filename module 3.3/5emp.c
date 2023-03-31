#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};
main()
{
    struct Employee employees[5];
    int i;
    
    for(i=0;i<5;i++)
	{
        printf("Enter employee information %d :- \n",i+1);
        printf("Employee number :- ");
        scanf("%d",&employees[i].empno);
        printf("Employee name :- ");
        scanf("%s",&employees[i].empname);
        printf("Employee Address :- ");
        scanf("%s",&employees[i].address);
        printf("Employee Age :- ");
        scanf("%d",&employees[i].age);
    }

    printf("Employee information :-\n");
    for(i=0;i<5;i++)
	{
        printf("Employee %d:\n",i+1);
        printf("Employee number: %d\n",employees[i].empno);
        printf("Employee name: %s\n",employees[i].empname);
        printf("Employee Address: %s\n",employees[i].address);
        printf("Employee Age: %d\n",employees[i].age);
    }
}

