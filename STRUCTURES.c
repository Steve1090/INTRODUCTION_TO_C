#include<stdio.h> 
struct employee 
{ 
char name[10]; 
int year; 
float sal; 
char gen[10]; 
}; 
int main (){ 
struct employee x; 

printf ("Enter the name: "); 
scanf ("%s", &x.name); 
printf("\nThe name of the employee is :%s",x.name); 


printf ("\nEnter the year of joining: "); 
scanf ("%d", &x.year); 
printf("\nThe year of joining is :""%d",x.year); 


printf ("\nEnter the salary of the employee:"); 
scanf ("%f", &x.sal); 
printf("\nThe salary of the employee is :""%f",x.sal); 


printf ("\nEnter the gender of the employee: "); 
scanf ("%s", &x.gen); 
printf("\nThe name of the employee is :""%s",x.gen); 

printf("\nThe details of the employee are:\n%s,\n%d,\n%f,\n%s", x.name, x.year, x.sal, x.gen); 

return 0; 
}
