/* 
Submitted by Amit Kumar
Roll number: 56
K18SJ
*/
//Hotel Management System by your selection of the place you want to visit
//I have used Array List for storing packages details because I/O funda was clear
// to me.

import java.util.*;

//Layout of each Package object
//Location , price , nights , days , hotel
class Package {
    String location,hotel;
    int price,nights,days;
    public Package(String location, int price, int nights, int days, String hotel) {
        this.location = location;
        this.price = price;
        this.nights = nights;
        this.days = days;
        this.hotel = hotel;
    }
}


//The main class where we have the main function, every functioning is originated 
//from this class , it have all packages list stored in the Array List
//First you have to enter the place you want to explore 
//Manali Shimla Kashmir Delhi ... and so on
//Enter your budget of trip/ maximum you are able to spend 
//It will show all available packages and affordable packages according to your budget
//You have to select one of the follwed option given to you
//You can also customize your packages

class Main{
    //Array List containing All packages deatils
    static ArrayList<Package> allPackages = new ArrayList<>();
    //Array list getavailablepackages is storing the affordable packages in the budget of user
    static ArrayList<Package> getAvailablePackages(String destination, int max_price){
        //Temporary Array list for packages storing
        ArrayList<Package> eligiblePackage = new ArrayList<>();
        for(Package p : allPackages){
            if(p.location.equals(destination) && p.price <= max_price){
                eligiblePackage.add(p);
            }
        }
        return eligiblePackage;
    }


    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int max_price ;
        String destination;
        addPackages();
        boolean y = false;
        System.out.println("Enter the place you want to explore: ");
        destination  = input.nextLine();
        System.out.println("Enter the Max. Amount you are willing to spend: ");
        max_price = input.nextInt();
        ArrayList<Package> availablePackages = getAvailablePackages(destination, max_price);
        System.out.println("No. of available packages = "+availablePackages.size());
        showPackages(availablePackages);
        System.out.println("Choose the package you want (1, 2, 3, ....): \n You can only select one:");
        input.nextLine();
        int choose = input.nextInt() - 1;
        Package choosedPackage = availablePackages.get(choose);
        showPackage(choosedPackage);
        System.out.println("Do you want to customize the package (answer in Yes or No): ");
        input.nextLine();
        String x = input.nextLine();
        if (x.equals("Yes") || x.equals("yes") || x.equals('y') || x.equals('Y'))
            y = true;
        if(y) {
            customizePackage(choosedPackage);
        }
    }

    static void showPackage(Package p){
        System.out.println("************************");
        System.out.println("Your Choosed Package is: ");
        System.out.println("-------------------");
        System.out.println("Your Destination: "+p.location);
        System.out.println("Your Amount: "+p.price);
        System.out.println("The total Time Spent: "+p.days+" Days & "+p.nights+" Nights.");
        System.out.println("Your Hotel: "+p.hotel);
        System.out.println("************************");
    }
    static void showPackages(ArrayList<Package> availablePackages){
        for(Package p : availablePackages){
            System.out.println("Your Destination: "+p.location);
            System.out.println("Your Amount: "+p.price);
            System.out.println("Total Time Spent: "+p.days+" Days & "+p.nights+" Nights.");
            System.out.println("Your Hotel: "+p.hotel);
            System.out.println("*******************");
        }
    }

    static void customizePackage(Package p){
        Scanner input = new Scanner(System.in);
        int currentDays = p.days;
        String currentHotel = p.hotel;
        int currentPrice = p.price;
        String destination = p.location;
        int oldHotelPrice;
        int newHotelPrice;
        System.out.println("Enter the total number of days you want to travel: ");
        int newDay = input.nextInt();
        System.out.println("Enter the category of hotel you want (for e.g., '1 star', '2 star'): ");
        input.nextLine();
        String newHotel = input.nextLine();
        int diffDays = newDay - currentDays;
        switch (currentHotel){
            case "1 star":
                oldHotelPrice = 500;
                break;
            case "2 star":
                oldHotelPrice = 1000;
                break;
            case "3 star":
                oldHotelPrice = 1500;
                break;
            case "4 star":
                oldHotelPrice = 2000;
                break;
            case "5 star":
                oldHotelPrice = 2500;
                break;
            default:
                oldHotelPrice = 1500;
                break;
        }
        switch (newHotel){
            case "1 star":
                newHotelPrice = 500;
                break;
            case "2 star":
                newHotelPrice = 1000;
                break;
            case "3 star":
                newHotelPrice = 1500;
                break;
            case "4 star":
                newHotelPrice = 2000;
                break;
            case "5 star":
                newHotelPrice = 2500;
                break;
            default:
                newHotelPrice = 1500;
                break;
        }

        int newPrice = currentPrice + (1000 * diffDays) + (oldHotelPrice - newHotelPrice);
        int nights = newDay + 1;
        System.out.println("**************************************************");
        System.out.println("Your Customized Package is");
        System.out.println("**************************************************");
        System.out.println("Your Destination: "+destination);
        System.out.println("Total Amount: "+newPrice);
        System.out.println("The Total Time Spent: "+newDay+" Days & "+nights+" Nights.");
        System.out.println("Hotel: "+newHotel);
        System.out.println("**************************************************");
    }

//Manually inputing of the package details, in the array list 
    static void addPackages(){
        allPackages.add(new Package("Jaipur", 10000, 6, 7, "4 star"));        
        allPackages.add(new Package("Mumbai", 9000, 6, 7, "4 star"));
        allPackages.add(new Package("Delhi", 6000, 5, 6, "3 star"));
        allPackages.add(new Package("Kashmir", 6000, 4, 5, "3 star"));
        allPackages.add(new Package("Agra", 4000, 5, 6, "3 star"));
        allPackages.add(new Package("Manali", 7500, 5, 6, "5 star"));
        allPackages.add(new Package("Shimla", 8500, 6, 7, "5 star"));
        allPackages.add(new Package("Mumbai", 7000, 3, 4, "4 star"));
        allPackages.add(new Package("Delhi", 7000, 5, 6, "5 star"));
        allPackages.add(new Package("Goa", 9000, 8, 7, "3 star"));
        allPackages.add(new Package("Kochi", 8000, 9, 8, "5 star"));
        allPackages.add(new Package("Darjeeling", 8750, 7, 6, "4 star"));
        allPackages.add(new Package("Manali", 4500, 4, 5, "2 star"));
        allPackages.add(new Package("Manali", 7500, 7, 6, "3 star"));
        allPackages.add(new Package("Shimla", 7500, 5, 6, "3 star"));
        allPackages.add(new Package("Kashmir", 8000, 4, 5, "4 star"));
        allPackages.add(new Package("Amritsar",6500, 5, 4, "3 star"));
        allPackages.add(new Package("Haridwar", 4500, 4, 5, "3 star"));
    }

}
