import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese un numero entero: ");
        int entero = scanner.nextInt();

        System.out.print("Ingrese un numero flotante: ");
        float flotante = scanner.nextFloat();

        System.out.print("Ingrese un caracter: ");
        char caracter = scanner.next().charAt(0);  //Lee el primer caracter ingresado

        // Consumir el Enter pendiente
        scanner.nextLine();

        System.out.print("Ingrese una cadena de caracteres: ");
        String cadena = scanner.nextLine();

        System.out.println("\nDatos ingresados:");
        System.out.println("Entero: " + entero);
        System.out.println("Flotante: " + flotante);
        System.out.println("Caracter: " + caracter);
        System.out.println("Cadena: " + cadena);

        scanner.close();
    }
}
