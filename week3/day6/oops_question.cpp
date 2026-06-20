import java.util.Random;
abstract class Compartment {
    public abstract String notice();
}
class FirstClass extends Compartment {
    public String notice() {
        return "FIRST CLASS: Valid first class ticket holders only.";
    }
}
class Ladies extends Compartment {
    public String notice() {
        return "LADIES COMPARTMENT: Reserved for women passengers only.";
    }
}
class General extends Compartment {
    public String notice() {
        return "GENERAL COMPARTMENT: Open to all passengers.";
    }
}
class Luggage extends Compartment {
    public String notice() {
        return "LUGGAGE COMPARTMENT: No passengers allowed. Luggage only.";
    }
}
public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < compartments.length; i++) {
            int type = rand.nextInt(4) + 1; 
            switch (type) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }
        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}
