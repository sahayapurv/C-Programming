#include<stdio.h>
void main()
{
   int age, salary;
   printf("Enter age and salary: ");
   scanf("%d %d",&age, &salary);
   if(age>=50)
   {
      if(salary>=60000)
      {
         salary = salary + 0.05 *salary;
      }
      else
         {salary = salary + 0.10 * salary;}
   }
   else
      {salary = salary + 0.03 *salary;}
   printf("Employe with age %d has got their new salary as %d",age,salary);
}