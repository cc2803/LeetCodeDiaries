//BEST (time wise)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<std::pair<int, int>> nums_order(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
             nums_order[i] = std::make_pair(nums[i], i);
        }
        std::sort(nums_order.begin(), nums_order.end(), 
            [](std::pair<int, int> a, std::pair<int, int> b)
            {
                return a.first < b.first;
            });
        int lower = 0, higher = nums.size() - 1;
        while (lower != higher) {
            int sum = nums_order[lower].first + nums_order[higher].first;
            if (sum == target) {
                return std::vector<int>{nums_order[lower].second, 
                                        nums_order[higher].second};
            }
            else if (sum < target) {
                lower++;
            }
            else {
                higher--;
            }
        }
        return std::vector<int>(2, 0);  // should not reach here
    }
};



//TOP (memory wise)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
