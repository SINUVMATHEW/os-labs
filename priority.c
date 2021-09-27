#include <stdio.h>
int main() {
  int i,j,n,temp,bt[20],wt[20],tat[20],pr[20],pos;
  float awt=0,atat=0;
  printf("enter the number of process");
  scanf("%d",&n);
  printf("enter the burdt time");
  for(i=0;i<n;i++) {
    scanf("%d",&bt[i]);
  }
  printf("enter the priority");
  for(i=0;i<n;i++) {
    scanf("%d",&pr[i]);
  }
  for(i=0;i<n;i++){
    pos=i;
    for(j=i+1;j<n;j++){
      if(pr[j]<pr[pos]){
        pos=j;
      }
    }
temp=pr[i];
pr[i]=pr[pos];
pr[pos]=temp;

temp=bt[i];
bt[i]=bt[pos];
bt[pos]=temp;
  }
  
  wt[0]=0;
  printf("\nprocess\t\tbt\t\tpriority\t\twt\t\ttat\n");
  for(i=0;i<n;i++){
  wt[i]=0;
  tat[i]=0;
  for(j=0;j<i;j++){
    wt[i]=wt[i]+bt[j];
  }
  tat[i]=wt[i]+bt[i];
  awt=awt+wt[i];
  atat=atat+tat[i];
  printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t",i+1,bt[i],pr[i],wt[i],tat[i]);
  }
}