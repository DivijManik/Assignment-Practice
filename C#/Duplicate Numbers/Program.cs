// See https://aka.ms/new-console-template for more information
public class Program
{
    public static void Main()
    {
        int[] arr = {0,1,2,5,5,3,2,4};

        List<int> dup = new List<int>();

        for (int i = 0; i < arr.Length; i++)
        {
            for (int j = 0; j < arr.Length; j++)
            {
                if(i !=j && arr[i] == arr[j])
                {
                    if(!dup.Any(x => x == arr[i]))
                    {
                        dup.Add(arr[i]);
                        Console.WriteLine("Duplicate number " + arr[i] );
                    }
                }
            }
        }

    }
}
