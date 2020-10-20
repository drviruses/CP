
abstract class A {
    abstract  int add(int a,int b);
    int a = 10;
}

interface X{
    void test();
    default void demo(){ System.out.println("X-demo"); }
    static void show(){ System.out.println("X-show"); }
    int a = 20;
}

interface Y{
    void test();
    default void demo(){ System.out.println("Y-demo"); }
    int a = 30;
}


class Z extends A implements X,Y {
    

    @Override
    public void test() {
        System.out.println("Z-test");
    }

    @Override
    int add(int a, int b) {
        return a+b;
    }
    public void demo(){
        System.out.println("Z-demo");
        X.super.demo();
        Y.super.demo();
    }

    public static void main(String [] ar) {
        Z obj=new Z();
        obj.test();;
        obj.demo();
        X.show();
        //System.out.println("Class A: "+obj.a);
        System.out.println("");
        System.out.println("Z-demo");   
        
    }
}