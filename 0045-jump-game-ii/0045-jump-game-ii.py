class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        farthest = 0
        current_jump_end = 0
        jumps = 0

        for i in range(len(nums) - 1):
    # Continuously update the absolute furthest index we could reach
            farthest = max(farthest, i + nums[i])
    
    # Once we reach the end of our current jump's territory...
            if i == current_jump_end:
                jumps += 1                  # We are forced to use a jump
                current_jump_end = farthest  # Our boundary extends to the best launcher we found
        return jumps