//https://www.codingninjas.com/studio/problem-of-the-day/easy

#include <bits/stdc++.h> 
void rearrangeArray(int arr[], int n)
{
	// Write your code here
	int copy[n];
	for(int i = 0 ; i < n ; i++){
		copy[i]=arr[i];
	}
	for(int i = 0 ; i < n ; i++){
		arr[i] = copy[copy[i]];
	}
}


//best approach
#include <bits/stdc++.h> 
void rearrangeArray(int arr[], int n)
{
	// Write your code here
	for(int i = 0 ; i < n ; i++){
		arr[i] = arr[i] + (arr[arr[i]]%n) * n;
	}
	for(int i = 0 ; i < n ; i++){
		arr[i]/=n;
	}
}
