//https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957?topList=ninjas-sde-sheet&problemListRedirection=true&leftPanelTabValue=PROBLEM


int isSorted(int n, vector<int> a) {
    // Write your code here.
    int c=0;
    for(int i = 0 ; i < n-1 ; i++){
        if(a[i]<=a[i+1])c++;
    }
    return c==n-1;
}
