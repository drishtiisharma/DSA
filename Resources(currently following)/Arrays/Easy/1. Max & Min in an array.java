import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        
        //taking input size as input from user
        System.out.println("enter the no. of elements in the array: ");
        int n=sc.nextInt();
        
        int[] array=new int[n]; //creating an array of size n
        
        //taking array as input from user
        System.out.println("Enter the elements of the array: ");
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        
        //initializing max and min with the first element
        int max=array[0];
        int min=array[0];
        
        //traversing the array
        for(int i=1;i<n;i++){
            if(array[i]>max){
                max=array[i];
            }
            if{
                min=array[i];
            }
        }
        
        //for output
        System.out.println("max value in array: "+max);
        System.out.println("min value in array: "+min);
    }
}
