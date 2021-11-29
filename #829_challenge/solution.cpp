//
// Created by Nikola Vugdelija on 29/11/2021.
//

#include <iostream>
#include <cmath>

// Given an integer n, return the number of ways you can write n as the sum of consecutive positive integers.

class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int num = 0;
        int max_search_space = round(1 + sqrt(1 + 2*n));

        for(int k = 1; k < max_search_space; ++k) {
            int numerator = 2 * n - k * (k - 1);
            int denominator = 2*k;
            if(numerator && !(numerator % denominator))
                ++num;
        }
        return num;
    }
};

int main() {
    Solution s;
    std::cout << s.consecutiveNumbersSum(5);
}