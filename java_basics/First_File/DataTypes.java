import java.util.Scanner;
public class DataTypes{

    public static int addition(int a, int b){
        return a+b;
    }

    public float multiplication(float a,float b){
        return a*b;
    }

    public static void hello_world(){
        System.out.println("Hello world from Darshan");
    }

    public static void increase(int a){
        a=a+1;
        System.out.println("a inside function ="+a);
    }


    public static void main (String [] args){
        int x=10;
        System.out.println(x);

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number :");
        int a=sc.nextInt();
        System.out.println("Enter 2nd number :");
        int b =sc.nextInt();
        int s= addition(a,b);
        System.out.println("Addition ="+s);

        DataTypes obj1 = new DataTypes();
        float m = obj1.multiplication(a,b);
        System.out.println("Multiplication = "+m);

        hello_world();

        increase(a);
        System.out.println("a outside function = "+a);




    }
}