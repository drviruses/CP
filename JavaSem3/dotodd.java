import java.util.Scanner;

class hell{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the size of array of objects: ");
        int n=s.nextInt();
        double v;
        Double [] dd=new Double[n];
        for(int i=0;i<n;i++) {
            v=s.nextDouble();
            dd[i]=new Double(v);
        }
        Integer [] de=new Integer[n];
        de=doubletointeher(dd,n);
        for(int i=0;i<n;i++) System.out.print(de[i]+" ");
        
    }

    public static Integer[] doubletointeher(Double d[],int n) {
        
        Integer [] c=new Integer[n];
        for(int i=0;i<n;i++) c[i]=new Integer(d[i].intValue());

        return c;
        
    }
}