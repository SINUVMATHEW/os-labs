#include <stdio.h>
int main() {
  int i,j,n,temp,pr[30],bt[30],wt[30],tat[30];
  float awt=0,atat=0;
  printf("enter the number of processes");
  scanf("%d",&n);
  printf("enter the process number");
  for(i=0;i<n;i++)
  {
    scanf("%d",&pr[i]);
  }
  printf("enter the burst time of process");
  for(i=0;i<n;i++)
  {
    scanf("%d",&bt[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(bt[j]>bt[j+1])
       {
        temp=bt[j];
        bt[j]=bt[j+1];
        bt[j+1]=temp;

        temp=pr[j];
        pr[j]=pr[j+1];
        pr[j+1]=temp;
      }
    }
  }
  printf("process\t burst time\t waiting time\t tat\n");
  for(i=0;i<n;i++)
  { 
    for(j=0;j<i;j++)
    {
      wt[i]=wt[i]+bt[j];
    }
      tat[i]=wt[i]+bt[i];
      awt=awt+wt[i];
      printf("%d\t\t %d\t\t %d\t\t %d\n",pr[i],bt[i],wt[i],tat[i]);
  }
  awt=awt/n;
  atat=atat/n;
}
