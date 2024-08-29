// https://www.naukri.com/code360/problem-of-the-day/easy?leftPanelTabValue=PROBLEM
// potd Easy of 29th August 2024
#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int temp = num;
    int cnt = 0;
    while (temp) {
        temp /= 10;
        cnt++;
    }

    temp = num;

    int ans = 0;
    while (num) {
        ans += pow(num % 10 , cnt);
        num /= 10;
    }
    return temp == ans;
}
