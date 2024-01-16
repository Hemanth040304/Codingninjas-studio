//https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


void Nsum(long long &ans, long long n, long long x){
    if(x>n)return;
    ans+=x;
    Nsum(ans,n,x+1);
}

long long sumFirstN(long long n) {
    // Write your code here.
    long long ans=0;
    Nsum(ans,n,1);
    return ans;
}
