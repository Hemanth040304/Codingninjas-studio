//https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


//approach 1
/*void fun(string &str,int n,int i){
    if(i>=(n/2))return;
    swap(str[i],str[n-i-1]);
    fun(str,n,i+1);
}

bool isPalindrome(string& str) {
    // Write your code here.
    string ne=str;
    fun(str,str.size(),0);
    return ne==str;
}*/



//approach 2

void fun(string &str,int &c,int n,int i){
    if(i>=(n/2))return;
    if(str[i]==str[n-i-1])c++;
    fun(str,c,n,i+1);
}

bool isPalindrome(string& str){
    //Write your code here.
    int c=0;
    fun(str,c,str.size(),0);
    if(str.size()%2==0)return c==str.size()/2;
    else return (str.size()-1)/2==c;
}

