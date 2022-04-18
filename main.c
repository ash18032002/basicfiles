/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    int n1,n2;
    printf("operator +,-,*,/");
scanf("%c",&ch);
printf("Enter two numbers:\n");
 scanf("%d %d",&n1,&n2);
 switch(ch)
 {
     case '+': 
      printf("%d+%d=%d",n1,n2,n1+n2);
     break;
     case '-': 
     printf("%d-%d=%d",n1,n2,n1-n2);
     break;
     case '*':
     printf("%d*%d=%d",n1,n2,n1*n2);
     break;
     case '/':
     printf("%d/%d=%d",n1,n2,n1/n2);
     break;
     default: 
     printf("invalid operator");
 }
    return 0;
}
