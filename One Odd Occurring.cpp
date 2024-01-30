//https://www.codingninjas.com/studio/problem-of-the-day/easy?leftPanelTabValue=PROBLEM

int missingNumber(int n, vector<int> &arr){
    // Write your code here.
    int x=arr[0];
    for(int i = 1; i <arr.size() ; i++)x^=arr[i];
    return x;
}
