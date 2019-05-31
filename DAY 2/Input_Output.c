//display twice the integer value
//display the characyter array entered 
#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char str[15];
    scanf("%d",&a);
    if(a>10 && a<0)
    {
        scanf("%d",&a);
    }
    else
    {
        
        a*=2;
        printf("%d\n",a);
    }
    scanf("%s",&str);
    if(strlen(str)>15 && strlen(str)<1)
    {
        scanf("%s",&str);
    }
    else
        printf("%s",str);
    
}
