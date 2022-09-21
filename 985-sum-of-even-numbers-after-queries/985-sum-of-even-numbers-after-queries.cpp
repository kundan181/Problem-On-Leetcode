class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries);
};

/* Returns the sum after applying the queries at each point */
vector<int> Solution :: sumEvenAfterQueries(vector<int>& arr, vector<vector<int>>& queries)
{
    // Accumulate the entire even sum
    int sum = 0;
    for(auto ele:arr)
        if(ele%2==0) sum +=ele;
    
    // Vector to store the answer of each query
    vector<int> answer;
    
    // Traverse the query and update the sum
    for(auto row_vec:queries)
    {
        // Get the value to be added and the index which is modified
        int extra = row_vec[0];
        int index = row_vec[1];
        
        // Make a back up of the old value
        int oldValue = arr[index];
        
        // Update the value
        arr[index] +=extra;
        int newValue = arr[index];
        
        // If the old value was even, and it remains even, just pick up the extra
        if(oldValue%2==0 && newValue%2==0) sum+=extra;
        
        // If the old value was odd, nd now it has become even, pick up the whole entry
        else if(oldValue%2!=0 && newValue%2==0) sum+=newValue;
        
        // If the old Value was even, and now it has become odd, drop the old value from sum
        else if(oldValue%2==0 && newValue%2!=0) sum-=oldValue;
        
        // If the old value was odd and new value is also odd, do nothing
        
        // Update the sum
        answer.push_back(sum);
    }
    
    // Return the stored answer;
    return answer;
}