#include<stdio.h>
int main()
{
    int x,y,z,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&z);
        if(x>=y&&x>=z){
            printf("%d\n",x);
        }
        else if(y>=x&&y>=z){
            printf("%d\n",y);
        }
        else if(z>=y&&y>=x){
            printf("%d\n",z);
        }
    }
}
