//https://www.codingninjas.com/studio/problem-of-the-day/easy

#include <bits/stdc++.h> 
int findProductSumDifference(int n){
	// Write your code here
	int s = 0, p = 1;
	while(n){
		int t = n%10;
		s += t;
		p *= t;
		n /= 10;
	}
	return p-s;
}
