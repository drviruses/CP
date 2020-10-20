import java.util.Scanner;

class space{
    public static void main(String [] ar) {
        Scanner ip=new Scanner(System.in);
        String s;
        s=ip.nextLine();
        int c=0;
        for(int i=0;i<s.length();i++) if(s.charAt(i)==' ') c+=1;

        System.out.print("Total number of spaces: "+c);
    }
}