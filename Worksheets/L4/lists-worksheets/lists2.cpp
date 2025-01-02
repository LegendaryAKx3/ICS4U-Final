#include <iostream>
using namespace std;
#include <vector>

// 02.01.02

int main(){
    vector<int> nums = {1,2,3,4,5};
    int input;
    cout << "Input: ";
    cin >> input;

    nums[2] = input;
    for (const auto& num : nums){
        cout << num << endl;
    }

    return 0;
}