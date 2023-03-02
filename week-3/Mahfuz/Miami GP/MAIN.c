#include<stdio.h>
int main()
{
    int x,y,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        int z=x+x*0.07;
        if(y<=z){
            printf("Yes\n");
        }
        else printf("No\n");
    }
}
