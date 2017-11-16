#include<cstdio>
#include<iostream>
#include<vector>
#include<windef.h>


// to have fun
// time :O(n) space:O(n)
class Solution 
{
public:
	int trap(vector<int>& height) 
	{
		if (height.empty())
			return 0;
		int size = height.size();
		int ans = 0;
		vector<int> left_max(size), right_max(size);
		left_max[0] = height[0];
		right_max[size - 1] = height[size-1];
		for (int i = 1; i < size; i++) 
		{
			left_max[i] = max(height[i], left_max[i - 1]);
		}
		for (int i = size - 2; i >= 0; i--)
		{
			right_max[i] = max(height[i], right_max[i + 1]);
		}
		for (int i = 1; i < size-1; i++)
		{
			ans += min(left_max[i], right_max[i]) - height[i];
		}
		return ans;

	}
};
using namespace std;
int main()
{

}