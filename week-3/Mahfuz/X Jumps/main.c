#include<stdio.h>
int main()
{
    int x,y,z,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
            z=0;
        scanf("%d %d",&x,&y);

         z=(x/y)+(x%y);
        printf("%d\n",z);

    }
}
