// https://www.naukri.com/code360/problem-of-the-day/hard?leftPanelTabValue=PROBLEM
// 29 July 2024 Hard

void helper(int open, int close, int n, string s) {
    if (n < open || n < close) return;
    if (n == open and n == close) {
        for (char c : s) cout << c;
        cout << "\n";
        return;
    }

    if (open < n)helper(open + 1, close, n, s + '(');
    if (open > close) helper(open, close + 1, n, s + ')');
}

void printWellFormedParanthesis(int n) {
    // Write your code here
    helper(0, 0, n, "");
}
