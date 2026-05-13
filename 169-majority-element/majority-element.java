class Solution 
{
    public int majorityElement(int[] nums) 
    {
        HashMap<Integer , Integer> map = new HashMap<>();
        int n=nums.length/2;
        for(int ele:nums)
        {
            map.put(ele,map.getOrDefault(ele,0)+1);
        }
        for(int ele:map.keySet())
        {
            if(map.get(ele)>n) return ele;
        }
        return -1;
    }
}