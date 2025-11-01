#include<stdio.h>
int main(){
  int a,b,hcf;
printf("enter a and b :");
  scanf("%d,%d",&a,&b);
for(i=1;i<=a && i<=b;i++)
{ if(i%a==0 && i%b==0)
    hcf=i;
}
printf("hcf is %d",hcf);
return 0;
}
