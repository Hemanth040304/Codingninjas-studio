// 15th June 2024

#include <bits/stdc++.h> 
int findFirstRepeatingDigit(string digitPattern) {
    // Write your code here.
    unordered_map<char, int> ump;
    for (auto it : digitPattern) {
        ump[it]++;
        if (ump[it] > 1) return it - 48;
    }

    return -1;
}
