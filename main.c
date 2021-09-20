#include <stdio.h>
  {
  int i,j,n,wt[30],tat[30],bt[30],at[30],temp[30];
  float awt=0,atat=0;
  printf("enter the no of process");
  scanf("%d",&n);
  printf("enter the burst time of the porcess");
  for(i=0;i<n;i++)
  {
    scanf("%d",&bt[i]);
    printf("enter the arrival time of the process");
  }
    for(i=0;i<n;i++)
    {
      scanf("%d",&at[i]);
      temp[i]=0;
      printf("process\t bursttime\t arrival time\t waiting time\t tat\n");
      for(i=0;i<n;i++)
       wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],at[i],wt[i],tat[i]);
        
            }
            awt=awt/n;
            atat=atat/n;
            printf("awt=%f",awt);
            printf("atat=%f",atat);
}