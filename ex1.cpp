//2.1.1 Remove Duplicates from Sorted Array
//
//Given a sorted array, remove the duplicates in place such that each element appear only once
//and return the new length.
//Do not allocate extra space for another array, you must do this in place with constant memory.
//For example, Given input array A = [1, 1, 2],
//Your function should return length = 2, and A is now[1, 2].


// LeetCode, Remove Duplicates from Sorted Array


// T(n) is O(n),S(n) is O(1)

class Solution
{
public:
	int removeDuplicates(vector<int>& nums)
	{
		if (nums.empty()) return 0;
		int index = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[index] != nums[i])
				nums[++index] = nums[i];
		}
		return index + 1;
	}
};
	 LeetCode, Remove Duplicates from Sorted Array


// T(n) is O(n),S(n) is O(1)
class Solution2
{
public:
	int removeDuplicates2(vector<int>& nums)
	{
		return distance(nums.begin(), unique(nums.begin(), nums.end()));
	}
};
int main()
{
	vector<int> a = { 1,1,2,3 };
	int b = 0;
	
	Solution2 ans;
	b = ans.removeDuplicates2(a);
	cout << b;
}