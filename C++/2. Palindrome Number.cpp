class Solution {
public:
    bool isPalindrome(int x){
        long long int res =0;
    int m=x;
    while(x>0){
        res *= 10;
        res += x % 10;
        x /= 10;}
    if(m==res){
        return true;}
    else{
        return false;}}};
