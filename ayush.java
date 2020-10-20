import java.util.*;
import java.time.*;
interface UGC
{
	default int getAdmission()
	{
		
		System.out.println("Enter your percentage in qualifying exam:\n");
		final Scanner sc = new Scanner(System.in);
        final float per = sc.nextFloat();
        if (per >= 60) {
            final Random rand = new Random();
            final int regno = rand.nextInt(200);
            System.out.println("Your registration number is : " + regno);
        }
        return (0);
    }

    String payFee();

}

interface AICTE {
    default int getAdmission_1() {
        final LocalDate id = LocalDate.now();
        final LocalDate id1 = id.plusDays(5);
        System.out.println("You have to join the counselling after 5 days on= " + id1);
        final Random rand1 = new Random();
        final int tno = rand1.nextInt(100);
        System.out.println("Your counselling token number is= " + tno);
        return (tno);
    }

    String payFee();
}

class University implements UGC, AICTE {
    float fee_due;

    public void uni() {
        UGC.super.getAdmission();
        final float per;
        Scanner sc = new Scanner(System.in);
        per=sc.nextFloat();
        if (per >= 60)
            System.out.println("You need to pay 25K and you're eligible to apply through UGC");
        else
            System.out.println("You need to pay 34K and you're eligible to apply through AICTE");

    }

    @Override
    public String payFee() {
        return null;
    }

}

class LPU extends University {

    String Payfee() {
        System.out.println("Abstract method is overriden\n");
        return " ";
    }

    public void f() {
        super.getAdmission();
        super.getAdmission_1();
    }
}

class abc {
    public static void main(final String arv[]) {
        final LPU obj = new LPU();
		obj.f();
		
	}
}
