//https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


void fun(vector<int>&nums,int n,int x){
    if(x>=(n/2))return;
    swap(nums[x],nums[n-x-1]);
    fun(nums,n,x+1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    fun(nums,n,0);
    return nums;
}
