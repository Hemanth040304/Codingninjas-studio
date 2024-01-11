//https://www.codingninjas.com/studio/contests/weekly-contest-108/10930214/problems/29718?leftPanelTabValue=PROBLEM&customSource=studio_nav


int canSheUnsort(int n, vector<int> v) {
    // Write your code here.
    if(n<3)return 0;
    int ans=0;
    for(int i = 0 ; i < n-2 ; i++){
        if(v[i]+v[i+1]>v[i+2]){
            ans=1;
            break;
        }
    }
    return ans;
}
