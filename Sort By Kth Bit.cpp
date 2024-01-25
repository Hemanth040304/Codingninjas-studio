//https://www.codingninjas.com/studio/problem-of-the-day/easy?leftPanelTabValue=PROBLEM

vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<int>z;
    vector<int>o;
    for(auto it:arr){
        if(it&(1<<k-1))o.emplace_back(it);
        else z.emplace_back(it);
    }
    while(o.size()){
        z.emplace_back(o[0]);
        o.erase(o.begin(),o.begin()+1);
    }
    return z;
}
