#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); ++i) {

            for (int j = i + 1; j < nums.size(); ++j) {

                if (nums[i] + nums[j] == target) {

                    return {i, j};

                }
            }
        }

        return {};
    }
};

int main() {

    Solution s;

    vector<int> nums = {2,7,11,15};

    vector<int> result = s.twoSum(nums, 9);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}