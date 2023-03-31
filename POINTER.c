#include <stdio.h> 
int main(){ 
int a=4; 
int*ap=&a;
printf("\nThe address of the variable:%d",&a); 
printf("\nThe value of the variable:%d",a); 
printf("\nThe address of the pointer variable:%d",&ap); 
printf("\nThe value of the pointer variable: %d",ap); 
printf("\n%d",*ap); 
return 0; 
} 