#include<stdio.h>
int main()
{
    int x,y,i,countO=0,countE=0;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            countE++;
        }
        else{
            countO++;
        }
    }
    if(countE>countO){
        printf("Ready for battle");
    }
    else{
        printf("Not Ready");
    }
}
