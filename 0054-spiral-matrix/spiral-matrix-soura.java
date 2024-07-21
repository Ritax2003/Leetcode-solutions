class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int n = matrix.length;  // row length
        int m = matrix[0].length;  // column length
        
        List<Integer> mylist = new ArrayList<>();
        
        int top = 0, bottom = n - 1, right = m -1, left = 0;
        
        while(left <= right && top <= bottom){
            
        
            // for moving left to right
            for(int i = left; i <= right; i++){
                mylist.add(matrix[top][i]);
            }
            top++;

            // moving from top to bottom
            for(int i = top; i <= bottom; i++){
                mylist.add(matrix[i][right]);
            }
            right--;

            if(top <= bottom) {
                for(int i = right; i >= left; i--){
                    mylist.add(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left <= right) {
                for(int i = bottom; i >= top; i--){
                    mylist.add(matrix[i][left]);
                }
                left++;
            }
        }
        return mylist;
    }
}
