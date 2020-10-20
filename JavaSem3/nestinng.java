class outer{
    int a=10;
    static int b=20;
    void m1(){
        int c=20; //this is final 
        class LocalDemo{
            int d=40;
            void m2(){
                System.out.println("a="+a);
                System.out.println("b="+b);
                System.out.println("c="+c);
                System.out.println("d="+d);

            }
        }
        LocalDemo lobj=new LocalDemo();
        lobj.m2();
    }
}
class Demeeo{
    public static void main(String [] arg) {
        outer obj=new outer();
        obj.m1();
        
    }
}