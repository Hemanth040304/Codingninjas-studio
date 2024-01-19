//https://www.codingninjas.com/studio/problems/reading_6845742?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(book[i]+book[j]== target and i!=j)return "YES";
        }
    }
    return "NO";
}
