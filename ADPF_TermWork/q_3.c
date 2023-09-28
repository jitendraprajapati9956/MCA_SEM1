#include<stdio.h>
#include<string.h>
int main()

{
    char s1[100],s2[100];
    //int num1[26] = {0}, num2[26] = {0}, i = 0;
    int count=0,i=0;
    scanf("%s %s", s1,s2);
      int num1[26] = {0}, num2[26] = {0};

    while (s1[i] != '\0')

    {

        num1[s1[i] - 'a']++;

        i++;

    }

    i = 0;

    while (s2[i] != '\0')

    {

        num2[s2[i] -'a']++;

        i++;

    }

  
  
    
  
    for (i = 0; i < strlen(s1); i++)

    {

        if (num1[i] != num2[i])

        {  
            printf("-1");
            goto A;
          
        }
    }
      
    for (i = 0; i < strlen(s1); i++)

    {

        if (s1[i] == s2[i])

        {
            count++;
          
        }
    }
  
  printf("%d",count);
    
   A: return 0;
}