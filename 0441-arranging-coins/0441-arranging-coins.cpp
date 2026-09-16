class Solution {
public:
    int arrangeCoins(int n) {
         int start = 0;
       int end = n;
        long mid;
    while(start<=end){
         mid = start + (end-start)/2;

        long long k = mid*( mid + 1) /2;
        
        if(n == k) return mid;
        else if(n > k) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
return end;
    }
    
};