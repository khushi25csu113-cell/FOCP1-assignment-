#include<stdio.h>
int isprime(int n){
if(n<2) return 0;
for(i=2;i<n;i++){
  if(n%i==0) return 0;
       }
return 1;
}
int main(){
  int i,count=0;
  int pnum[]={23,45,1,3,17,23,44,51};
  int length=sizeof(pnum)/sizeof(pnum[0]);
  for(i=0;i<length;i++)
    {
      if(isprime(pnum[i]))
        count++;
    }
  printf("total prime numbers is %d",count);
  return 0;
}
