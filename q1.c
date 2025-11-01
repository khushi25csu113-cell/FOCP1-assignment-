#include<stdio.h>
#include<math.h>
int main(){
int num,count=0,sum=0;
printf("enter number");
  scanf("%d",&num);
int orgnum=num;
 while(num>0)
{
   num/=10;
 count++;
}
   num=orgnum;
  while(num>0)
{
  int rem=num%10;
  sum+=pow(rem,count);}
 
  if(num==sum)
    printf("it is armstrong number");
  else 
    printf("not armstrong");
  return 0;
}
