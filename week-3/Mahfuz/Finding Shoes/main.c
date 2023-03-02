#include<stdio.h>
int main()
{
    int x,y,z,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        if(x>=y){
            z=2*x-y;
            printf("%d\n",z);
        }
       else if(y>x){
        z=2*x-x;
        printf("%d\n",z);
       }
    }
}
