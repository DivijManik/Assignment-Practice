// See https://aka.ms/new-console-template for more information

using System;
using System.Linq;
using System.Security.Cryptography.X509Certificates;

public class Program
{
    public static void Main(String[] args)
    {
        List<int> ls = new List<int>();
        ls.Add(0);
        ls.Add(1);
        ls.Add(2);
        //ls.Add(3);
        for (int i = 0; i < ls.Count; i++)
        {
            if(i< ls.Count/2)
            {
                (ls[i], ls[ls.Count-1-i])  = (ls[ls.Count-1-i], ls[i]); // swapping using tuples
            }
            Console.WriteLine(ls[i]);
        }  

        // just to check if swaped
        foreach (var item in ls)
        {
            Console.WriteLine("swapped/reversed: " +item);
        } 

        // Query keyword

        var query = from i in ls where i <= 1 select i; // selecting using query


        foreach (var item in query)
        {
            Console.WriteLine("query: "  + item);
        } 
    }
}
