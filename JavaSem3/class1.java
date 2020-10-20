import java.util.Scanner;

class Student{
    String sname,sfname,rollno,sec,coll,add;
    void input(){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the student name: ");
        sname=sc.nextLine();

        System.out.print("Enter the student's father name: ");
        sname=sc.nextLine();

        System.out.print("Enter the rollno : ");
        sfname=sc.next();

        System.out.print("Enter the section: ");
        rollno=sc.next();

        sec=sc.nextLine();
        System.out.print("Enter the college name: ");
        sec=sc.nextLine();

        System.out.print("Enter the address: ");
        add=sc.nextLine();
    }

    void display(){
        System.out.print("Name: "+sname+", father's name "+sfname+", roll no is "+rollno+
        ", section is "+sec+", college name is "+coll+" and address is "+add);

    }
}

class choice{
    public static void main(String [] arg) {
        Student s1 = new Student();
        int ch;
        Scanner s= new Scanner(System.in);
        
       while(true){
        System.out.print("\nEnter the choice: \n 1.Input \n 2.Display \n 3. Exit");
        ch=s.nextInt(); 
        switch (ch) {
            case 1:
                s1.input();
                break;
             
            case 2:
                s1.display();
                break;
            case 3:
                System.exit(0);
                break;    
            default:
                break;
        }
    } 

    }
}