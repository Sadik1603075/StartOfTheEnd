public class Solution
{
    public class Solve
    {
        public void allPossibleCombination(int index,int size,List<int> container  ,IList<IList<int>> ans, int[] arr)
        {
            if(container.Count == size)
            {
                ans.Add(new List<int>(container));
                return;
            }

            for(int i = index; i < arr.Length; i++)
            {
                if (i > index && arr[i] == arr[i - 1]) continue;
                container.Add(arr[i]);
                allPossibleCombination(i+1,size,container ,ans,arr);
                container.RemoveAt(container.Count-1);
            }
        }

    }


    static void Main(string[] agrs)
    {
        int[] nums = { 1, 2, 2 };
        Array.Sort(nums);
        IList<IList<int>> ans = new List<IList<int>>();
        var solution = new Solve();

        for (int i = 0; i <= nums.Length; i++)
        {
            solution.allPossibleCombination(0, i, new List<int>(), ans, nums);
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