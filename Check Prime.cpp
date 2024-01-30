//https://www.codingninjas.com/studio/problems/check-prime_624934?topList=ninjas-sde-sheet&problemListRedirection=true&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
int prime(int n){
	if(n<2)return 0;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0)return 0;
	}
	return 1;
}

bool isPrime(int n)
{
	// Write your code here.
	return prime(n);
}
