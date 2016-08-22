//
// Created by breeze on 2016/8/22.
//

#include "Solution.h"
#include <iostream>

using std::cout;
using std::endl;

void output(vector<vector<int>> res){
    for( auto a = res.begin(); a != res.end();a++){ //for(auto a:res){
        cout<< "[" ;
        for(auto b = a->begin(); b != a->end(); ++b)
        {
            cout << *b << ",";
        }
        cout <<  "]" << endl;

    }

    for(int i = 0; i < res.size(); ++i)
    {
        cout<< "[";
        for(int j = 0; j < res[i].size(); ++j)
        {
            cout << res[i][j] << ",";
        }
        cout << "]" << endl;
    }
}

int main(int argc, char **argv)
{
    Solution1 s;
    vector<int> test = {1,2,3,4,5,6,7};
    vector<vector<int>> res = s.permute(test);
    output(res);
    return 0;

}
