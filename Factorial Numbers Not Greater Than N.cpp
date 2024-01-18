//https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


void fun(vector<long long>&ans,long long n,long long x,long long a){
    if(a>n)return;
    a*=x;
    if(a<=n)ans.emplace_back(a);
    fun(ans,n,x+1,a);
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long>ans;
    fun(ans,n,1,1);
    return ans;
}
