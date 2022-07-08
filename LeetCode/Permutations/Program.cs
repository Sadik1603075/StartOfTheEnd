public class Solution
{
    public class Solve
    {
        public void allPossiblePermutation(int [] taken, List<int> container , int [] arr , IList<IList<int>>ans)
        {
            if(container.Count== arr.Length)
            {
                ans.Add(new List<int>(container));
                return;
            }

            for(int i = 0; i < arr.Length; i++)
            {
                if (taken[i] == 1) continue;
                taken[i] = 1;
                container.Add(arr[i]);
                allPossiblePermutation(taken, container, arr, ans);
                taken[i] = 0;
                container.RemoveAt(container.Count-1);
            }
        }
    }



    static void Main(string[] args)
    {
        int[] nums = {1,2, 3};
        IList<IList<int>> ans = new List<IList<int>>();
        int[] taken = new int[nums.Length];   
        var solve = new Solve();
        var container = new List<int>();

        for (int i = 0; i < nums.Length; i++)
        {
            taken[i] = 1;
            container.Add(nums[i]);
            solve.allPossiblePermutation(taken, container, nums, ans);
            taken[i] = 0;
            container.RemoveAt(container.Count - 1);
        }

        foreach(var item in ans)
        {
            foreach(var item2 in item)
            {
                Console.Write(item2);
                Console.Write(' ');
            }
            Console.WriteLine();
        }
    }
}