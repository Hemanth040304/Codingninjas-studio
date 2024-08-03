// https://www.naukri.com/code360/problems/loot-houses_630510?count=25&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&page=1

int maxMoneyLooted(vector<int> &houses, int n) {
	if (n == 1) return houses[0];

	vector<int> dp(n, 0);

	dp[0] = houses[0];
	dp[1] = max(houses[0], houses[1]);

	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 1], houses[i] + dp[i - 2]);
	}

	return dp[n - 1];
}
