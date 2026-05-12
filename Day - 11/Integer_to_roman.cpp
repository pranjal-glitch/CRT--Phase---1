#include <bits/stdc++.h> 
string intToRoman(int num) {
    // Write your code here.
    vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> romanLetters = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        string roman = "";

        for(int i = 0; i < val.size(); i++){
            while(num >= val[i]){
                roman += romanLetters[i];
                num -= val[i];
            }
        }
        return roman;
}

