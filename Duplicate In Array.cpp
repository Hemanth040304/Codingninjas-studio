//https://www.codingninjas.com/studio/problem-of-the-day/easy?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr) {
    // Write your code here
	int sumOfArr = accumulate(arr.begin(), arr.end(), 0);
    int n = arr.size() - 1;
    int actualSum = n * (n + 1) / 2;
    return abs(actualSum - sumOfArr);
}
