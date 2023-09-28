#include<stdio.h>   
int po(int a) 
{ 
  int res=1,i; 
  for(i=0;i<a;i++) 
    res*=2; 
  return res; 
} 
void main() 
{ 
  int m,n,i,j,a[200],temp,len=1, 
flag=0,count=1,o=0; 
  scanf("%d %d",&m,&n); 
  a[0]=m; 
  for(i=1;i<n;i++) 
    { 
      o=(int)po(i)*m; 
      temp=o%n; 
      flag=0; 
      for(j=len-1;j>=0;j--) 
      { 
        if(temp==a[j]) 
        { 
          flag=1; 
          break; 
        } 
      } 
      if(flag==0) 
      { 
        a[len]=temp; 
        count++; 
        len++; 
      } 
    } 
  printf("%d",count); 
}   