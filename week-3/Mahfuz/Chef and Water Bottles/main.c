#include<stdio.h>
int main()
{
    int x,y,z,t,i,d;
    scanf("%d",&t);
    for(i=0;i<t;i++){
            d=0;
        scanf("%d %d %d",&x,&y,&z);
        if(y<=z){
            d=z/y;
            if(d>=x){
                printf("%d",x);
            }
           else printf("%d\n",d);
        }
     else printf("%d\n",d);

    }
}
