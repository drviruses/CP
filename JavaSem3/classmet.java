import java.util.Scanner;

class Billing{
    double computeBill (double a){
        a+=(a*(0.08));
        return a;
    }
    double computeBill(double a,int q){
        return (q*a)+((a*q)*0.08);
    }
    double computeBill(double a,int q, double cp){
        return ((a*q)-cp)+(((a*q)-cp)*0.08);
    }
}

class call{
    public static void main(String [] ar) {
        System.out.print("1.Having one parameter\n");
        System.out.print("2.Having two parameter\n");
        System.out.print("3.Having three parameter\n");
        Scanner s= new Scanner(System.in);
        int ch;

        double v,c;
        int q;
        ch=s.nextInt();
        Billing b=new Billing();
        switch (ch) {
            case 1:
                System.out.print("Enter the price of the book: ");
                v=s.nextDouble();
                System.out.print("Your due is "+ b.computeBill(v));
                break;
            case 2:
            
                System.out.print("Enter the price of the book: ");
                v=s.nextDouble();
                System.out.print("Enter the quantity of the book: ");
                q=s.nextInt();
                System.out.print("Your due is "+b.computeBill(v, q));
                break;

            case 3:
        
            System.out.print("Enter the price of the book: ");
            v=s.nextDouble();
            System.out.print("Enter the quantity of the book: ");
            q=s.nextInt();
            System.out.print("Enter the coupon of the book: ");
            c=s.nextDouble();
            System.out.print("Your due is "+ b.computeBill(v, q,c));
                
                break;
            default:
                break;
        }
        
    }
}