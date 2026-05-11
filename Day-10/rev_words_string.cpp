class Solution {
public:
    string reverseWords(string s) {

        string temp = "";

        int i = s.size() - 1;

        while(i >= 0) {

            // Skip spaces
            while(i >= 0 && s[i] == ' ')
                i--;

            int j = i;

            // Find word
            while(i >= 0 && s[i] != ' ')
                i--;

            // Add word
            if(j >= 0) {

                temp += s.substr(i + 1, j - i);

                temp += ' ';
            }
        }

        // Remove extra last space
        if(temp.size() > 0)
            temp.pop_back();

        return temp;
    }
};
