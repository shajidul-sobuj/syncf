/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 263A - Beautiful_Matrix
 * Link: https://codeforces.com/contest/263/problem/A
 * Submission ID: 348899005
 * Language: GNU C11
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: Fri, 14 Nov 2025 13:55:24 GMT
 */

#include <stdio.h>

int main()
{
    int n=5;
    int a[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int x,y;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (a[i][j]!=0) {
                x=i;
                y=j;
                break;
            }
        }
    }
    int c_r;
    int c_c;
    if (x<=2) {
        c_r=2-x;
    }else {
        c_r=x-2;
    }
    if (y<=2) {
        c_c=2-y;
    }else {
        c_c=y-2;
    }
    int move=c_c+c_r;
    printf("%d\n",move);
    return 0;
}