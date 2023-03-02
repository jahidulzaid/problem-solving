#include<stdio.h>
int main()
{
    int x,y,z,d;
    scanf("%d %d %d %d",&x,&y,&z,&d);
    if(d==x||d==y||d==z){
        printf("Yes");
    }
    else printf("No");
}
