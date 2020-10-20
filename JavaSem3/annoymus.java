abstract class AbstractDemo{
    abstract void m1();
}

class Demo{
    public static void main(String[] args) {
        AbstractDemo obj = new AbstractDemo(){
            void m1() {
                System.out.println("I am inside m1");
            }
        };
    obj.m1();
    }
}