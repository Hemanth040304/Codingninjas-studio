//https://www.codingninjas.com/studio/contests/weekly-contest-108/10930214/problems/29717


int numberOfGoodCharacters(int n, string s) {
    // Write your code here.
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')ans++;
        else{
            if(i==0){
                if(s[i+1]=='a' or s[i+1]=='e' or s[i+1]=='i' or s[i+1]=='o' or s[i+1]=='u')ans++;
            }
            else if(i==n-1){
                if(s[i-1]=='a' or s[i-1]=='e' or s[i-1]=='i' or s[i-1]=='o' or s[i-1]=='u')ans++;
            }
            else if((s[i-1]=='a' or s[i-1]=='e' or s[i-1]=='i' or s[i-1]=='o' or s[i-1]=='u') or (s[i+1]=='a' or s[i+1]=='e' or s[i+1]=='i' or s[i+1]=='o' or s[i+1]=='u'))ans++;
        }
    }
    return ans;
}
