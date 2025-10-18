#include <stdio.h>

int main() {
    int n;
    int at[10], bt[10], ct[10], tat[10], wt[10], pid[10], completed[10] = {0};
    float totaltat = 0, totalwt = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("Process %d:\n", pid[i]);
        printf("AT: ");
        scanf("%d", &at[i]);
        printf("BT: ");
        scanf("%d", &bt[i]);
    }

    int time = 0, completed_count = 0;

    while (completed_count < n) {
        int idx = -1;
        int min_bt = 100000;

        for (int i = 0; i < n; i++) {
            if (at[i] <= time && completed[i] == 0 && bt[i] < min_bt) {
                min_bt = bt[i];
                idx = i;
            }
        }

        if (idx != -1) {
            ct[idx] = time + bt[idx];
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];
            completed[idx] = 1;
            completed_count++;
            time = ct[idx];
        } else {
            time++; // If no process is ready, CPU is idle
        }
    }

    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
        totaltat += tat[i];
        totalwt += wt[i];
    }

    printf("\nAverage Turnaround Time = %.2f", totaltat / n);
    printf("\nAverage Waiting Time = %.2f\n", totalwt / n);

    return 0;
}

