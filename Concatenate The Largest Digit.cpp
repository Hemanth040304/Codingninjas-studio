// https://www.naukri.com/code360/problem-of-the-day/easy?leftPanelTabValue=PROBLEM
// 17th July 2024

#include <bits/stdc++.h> 
int concatLargestDigit(int a, int b, int c) {
    // Write your code here
    int ans = 0;
    int maxi = 0;

    while (a) {
        maxi = max(maxi, a %10);
        a /= 10;
    }

    ans = ans * 10 + maxi;
    maxi = 0;

    while (b) {
        maxi = max(maxi, b %10);
        b /= 10;
    }

    ans = ans * 10 + maxi;
    maxi = 0;

    while (c) {
        maxi = max(maxi, c %10);
        c /= 10;
    }

    ans = ans * 10 + maxi;

    return ans;
}
