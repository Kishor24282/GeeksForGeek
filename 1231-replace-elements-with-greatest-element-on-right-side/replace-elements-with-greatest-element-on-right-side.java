class Solution {
    public int[] replaceElements(int[] arr) {
        int n = arr.length;
        int prev = arr[n-1];
        arr[n-1] = -1;
      
        for(int i=n-2; i>=0; i--){
            if(arr[i]>prev){ 
                int temp = arr[i];
                arr[i] = prev;
                prev = temp;
            }else{
                
                arr[i] = prev;
            }
        }
        return arr; 
    }
}