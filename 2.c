/*Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5*/
#include <stdio.h>
void main() {
	
    int a,b;
    int swap;
    int *num1,*num2;
    printf("Enter the value of A =  ");
    scanf("%d",&a);
    printf("Enter the value of B = ");
    scanf("%d",&b);
    
    num1 = &a;
    num2 = &b;
 
    swap = *num1;
    
    *num1 = *num2;
    *num2 = swap;
    printf("  a=%d && B=%d", a,b);
    
}
