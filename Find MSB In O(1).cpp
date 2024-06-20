// 20th June 2024

#include <bits/stdc++.h> 
int findMSB(int n){
	// Write your code here
	int ans = 1, p = ans;
	while(p <= n){
		p <<= 1;
		if(p <= n) ans = p;
	}
	return ans;
}
