// Abstract class
abstract class Compartment {
    public abstract String notice();
}

// Child classes
class FirstClass extends Compartment {
    public String notice() {
        return "First Class: Comfortable journey";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment: Only for women";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment: For all passengers";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment: For goods only";
    }
}

// Main class
public class TestCompartment {
    public static void main(String[] args) {

        // Array of size 10
        Compartment[] c = new Compartment[10];

        // Loop to create random compartments
        for (int i = 0; i < 10; i++) {

            int r = (int)(Math.random() * 4) + 1;

            if (r == 1)
                c[i] = new FirstClass();
            else if (r == 2)
                c[i] = new Ladies();
            else if (r == 3)
                c[i] = new General();
            else
                c[i] = new Luggage();

            // Polymorphism call
            System.out.println(c[i].notice());
        }
    }
}    
