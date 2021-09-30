class Solution {
public:
    int minSwaps(string s) {
        
        int c=0;
        int maxi=INT_MAX;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
                c++;
            }
            else{
                c--;
            }
            maxi=min(maxi,c);
        }
        maxi=abs(maxi);
        
        return (maxi%2==0 ? maxi/2 : (maxi/2)+1);
    }
};
