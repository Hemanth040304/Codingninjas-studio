//https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


void fun(vector<string>&ans,int n, int x){
	if(x>n)return;
	ans.emplace_back("Coding Ninjas");
	fun(ans,n,x+1);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string>ans;
	fun(ans,n,1);
	return ans;
	
}
