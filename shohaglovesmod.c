#include<stdio.h>
#include<math.h>
int main(){
    int t=1;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i< n; i++){
        printf("%d  ",2*i+1);
        printf("\n");
    }
    }
    return 0;
}