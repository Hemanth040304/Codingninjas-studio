// https://www.naukri.com/code360/problem-of-the-day/easy
// potd of 18 April 2024


#include <bits/stdc++.h> 

int self(int n) {
    int t = n;
    int d = 0, div = 0;
    while (t) {
        int dig = t % 10;

        if (dig > 0 and n % dig == 0) div++;
        d++;

        t /= 10;
    }

    return d == div;
}

vector < int > findAllSelfDividingNumbers(int lower, int upper) {
    // Write your code here
    vector<int> ans;

    for (int i = lower; i <= upper; i++) {
        if (self(i)) ans.emplace_back(i);
    }

    return ans;
}
