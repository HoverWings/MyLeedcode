#include<iostream>
#include<vector>

using namespace std;
//where it should be inserted
class Solution 
{
public:
	int searchInsert(vector<int>& nums, int target)
	{
		int length = nums.size();
		int begin = 0;
		int end = length - 1;
		int mid = (begin + end) / 2;
		while (nums[mid] != target)
		{
			if (begin == end)//the nums only contain 1 num
			{
				if (target > nums[end])
				{
					return end + 1;
				}
				else
				{
					return end;
				}
			}
			if (end == (begin + 1))
			{
				if (target == nums[end])
				{
					return end;
				}
				if (target == nums[begin])
				{
					return begin;
				}
				if (target > nums[end])
				{
					return end + 1;
				}
				if (target > nums[begin]&& target < nums[end])
				{
					return end;
				}
				if (target < nums[begin])
				{
					return begin;
				}
			}
			if (nums[mid] > target)
			{
				end = mid;
			}
			if (nums[mid] < target)
			{
				begin = mid;
			}
			mid = (begin + end) / 2;
		}
		return mid;
	}
};
int main()
{
	vector<int> a = { 1,3};
	Solution sol;
	cout << sol.searchInsert(a,3);
	return 0;
}