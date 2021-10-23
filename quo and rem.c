#include <stdio.h>
int main()
{
    int x,y,quo,rem;
    scanf("%d%d",&x,&y);
    rem=x%y;
    quo=x/y;
    printf("rem=%d\nquo=%d\n",rem,quo);

    return 0;
}
