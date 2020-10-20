import java.util.Scanner;
import java.util.ArrayList;

@FunctionalInterface
interface Predicate{
    boolean test(String t);
}

class lanbda_1{
    public static void main(String [] arg){
        
        Scanner s = new Scanner(System.in);
      

        ArrayList <String> arr = new ArrayList<>();
        ArrayList <String> arr_c =new ArrayList<>();

        Predicate obj = (String s1)->{ if(s1.charAt(s1.length()-1)=='g') return true; else return false;};

        int c=0;
        //adding strings
        for(int i=0;i<7;i++){
            arr.add(s.nextLine());
            if(obj.test(arr.get(i))) {c+=1; arr_c.add(arr.get(i)); }
        }

        System.out.println("Number is: "+ c);
        System.out.println(arr_c);
        s.close();

    }
}