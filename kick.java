static String[] desc = new String[] { "", "", "double", "triple",  
        "quadruple", "quintuple", "sextuple", "septuple", "octuple",  
        "nonuple", "decuple" };  
static String[] number = new String[] { "zero", "one", "two", "three",  
        "four", "five", "six", "seven", "eight", "nine" };  

static void read(String s) {  
    char pre = 0;  
    int count = 0;  
    for (int i = 0; i <= s.length(); i++) {  
        char c = i == s.length() ? 0 : s.charAt(i);  
        if (c != pre) {  
            if (pre != 0) {  
                if (count > 10) {  
                    for (int j = 0; j < count; j++) {  
                        System.out.print(" " + number[pre - '0']);  
                    }  
                } else {  
                    String des = desc[count];  
                    System.out.print((des.length() == 0 ? "" : " ")  
                            + desc[count] + " " + number[pre - '0']);  
                }  
            }  
            count = 1;  
        } else {  
            count++;  
        }  
        pre = c;  
    }  
}  

void run() {  
    int tests = sc.nextInt();  
    for (int test = 1; test <= tests; test++) {  
        String num = sc.next();  
        String format = sc.next();  

        System.out.print(String.format("Case #%d:", test));  
        String[] form = format.split("-");  
        int start = 0;  
        for (String s : form) {  
            int len = new Integer(s);  
            read(num.substring(start, start + len));  
            start += len;  
        }  
        System.out.println();  

    }  
} 