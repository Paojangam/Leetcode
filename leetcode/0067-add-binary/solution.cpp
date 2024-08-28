class Solution {
public:
    string addBinary(string a, string b) {
        
     string temp;
    int carry =0;
    int max_length= max(a.length(),b.length());// finding the max length among them
    for(int i=0;i<max_length;i++){
    int bitA=(i < a.length()) ? a[a.length()-1-i]-'0':0;
    int bitB=(i < b.length()) ? b[b.length()-1-i]-'0':0;

    int sum=bitA^bitB^carry;
    temp+=sum+'0';
    carry=(bitA & bitB | carry & (bitA^bitB));
    }
        
    if(carry){
        temp+='1'; }

         reverse(temp.begin(), temp.end());

        return temp;
    }
    
};


