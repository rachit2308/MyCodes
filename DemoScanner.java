/*
Application to demonstrate use of Scanner class.
Create an application to accept first name,Age, 4-digit Code,Cpi, Mobile No ,Passed from user.
And display the output in the below format.
Output
First Name : Vaibhav Diwan
Age : 36
4-digit Code : 1122
Cpi : 6.6
Mobile No : 9754435581
Passed :  false

*/
import java.util.Scanner;
public class DemoScanner{
    public static void main(String[] args){
        Scanner object = new Scanner(System.in);
        System.out.println("Enter your Full Name");        //declaring an object of string to store name
        String name = object.nextLine();
        System.out.println("Enter your age");
        byte age = object.nextByte();
        System.out.println("Enter your 4-digit code");
        short code = object.nextShort();
        System.out.println("Enter your Cpi");
        double cpi = object.nextDouble();
        System.out.println("Enter your mobile number=");
        long mobilenumber=object.nextLong();
        System.out.println("Enter your status pass or fail");
        boolean status = object.nextBoolean();
        //output
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("4-digit code : "+code);
        System.out.println("Cpi : "+cpi);
        System.out.println("Mobile no. : "+ mobilenumber);
        System.out.println("Status : "+status);
    }
}
