class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		std::unordered_map<int, int> recordMap;
		auto&& numsSize = nums.size();

		for (auto i = 0; i < numsSize; ++i)
		{
			int& num = nums[i];
			int&& toFind = target - num;
			if (recordMap.find(toFind) != recordMap.end())
			{
				return {recordMap[toFind], i};
			}
			else
			{
				recordMap[num] = i;
			}
		}

		return {};
	}
};
