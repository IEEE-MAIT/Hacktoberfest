class Solution:
    def trap(self, height: List[int]) -> int:
        if not height:   return 0
        max_left, max_right = [height[0]], [height[-1]]

        for i in range(1, len(height)):
            max_left.append(max(max_left[-1], height[i]))
            max_right.append(max(max_right[-1], height[-1 - i]))

        return sum(min(l, r) - h for l, r, h in zip(max_left, reversed(max_right), height))