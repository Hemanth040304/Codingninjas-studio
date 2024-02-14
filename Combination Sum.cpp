//https://www.codingninjas.com/studio/problems/combination-sum_981296?leftPanelTabValue=PROBLEM

void FindCombinations(int ind, vector<int> &ARR, vector<vector<int>> &ans, vector<int> ds, int target){
    if(ind == ARR.size()){
        if(target ==0)ans.emplace_back(ds);
        return;
    }
    if(ARR[ind] <= target){
        ds.emplace_back(ARR[ind]);
        FindCombinations(ind, ARR, ans, ds, target - ARR[ind]);
        ds.pop_back();
    }
    FindCombinations(ind+1, ARR, ans, ds, target);
}

vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    // Write your code here.
    sort(ARR.begin(), ARR.end());
    vector<vector<int>> ans;
    vector<int>ds;
    FindCombinations(0,ARR, ans, ds, B);
    return ans;
}
