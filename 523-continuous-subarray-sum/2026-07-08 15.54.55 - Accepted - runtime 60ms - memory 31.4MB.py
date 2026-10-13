class Solution(object):
    def checkSubarraySum(self, nums, k):
        mp = {0: -1}
        total = 0

        for i in range(len(nums)):
            total += nums[i]
            rem = total % k

            if rem in mp:
                if i - mp[rem] >= 2:
                    return True
            else:
                mp[rem] = i

        return False