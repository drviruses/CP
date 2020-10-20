import java.util.Scanner;
import java.util.ArrayList;

class stud {
    String name,fname,sec,coll,addr;
    int roll;
    Scanner s2=new Scanner(System.in);
    public void ip() {
        System.out.print("Enter the student name: ");
        name=s2.nextLine();
        System.out.print("Enter the father's name: ");
        fname=s2.nextLine();
        System.out.print("Enter the college  name: ");
        coll=s2.nextLine();
        System.out.print("Enter the address: ");
        addr=s2.nextLine();
        System.out.print("Enter the section: ");
        sec=s2.nextLine();
        System.out.print("Enter the roll no: ");
        roll=s2.nextInt();

        ex.li.add(this);
    }
    public String toString(){
        return "Name: "+name+", father's name "+fname+", college name "+coll+", address "+addr+", section is "+sec+" and roll no is "+roll+"\n";
    }
}

class ex {
    static ArrayList <stud> li= new ArrayList<>();
    
    public static void main(String [] arg) {
        Scanner s=new Scanner(System.in);
        
        
        int ch;
        while(true){
        System.out.print("Enter your choice:");
        System.out.print("\n1.For inputing the data\n");
        System.out.print("2.For displaying the details\n");
        System.out.print("3. Exit\n");
        ch=s.nextInt();
        stud s1=new stud();
        if(ch==1) s1.ip();
        else if(ch==2) System.out.print(li);
        else System.exit(0); 
       }

        
    }
}