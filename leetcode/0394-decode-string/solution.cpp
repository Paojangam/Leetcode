class Solution {
public:
    string decodeString(string s) {
        stack<int>counts;
       stack<string>resultStack;
       string result="";
       int num;
        
        for(char ch: s){
            if(isdigit(ch)){
            num=num*10+(ch-'0');
            }
            else if(ch=='['){
                counts.push(num);
                resultStack.push(result);
                num=0;
                result="";
            }else if(ch==']'){
                string temp=result;
                result= resultStack.top();
                resultStack.pop();
                int count =counts.top();
                counts.pop();
                while(count-- >0){
                    result+=temp;
                }


            }else{
                result+=ch;
            }
        }
        return result;
    }
};
