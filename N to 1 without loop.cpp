//https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


void fun(vector<int>&ans,int x){
    if(x<1)return;
    ans.emplace_back(x);
    fun(ans,x-1);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    fun(ans,x);
    return ans;
}
