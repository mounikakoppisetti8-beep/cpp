#include <stdio.h>
#include <stdlib.h>

// Binary search: returns number of elements strictly less than key
int upper_bound(long long *arr, int size, long long key) {
    int left = 0, right = size;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        long long x, y;
        scanf("%d %d %lld %lld", &n, &m, &x, &y);

        long long *a = (long long*)malloc(n * sizeof(long long));
        long long *b = (long long*)malloc(m * sizeof(long long));

        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
        for (int i = 0; i < m; i++) scanf("%lld", &b[i]);

        long long min_cross = n + m; // worst case

        // Try moving just above each horizontal laser
        for (int i = 0; i < n; i++) {
            long long h = a[i];
            int vertical_cross = upper_bound(b, m, x); // vertical lasers strictly < x
            long long total = 1 + vertical_cross; // horizontal laser + vertical lasers
            // check if intersection exists
            int idx = upper_bound(b, m, h);
            if (idx > 0 && b[idx-1] == h) total--; // intersection counts only once
            if (total < min_cross) min_cross = total;
        }

        // Try moving just right of each vertical laser
        for (int i = 0; i < m; i++) {
            long long v = b[i];
            int horizontal_cross = upper_bound(a, n, y); // horizontal lasers strictly < y
            long long total = 1 + horizontal_cross; // vertical laser + horizontal lasers
            int idx = upper_bound(a, n, v);
            if (idx > 0 && a[idx-1] == v) total--; // intersection
            if (total < min_cross) min_cross = total;
        }

        printf("%lld\n", min_cross);

        free(a);
        free(b);
    }

    return 0;
}

