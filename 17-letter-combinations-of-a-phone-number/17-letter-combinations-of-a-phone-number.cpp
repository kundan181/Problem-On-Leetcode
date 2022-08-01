#define vvc vector<vector<char>>
#define vs vector<string>

class Solution {
public:
	
	vs answer;
	
	int n;
	vvc keys{{},
			{},
			{'a', 'b', 'c'},
			{'d', 'e', 'f'},
			{'g', 'h', 'i'},
			{'j', 'k', 'l'},
			{'m', 'n', 'o'},
			{'p', 'q', 'r', 's'},
			{'t', 'u', 'v'},
			{'w', 'x', 'y', 'z'}};
	
	void dfs(string& digits, int id, string current) {
		if (id == n) {    
			answer.push_back(current);
			return;
		}
		
		for (char c : keys[-48 + digits[id]]) {
			dfs(digits, id + 1, current + c);
		}
	}
	
	vs letterCombinations(string digits) {
		n = digits.size();
		
		if (!n)
			return {};
		
		dfs(digits, 0, "");
		
		return answer;
	}
};