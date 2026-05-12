class Solution {
public:
    int strStr(string haystack, string needle) {

        // If needle bigger than haystack
        if(needle.size() > haystack.size()) {
            return -1;
        }

        // Traverse possible starting indexes
        for(int i = 0; i <= haystack.size() - needle.size(); i++) {

            if(haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }

        return -1;
    }
};
