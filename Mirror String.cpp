//https://www.naukri.com/code360/problem-of-the-day/easy?leftPanelTabValue=PROBLEM
// potd 5th MAY 2024
#include <bits/stdc++.h> 

bool pal(string s){
	int i = 0, j = s.size() - 1;
	while(i <= j){
		if(s[i] != s[j])return false;
		i++;
		j--;
	}
	return true;
}

bool isReflectionEqual(string &s)
{
	// Write your code here.
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] =='F' 
		  || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'N' || s[i] == 'P' ||
		 s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'Z') return false;
	}
	return pal(s);
}
