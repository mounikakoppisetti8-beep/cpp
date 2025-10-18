#include <stdio.h>
int main() {
    int n;
    int at[10], bt[10], ct[10], tat[10], wt[10];
    float totaltat = 0, totalwt = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("\nEnter the Arrival Time (AT) and Burst Time (BT) of each process\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("AT: ");
        scanf("%d", &at[i]);
        printf("BT: ");
        scanf("%d", &bt[i]);
    }
    if (at[0] > 0)
        ct[0] = at[0] + bt[0];
    else
        ct[0] = bt[0];
    tat[0] = ct[0] - at[0];
    wt[0] = tat[0] - bt[0];
    for (int i = 1; i < n; i++) {
        if (at[i] > ct[i - 1])
            ct[i] = at[i] + bt[i]; 
        else
            ct[i] = ct[i - 1] + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);
        totaltat += tat[i];
        totalwt += wt[i];
    }
    printf("\nAverage Turnaround Time = %.2f", totaltat / n);
    printf("\nAverage Waiting Time = %.2f\n", totalwt / n);
    return 0;
}
