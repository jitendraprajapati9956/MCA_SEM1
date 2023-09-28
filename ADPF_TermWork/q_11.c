#include<stdio.h>    
void printFibonacci(int n){    
    static int n1=1,n2=1,n3;    
    if(n>1){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",1,1);    
    printFibonacci(n-2);//n-2 because 2 numbers are already printed    
  return 0;  
 }    