#include<stdio.h>
int mian(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",j%2==0?1:0);
        }
        for(int k=i;k<n;k++)
          {
            printf(" ");
          }
             for(int j=1;j<-i;j++)
                {
            printf("%d",j%2==0?1:0);
                 }
                printf("\n");
    }
    return 0;
}
