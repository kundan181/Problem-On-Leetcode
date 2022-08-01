class Solution {
public:
     bool validMountainArray(vector<int>& arr) {
    int max {arr.at(0)};
    int max_index{0};
        
        if (arr.size() < 3) {
            return false;
        }
        
		//finding max value's index
        for (int i = 0; i < arr.size()-1;i++) {
            if (arr.at(i) < arr.at(i+1)) {
                max_index = i+1;
            }
        }
        
		//if the max element is either first or last element, then return false
        if (max_index == arr.size()-1 || max_index == 0) {
            return false;
        }
        
        for (int j = 0; j < max_index; j++) {
            if (arr.at(j) >= arr.at(j+1)) {
                 return false;
            }
        }
        for (int k = max_index; k < arr.size()-1; k++) {
            if (arr.at(k) <= arr.at(k+1)) {
                 return false;
            }
        }
        return true;
    }
};