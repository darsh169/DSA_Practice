// File name must be same as class name
public class MyClass{
    public static void main(String[] args) {
        System.out.println("Hello World");
        String name = "Darshan";
        int age=25;
        float height=170.78f;
        boolean good=true;
        System.out.println(name+" "+age);   

        int length=2;
        int breadth=5;
        int area;
        area=length*breadth;
        System.out.println("Area = "+length*breadth);

        // Printing result of comparision operators
        System.out.println(length>breadth);

        if (length>breadth){
            System.out.println("Length is greater than breadth");
        }
        else{
            System.out.println("Length is not greater than breadth");
        }

        int a=20;
        int b=30;
        int c=15;

        if ((a>b) && (a>c)){
            System.out.println("a is greatest");
        }
        else if ((b>a) && (b>c)){
            System.out.println("b is greatest");
        }
        else{
            System.out.println("c is greatest");
        }

        System.out.println("\n***Switch Case***");
        int day=2;
        switch (day){
            case 1:
                System.out.println("Monday");
            case 2:
                System.out.println("Tuesday");
        }

        System.out.println("\n***While Loop***");
        int i=0;
        while (i<5){
            System.out.println("Value of i = "+i);
            i++;
        }

        System.out.println("\n***For Loop***");
        for(int x=0;x<5;x++){
            System.out.println("Value of x="+x);
        }

    }
}





