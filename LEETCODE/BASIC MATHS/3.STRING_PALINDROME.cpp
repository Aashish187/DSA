class Solution
{
public:
    bool isPalindrome(string s)
    {
        // Storing the string with only alphanumeric characters
        string result = ""; 
        for (char ch : s)
        {
            // Function for checking alphanumeric characters
            if (isalnum(ch))
            {
                // converts uppercase to lowercase and then add to result
                result += tolower(ch);
            }
        }
        int left = 0, n = result.size(), right = n - 1;
        // Stops if the left pointer exceeds right pointer
        while (left < right) 
        {
            // if the elements are not equal it returns false
            if (result[left] != result[right])
            {
                return false;
            }
            // Updates the pointer 
            left++;
            right--;
        }
        //Returns true if the condition inside while loop is not satisfied.
        return true;
    }
};
