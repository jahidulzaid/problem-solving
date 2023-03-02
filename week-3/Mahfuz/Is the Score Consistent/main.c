#include<stdio.h>
int main()
{
    int x,y,z,d,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&x,&y,&z,&d);
        if(x<=z&&y<=d){
            printf("Possible\n");
        }
        else{printf("Impossible\n");}
    }
}
