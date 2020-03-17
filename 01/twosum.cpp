#include <headdll.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int i;
        for (i = 0; i < nums.size(); i++) {
            if (map.find(target - nums[i]) != map.end()) { // 寻找map中对应的key值
                return {map[target - nums[i]], i}; // 因为i比较大，所以i放后面
            }
            map[nums[i]] = i; // 向map中增加元素
        }
        return {};
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> nums;
    /* test0317 */
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    cout << s->twoSum(nums, 18)[0] << endl;
    cout << s->twoSum(nums, 18)[1] << endl;
    while(1);
    return 0;
}