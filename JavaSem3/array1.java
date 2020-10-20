import java.util.Scanner;
class array{
    int n,v,s1=0;
    int mn=Integer.MAX_VALUE;
    int mx=Integer.MIN_VALUE;
    Scanner s =new Scanner(System.in);
    int [] arr;
         
    void input(){
        
        n=s.nextInt();
        arr= new int [n];
        for(int i=0;i<n;i++) 
           { 
            arr[i]=s.nextInt();  
            s1+=arr[i]; 
            mn=Integer.min(mn, arr[i]);
            mx=Integer.max(mx, arr[i]);
        }
    }
    void display(){
        for(int i=0;i<n;i++) System.out.print(arr[i]+" ");
    }
    void displayr(){
        for(int i=n-1;i>=0;i--) System.out.print(arr[i]+" ");

    }
    void sl() {
        for(int i=0;i<n;i++){
            if(arr[i]<5)   
            System.out.print(arr[i]+" ");}
    }
    
    void avg(){
        int d=s1/n;
        System.out.print(d+"\n");
    }
    void avgr() {
        for(int i=0;i<n;i++){
            if(arr[i]>(s1/n))   
            System.out.print(arr[i]+" ");}
    }
}

class amit{

    public static void main(String [] ar) {
        array a=new array();
        System.out.print("Enter the elements to perform operations\n");
        a.input();
        System.out.print("\n1.Display array element\n");
        System.out.print("2.Display in reverse\n");
        System.out.print("3.Sum\n");
        System.out.print("4.Val less than 5\n");
        System.out.print("5.lowest\n");
        System.out.print("6.highest\n");
        System.out.print("7.avg\n");
        System.out.print("8.Val greater than avg\n");
        int ch;
        ch=a.s.nextInt();
        switch (ch) {
                case 1:a.display();
                
                break;
                case 2: a.displayr();
                
                break;
                case 3:System.out.print(a.s1);
                
                break;
                case 4:a.sl();
                
                break;
                case 5:System.out.print(a.mn);
                
                break;
                case 6:System.out.print(a.mx);
                
                break;
                case 7:a.avg();
                
                break;
                case 8:a.avgr();
                
                break;
            
            default:
                break;
        }

        
    }
}