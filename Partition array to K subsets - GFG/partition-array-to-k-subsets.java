// { Driver Code Starts
import java.util.*;

class Partition_Arr_To_K_Subsets
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n = sc.nextInt();
			int a[] = new int[n];
			for(int i=0;i<n;i++)
				a[i] = sc.nextInt();
			int k = sc.nextInt();
			Solution g = new Solution();
			if(g.isKPartitionPossible(a,n,k)==true)
				System.out.println(1);
			else 
				System.out.println(0);
			
		t--;
		}
	}
}// } Driver Code Ends


/*You are required to complete this method */

class Solution
{
    
    private static boolean rec(ArrayList<Integer> al, int sum, int target)
    {
        if(al.size()==0)
        {
            return sum == 0;
        }
        
        int n = al.size();
        
        for(int i=0; i<n; i++)
        {
            if(sum + al.get(i)<target)
            {
                int x = al.get(i);
                al.remove(i);
                if(rec(al, sum + x, target)) return true;
                al.add(i, x);
                
            }
            else if(sum + al.get(i)==target)
            {
                int x = al.get(i);
                al.remove(i);
                if(rec(al, 0, target)) return true;
                al.add(i, x);
            }
        }
        
        return false;
        
        
    }
    
    
    public boolean isKPartitionPossible(int a[], int n, int k)
    {
        int sum = 0;
        for(int x : a)
        {
            sum += x;
        }
        
        if(sum%k!=0) return false;
        
        ArrayList<Integer> al = new ArrayList<>();
        for(int x : a)
        {
            al.add(x);
        }
        
        return rec(al, 0, sum/k);
        
        
    }
}
