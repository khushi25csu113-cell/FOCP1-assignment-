#include<stdio.h>
int main(){
  int marks[]={23,55,67,34,89,99,90,99,92,99};
  int length=sizeof(marks)/sizeof(marks[0]);
  int count=0;
  for( int i=0;i<length;i++)
    {
      if (marks[i]==99)
      {
        printf("%d\n",i+1);
        count++;
      }
    }
  printf("total number of students who got 99 are %d",count);
  return 0;
}
