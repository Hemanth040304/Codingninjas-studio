//https://www.codingninjas.com/studio/guided-paths/data-structures-algorithms/content/118522/offering/1380922?goalRedirection=true&leftPanelTabValue=PROBLEM&customSource=studio_nav

#include<bits/stdc++.h>
void Print(int ind,int n, string &digits, string &s, vector<string>&ans,map<char,string>&mp){
        if(ind==n){
            ans.emplace_back(s);
            return ;
        }
        for(auto it:mp[digits[ind]]){
            s.push_back(it);
            Print(ind+1,n,digits,s,ans,mp);
            s.pop_back();
        }
    }

vector<string> combinations(string digits) {
    // Write your code here.
    map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        if(digits.size()==0)return {};
        string s;
        vector<string>ans;
        Print(0,digits.size(),digits,s,ans,mp);
        return ans;
}
