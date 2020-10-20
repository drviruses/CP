
import java.util.Scanner;

class cgpa{
    public static void main(String [] ar) {
        Scanner s=new Scanner(System.in);
        int n;
        System.out.print("Enter the total number of subjects: ");
        n=s.nextInt();
        double a[][]=new double[n][];

        System.out.print("Enter the number of respective CAs of subjects: ");
        for(int i=0;i<n;i++) {
            System.out.print("Enter the numbers of CAs of"+(i+1)+" subject" );
            int ca=s.nextInt();
            a[i]=new double[ca];
        }

        
        double sum=0;
        int c[]=new int [n];
        int b[]=new int[n];
        int mn=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            mn=Integer.MAX_VALUE;
            sum=0;
            for(int j=0;j<2;j++){
                c[j]=s.nextInt();
                mn=Integer.min(c[j], mn);
                sum+=c[j];
                
            }
            sum-=mn;
            if(sum>=80) b[i]=10;
            else if(sum>80 && sum<=60) b[i]=8;
            else if(sum>60 && sum<=50) b[i]=6;
            else if(sum>50 && sum<=40) b[i]=5;
            else if(sum<40) b[i]=0;
            
        }

        
    }
}