import java.util.Scanner;

class cn{
    public static void main(String [] ar) {
        int n;
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the size of array");
        n=s.nextInt();
        double a[]=new double[n];
        for(int i=0;i<n;i++) a[i]=s.nextDouble();
        int c[]=new int[n];
        c=dbltoint(a, n);
        for(int i=0;i<n;i++) System.out.print(c[i]+" ");
        
        
    }
    public static int[] dbltoint(double d[],int n){
        int b[]=new int[n];
        for(int i=0;i<n;i++) b[i]=(int)(d[i]);
        return b;
    } 
}
