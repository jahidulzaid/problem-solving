#include<stdio.h>
int main()
{
    int t,x,y,z,i,d;
    scanf("%d",&t);
    for(i=0;i<t;i++){
            int p=0;
        scanf("%d %d %d",&x,&y,&z);
         d=3*y;
          p=x*y;
         if(d>=p){
            printf("%d\n",p);
         }
         else{
            int q=x/3;
            p=p+(z*q);
            printf("%d\n",p);
         }
    }
}
