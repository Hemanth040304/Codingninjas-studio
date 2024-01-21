//https://www.codingninjas.com/studio/problem-of-the-day/easy


#include <bits/stdc++.h> 
vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n) {
    // Write your code here.
    vector<vector<int>>ans;
    for(int i = 0 ; i < n ; i++){
        vector<int>t;
        for(int j = n-1 ; j > -1 ; j--){
            if(a[i][j]==1)t.emplace_back(0);
            else t.emplace_back(1);
        }
        ans.emplace_back(t);
        t.clear();
    }
    return ans;
}
