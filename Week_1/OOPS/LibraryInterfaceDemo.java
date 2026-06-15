package Summer_Assignment_2401921520162.Week_1.OOPS;

public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        // Kid User Test
        KidUser k1 = new KidUser();
        k1.age = 10;
        k1.bookType = "Kids";
        k1.registerAccount();
        k1.requestBook();

        KidUser k2 = new KidUser();
        k2.age = 18;
        k2.bookType = "Fiction";
        k2.registerAccount();
        k2.requestBook();

        // Adult User Test
        AdultUser a1 = new AdultUser();
        a1.age = 5;
        a1.bookType = "Kids";
        a1.registerAccount();
        a1.requestBook();

        AdultUser a2 = new AdultUser();
        a2.age = 23;
        a2.bookType = "Fiction";
        a2.registerAccount();
        a2.requestBook();
    }
}
