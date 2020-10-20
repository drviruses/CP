import java.time.*;
import java.time.format.DateTimeFormatter;
import java.time.temporal.*;
import java.time.Period;

class timing{
    public static void main(String [] s) {
        LocalDateTime l1;
        l1=LocalDateTime.now();
        System.out.print(LocalDateTime.now()+"\n");

        l1=LocalDateTime.of(2020, 3, 10, 4, 15, 10);
        System.out.print(l1+"\n");

       /* LocalDate ld;
        ld=LocalDateTime.of(2012, 5, 2);
        LocalTime lt;
        lt=LocalDateTime.
        l1=LocalDateTime.of(ld, lt);*/
        LocalDateTime et=LocalDateTime.parse("2017-12-15T11:00");
        System.out.print("The meeting duration is: "+et);
        System.out.print("\nNow= "+ et.with(TemporalAdjusters.next(DayOfWeek.FRIDAY))+"\n");
        
        l1=LocalDateTime.now();
        DateTimeFormatter f=DateTimeFormatter.ISO_LOCAL_DATE;
        System.out.print(l1.format(f)+"\n");
        
        
        l1=LocalDateTime.now();
        DateTimeFormatter f1=DateTimeFormatter.ISO_ORDINAL_DATE;
        System.out.print(l1.format(f1));

        DateTimeFormatter f2=DateTimeFormatter.ofPattern("EEEE,MMMM,dd,yyyy,hh:mm a");
        System.out.print("\n"+l1.format(f2));

        
        LocalDate strat=LocalDate.parse("2018-09-16");
        LocalDate tod= LocalDate.now();

        strat=strat.plusYears(1);
        long d=strat.until(tod, ChronoUnit.DAYS);
         //diff=Period.between(strat, tod);

        //int d=diff.getDays();
        System.out.print("\n");
        System.out.println(d+"\n");
        System.out.print(3500-(d));

    }
}

