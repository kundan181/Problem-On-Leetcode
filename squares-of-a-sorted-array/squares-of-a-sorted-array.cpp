class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        
   int left= 0;
   int right= v.size()-1;
   vector<int>vec;
   while(left<=right){
      while(left <= right) {
         int v1 = v[left]*v[left];
         int v2 = v[right]*v[right];
         if(v1 <= v2) {
            vec.push_back(v2);
            right--;
         }
         else {
            vec.push_back(v1);
            left++;
         }
      }
      reverse(vec.begin(), vec.end());
   }
   return vec;
    }
};