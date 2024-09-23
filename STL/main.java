import java.util.Arrays;
public class main{
    public static void main(String [] args){
        System.out.println(maxPossibleScore(new int [] {6, 0, 3}, 2));
    }
    public static int maxPossibleScore(int[] start, int d) {

        int n = start.length;
        Arrays.sort(start);

        int [] sel = new int [n];
    

        for (int i = 0; i < n; i++) {
            sel[i] = start[i] + d;
        }
        int ans = Integer.MAX_VALUE;
        for(int i=1; i<n; i++){
            int score = sel[i] - sel[i-1];
            ans = Math.min(ans, score);
        }
        

        return ans;
    }
}
    

