import java.util.Scanner;
public class UserInput{
    public static void main (String[] args){
        System.out.println("Hello world");

        Scanner sc= new Scanner(System.in);
        System.out.println("Enter your name :");
        String name = sc.nextLine();

        System.out.println("Enter your age :");
        int age = sc.nextInt();
        System.out.println("Enter your height :");
        float height=sc.nextFloat();

        System.out.println("Name = "+name);
        System.out.println("Age = "+age);
        System.out.println("Height ="+height);


    }
}