#include <stdio.h>

int main(void) {
    
    int t, n, m, k;
    scanf("%d", &t);
    while(t--)
    
    
    {
        scanf("%d%d%d", &n, &m, &k);
        if(n<=(m-k))
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
	// your code goes here
	return 0;
}
