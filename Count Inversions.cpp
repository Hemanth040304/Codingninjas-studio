//https://www.codingninjas.com/studio/problems/count-inversions_615?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]) ans++;
        }
    }
    return ans;
}
