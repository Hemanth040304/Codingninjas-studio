//https://www.codingninjas.com/studio/problems/power-of-two_893061?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


bool isPowerOfTwo(int n)
{	
    // Write your code here.
    if(__builtin_popcount(n)==1)return true;
    return false;
}
