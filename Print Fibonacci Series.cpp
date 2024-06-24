//https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

void fun(int f,int s,int t,vector<int>&ans,int n,int c){
    if(c==n)return;
    t = s+f;
    f = s;
    s = t;
    ans.emplace_back(s);
    fun(f,s,t,ans,n,c+1);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    if(n==1)return {0};
    if(n==2)return {0,1};
    vector<int>ans;
    int f=0,s=1,t=s+f;
    ans.emplace_back(f);
    ans.emplace_back(s);
    fun(f,s,t,ans,n,2);
    return ans;
}


// dp approach

int fib(int n, vector<int> &dp){
    if(n == 0 || n == 1) return n;
    if(dp[n] != -1) return dp[n];

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);

    return dp[n];
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>arr;
    vector<int>dp(n+1,-1);

    for(int i = 0; i < n; i++){
        int x = fib(i,dp);
        arr.emplace_back(x);
    }
    
    return arr;
}
