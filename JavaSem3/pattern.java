/*class pattern{
    public static void main(String [] ar) {
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");  
            }
            System.out.print("\n");
        }
        
    }
}*/

/*class pattern{
    public static void main(String [] arg){
    
    for(int i=1;i<=12;i+=2){
             for(int j=7;2*j>=i;j--){
    
                System.out.print(" ");
        
                }
            for(int k=0;k<i;k++){
                System.out.print("*");
                }
            System.out.print("\n");
        }
    
    }
    }*/

class pattern{
    public static void main(String [] arg) {
     int c=0;   
    for(int i=1;i<=12;i+=2){

        c+=1;
        for(int j=12;2*j>=i;j--){

           System.out.print(" ");
   
           }
        if(c%2==0) {
            System.out.print("+");
            i-=2;
        }
       for(int k=0;k<i;k++){
           
           System.out.print("*");
           }
           if(c%2==0){   
        System.out.print("+");i+=2;}

        
       System.out.print("\n");
   }
        
    }
}    