/*class Demo{
    void demo(int a){
        demo(); //this is not possible because x is local to demo()
    }
    void demo(){
        class X{
            void show(){
                System.out.println("Show method of local class X");
            }
        }
        X objx = new X();
        objx.show();
    }
}

class run{
    public static void main(String[] args) {
        Demo obj = new Demo();
        obj.demo(5);
    }
}*/