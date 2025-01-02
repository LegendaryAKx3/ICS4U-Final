#include <iostream>
using namespace std;
#include <vector>

// 02.02.03

int main(){

    vector<int> nums = {};
    int input;
    cout << "Input: ";
    cin >> input;
    while (input != 0){
        nums.push_back(input);
        cout << "Input: ";
        cin >> input;
    }

    for(int i = 0; i < nums.size(); i++){
        if (nums[i] < 0){
            nums[i] = nums[i] * -1;
        }
    }

    for (const auto& num : nums){
        cout << num << endl;
    }

    return 0;
}