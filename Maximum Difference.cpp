//https://www.codingninjas.com/studio/problem-of-the-day/easy?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h> 
string maximumDifference(int n, vector<int>& arr)
{
	// Write your code here.
	int maxi = *max_element(arr.begin(),arr.end());
	int mini = *min_element(arr.begin(),arr.end());
	if((maxi%2 and mini%2)or(maxi%2==0 and mini%2==0))return "EVEN";
	return "ODD";
}
