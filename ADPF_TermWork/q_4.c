#include <stdio.h> 
#include<string.h> 
 
int longestRun(char []); 
 
void main() 
{ 
    char a[100];     int count=0; 
 
   scanf("%[^\n]%*c", a); 
 
    count = longestRun(a);     printf("%d",count); 
 
 
} 
 
int longestRun(char a[]) 
{ 
    int c = 0,n=1,max_len=1;     for (c ; c < strlen(a); c++)     {   if(a[c]==a[c+1]){             n++;         }         else{             if(n>max_len)                 max_len = n;             n=1; 
        }     } 
    return max_len; 
}