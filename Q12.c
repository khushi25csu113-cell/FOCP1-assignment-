#include<stdio.h>
int main(){
  int score[]={23,4,52,71,78,34,58,11};
  int min=score[0];
int max=score[0];
int length=sizeof(score)/sizeof(score[0]);
for(int i=0;i<length;i++)
  {
  if(score[i]>max)
    max=score[i];
  if(score[i]<min)
    min=score[i];
  }
printf("minimun score is %d\n",min);
printf("maximum score is %d",max);
return 0;
}
