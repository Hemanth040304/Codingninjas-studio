// https://www.naukri.com/code360/problem-of-the-day/easy?leftPanelTabValue=PROBLEM

string reverseOrderWords(string str) {
    // Write your code here
    string ans = "", store = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') store += str[i];
        else {
            ans = store + " " + ans;
            store = "";
        }
    }
    if (store != "") return store + " " + ans;
}
