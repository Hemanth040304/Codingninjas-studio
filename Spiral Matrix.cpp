// https://www.naukri.com/code360/problems/spiral-matrix_840698?interviewBundleRedirection=true&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) {
    // Write your code here.
    vector<int> ans;

    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    while (left <= right and top <= bottom) {
        for (int i = left; i <= right; i++) ans.emplace_back(matrix[top][i]);
        top++;

        for (int i = top; i <= bottom; i++) ans.emplace_back(matrix[i][right]);
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) ans.emplace_back(matrix[bottom][i]);
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) ans.emplace_back(matrix[i][left]);
            left++;
        }
    }

    return ans;
}
