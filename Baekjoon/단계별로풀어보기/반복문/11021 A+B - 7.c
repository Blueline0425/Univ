#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(int i=1;i<=c;i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d\n",i,a+b);
    }
    return 0;
    
}
