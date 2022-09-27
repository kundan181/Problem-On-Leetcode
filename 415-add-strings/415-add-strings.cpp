/*
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int i1 = num1.size() - 1, i2 = num2.size() - 1, carry = 0;
        while (i1 >= 0 || i2 >= 0 || carry > 0) {
            if (i1 >= 0) {
                carry += num1[i1] - '0';
                i1 -= 1;
            }
            if (i2 >= 0) {
                carry += num2[i2] - '0';
                i2 -= 1;
            }
            ans += char(carry % 10 + '0');
            carry /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

*/
class Solution
{
    public:
    string addStrings(string num1, string num2) {
    int sum = 0, i = num1.length() - 1, j = num2.length() - 1;
    string str;
    while (i >= 0 || j >= 0 || sum > 0) {
        if (i >= 0) sum += (num1[i--] - '0');
        if (j >= 0) sum += (num2[j--] - '0');
        str.insert(0, 1, (sum % 10) + '0');
        sum /= 10;
    }
    return str;
}
};