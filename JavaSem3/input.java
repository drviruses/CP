import java.util.Scanner;

class exm{
    public static void main(String [] arg) {
        Scanner sc = new Scanner(System.in);

        String name;
        System.out.print("Enter the name: ");
        name=sc.next();
        
        sc.nextLine();
        String about;
        System.out.print("Write something about you: ");
        about=sc.nextLine();
        
    
        double cgpa;
        System.out.print("CGPA: ");
        cgpa=sc.nextDouble();
        

        System.out.print("Name: "+name+" he/she " +about+"secured CGPA="+cgpa);
    }
}

/*byte nextByte()
  short nextShort()
  int nextInt()
  long nextLong()
  float nextFloat()
  double nextDouble()
  String next() for a word, no space allowed
  String nexLine()  for a complete sentence*/