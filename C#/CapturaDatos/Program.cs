using System;

namespace CapturaDatos
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese un numero entero: ");
            int entero = int.Parse(Console.ReadLine());

            Console.Write("Ingrese un numero flotante: ");
            float flotante = float.Parse(Console.ReadLine());

            Console.Write("Ingrese un caracter: ");
            char caracter = char.Parse(Console.ReadLine());

            Console.Write("Ingrese una cadena de caracteres: ");
            string cadena = Console.ReadLine();

            Console.WriteLine("\nDatos ingresados:");
            Console.WriteLine("Entero: " + entero);
            Console.WriteLine("Flotante: " + flotante);
            Console.WriteLine("Caracter: " + caracter);
            Console.WriteLine("Cadena: " + cadena);
        }
    }
}
