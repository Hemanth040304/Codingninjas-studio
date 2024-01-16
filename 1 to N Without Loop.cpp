//https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


void fun(vector<int>&v, int x, int n){
    if(n>x)return;
    v.emplace_back(n);
    fun(v,x,n+1);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    fun(ans,x,1);
    return ans;
}
