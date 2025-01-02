#include <iostream>
using namespace std;
#include <vector>

// 02.01.01

int main(){

    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    for (const auto& num : nums){
        cout << num << endl;
    }
    return 0;
}