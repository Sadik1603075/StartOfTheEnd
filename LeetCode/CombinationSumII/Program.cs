namespace CombinationSumII
{
    public class Solution
    {
        public class Solve
        {
            public void AllUniqueCombination(int index, int sum, List<int> v, IList<IList<int>> ans, int[] arr)
            {
                if (sum == 0)
                {
                    ans.Add(new List<int>(v));
                    return;
                }
                for (int i = index; i < arr.Length; i++)
                {
                    if (sum < arr[i]) break;
                    if (i > index && arr[i] == arr[i - 1]) continue;

                    v.Add(arr[i]);
                    AllUniqueCombination(i + 1, sum - arr[i], v, ans, arr);
                    v.RemoveAt(v.Count - 1);
                }
                return;
            }
        }

        static void Main(string[] args)
        {
            int [] candidates ={ 10, 1, 2, 7, 6, 1, 5 };
            Array.Sort(candidates);
            int target = 8;
            var solution = new Solve();
            IList<IList<int>> ans = new List<IList<int>>();
            int[] arr = {2,4,2,1 };
            Array.Sort(arr);
            solution.AllUniqueCombination(0, target, new List<int>(), ans, candidates);
            foreach (var item in ans)
            {
                foreach (var item2 in item)
                {
                    Console.Write(item2);
                    Console.Write(' ');
                }
                Console.WriteLine();
            }

        }
    }
}