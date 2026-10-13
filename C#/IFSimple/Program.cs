using System;

namespace IFSimple
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Introduce un número: ");
            int n = int.Parse(Console.ReadLine());
            
            //Estructura de selección simple
            if (n > 0) 
            {
                Console.WriteLine("El número es positivo");
            }
        }
    }
}