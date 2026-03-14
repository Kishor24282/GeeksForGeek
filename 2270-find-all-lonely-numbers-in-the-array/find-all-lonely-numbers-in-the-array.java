class Solution {
    public List<Integer> findLonely(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int n:nums){
            map.put(n,map.getOrDefault(n,0)+1);
        }
        List<Integer> res=new ArrayList<>();
        for(int n:nums){
            if(map.containsKey(n)&&!map.containsKey(n+1)&&!map.containsKey(n-1)&&map.get(n)==1) res.add(n);
        }
        return res;
    }
}