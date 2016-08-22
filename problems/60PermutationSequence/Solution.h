//
// Created by breeze on 2016/8/22.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include<algorithm>
#include <string>

using std::vector;
using std::string;

int const factorials[] { /* 0! */ 1, /* 1! */ 1, /* 2! */ 2, /* 3! */ 6, /* 4! */ 24, /* 5! */ 120, /* 6! */ 720, /* 7! */ 5040, /* 8! */ 40320, /* 9! */ 362880 };
class Solution2 {
public:
    string getPermutation(int n, int k) {


        // Available charactors '1' ~ 'n'.
        vector<char> chars(n);
        for (int i = 0; i < n; i++)
        {
            chars[i] = char('1' + i);
        }

        string result;
        --k;

        // Calculate the digit on each position.
        for (int i = 0; i < n; i++)
        {
            // Get the index of the digit in available digits set.
            int idx = k / factorials[n-i-1];

            // Add the digit to result string.
            result.push_back(char('1' + idx));

            // Remove the digit from available digits set.
            chars.erase(chars.begin() + idx);

            // Adjust 'k'.
            k %= factorials[n - i - 1];
        }

        return result;
    }

};

class Solution {
public:
    string getPermutation(int n, int k) {

        //话费的时间还是比较的长的
        vector<int> __factorials(n);
        __factorials[0] = 1;
        for(int i = 1; i < n;i ++)
        {
            __factorials[i] = factorials[i-1]*i;
        }
        // Available charactors '1' ~ 'n'.
        vector<char> chars(n);
        for (int i = 0; i < n; i++)
        {
            chars[i] = char('1' + i);
        }

        string result;
        --k;

        // Calculate the digit on each position.
        for (int i = 0; i < n; i++)
        {
            // Get the index of the digit in available digits set.
            int idx = k / __factorials[n-i-1];

            // Add the digit to result string.
            result.push_back(char('1' + idx));

            // Remove the digit from available digits set.
            chars.erase(chars.begin() + idx);

            // Adjust 'k'.
            k %= __factorials[n - i - 1];
        }

        return result;
    }

};


#endif //LEETCODE_SOLUTION_H
