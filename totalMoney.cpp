class Solution {
public:
    int totalMoney(int n) {
        int week = n/7,extra = n%7,ans = 0,temp = 0;
        for(int i=1;i<=7;++i){
            ans += ((week+i-1)*(week+i)/2) - temp;
            if(i <= extra)  ans += week+1+i-1;
            temp += i; 
        }
        return ans;
    }
};
