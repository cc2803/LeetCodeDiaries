#Best (Time wise)

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        v_to_i = {}
        for i in range(0,len(nums)):
            delta=target-nums[i]
            if v_to_i.get(delta) is None:
                v_to_i[nums[i]]=i
            else:
                return [i, v_to_i[delta]]
        return [0,0]

#Best (Memory wise)

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sum = []
        for i in range (len(nums)):
            for j in range (i+1, len(nums)):
                if nums[i] + nums[j] == target: sum =[i,j]
        
        return sum

