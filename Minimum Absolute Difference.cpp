class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        Arrays.sort(arr);
        int z=Integer.MAX_VALUE;
        for(int i=0;i<arr.length-1;i++){
            int y=Math.abs(arr[i]-arr[i+1]);
             z=Math.min(z,y);
        }
         List<List<Integer>>f=new ArrayList<>();
         for(int i=0;i<arr.length-1;i++){
            ArrayList<Integer>l=new ArrayList<Integer>();
            if(arr[i+1]-arr[i]==z){
                l.add(arr[i]);
                l.add(arr[i+1]);
                f.add(l);
            }
             
         }
         return f;
     

    }
}
