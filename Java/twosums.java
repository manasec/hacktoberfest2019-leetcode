class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int result [] = new int[2];
        Map<Integer, Integer> m = new HashMap<Integer,Integer>(); 
        for(int i=0;i<n;i++){
            if(m.containsKey(target-nums[i])){
                result[0]=m.get(target-nums[i]);
                result[1]=i;
                return result;
            }
            m.put(nums[i],i);
        }
        return result;
    }
}
