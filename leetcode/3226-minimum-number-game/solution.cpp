class Solution {
public:
    vector<int> numberGame(vector<int>& a) {
        // Sort the array
      std::sort(a.begin(),a.end());
      for(int i=0;i<a.size();i+=2){
        if(i+1<a.size()){
            swap(a[i],a[i+1]);
        }
      }

return a;
    }
};
