//
// Created by breeze on 2016/8/22.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include<algorithm>
using std::vector;

class Solution1 {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        _input = nums;
        _tmp.clear();
        _output.clear();
        backtrack(0);
        return _output;
    }

protected:
    void backtrack(int pos)
    {
        if(pos==_input.size()){
            _output.push_back(_tmp);
            return ;
        }
        for (int i = 0; i<_input.size();i++)
        {
            //如果某一个数字未被使用，则增加到这个数字之后
            if(find(_tmp.begin(),_tmp.end(),_input[i]) == _tmp.end())
            {
                _tmp.push_back(_input[i]);
                backtrack(pos+1);
                _tmp.pop_back();
            }
        }
    }
protected:
    vector<int> _input;
    vector<vector<int>> _output;
    vector<int> _tmp;
};


#endif //LEETCODE_SOLUTION_H
