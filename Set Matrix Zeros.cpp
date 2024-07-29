// https://www.naukri.com/code360/problems/set-matrix-zeros_3846774?interviewProblemRedirection=true&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix) {
	// Write your code here.
	queue<pair<int, int>> q;
	int m = matrix.size(), n = matrix[0].size();

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == 0) q.push({i, j});
		}
	}

	while (!q.empty()) {
		auto it = q.front();
		q.pop();

		int i = it.first, j = it.second;
		for (int k = 0; k < n; k++) matrix[i][k] = 0;
		for (int k = 0; k < m; k++) matrix[k][j] = 0;
	}
}
