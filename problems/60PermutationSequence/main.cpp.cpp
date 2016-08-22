//
// Created by breeze on 2016/8/22.
//

#include "Solution.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
    Solution s;
    //不要跑
    for(int i = 0; i < 9; ++i)
        for(int j = 0; j < factorials[i]; ++j)
            cout << i <<  " "  << j << ":" <<   s.getPermutation(i,j);

    return 0;

}
