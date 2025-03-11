class Solution {
public:
    int countDigits(int num) {
     int temp=num;
     int count=0;
     while(temp>0){
        int degit= temp%10;
        if(num%degit==0) count++;
        temp/=10;
     }
     

       return count; 
    }
};
