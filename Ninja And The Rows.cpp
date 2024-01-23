//https://www.codingninjas.com/studio/problem-of-the-day/easy?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h> 
int maximumWeightRow(int n, int m, vector<vector<int>> &mat) {
    // Write your code here.
    int ans=0;
    for(int i = 0 ; i < n ; i++){
        ans = max(ans,accumulate(mat[i].begin(),mat[i].end(),0));
    }
    return ans;
}
