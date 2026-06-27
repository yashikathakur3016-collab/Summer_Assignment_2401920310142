class Outer {
    void display() {
        System.out.println("Display method of Outer class");
    }
    
    class Inner {
        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Outer outerObj = new Outer();
        outerObj.display(); // calling outer class's display
        
        Outer.Inner innerObj = outerObj.new Inner();
        innerObj.display(); // calling inner class's display
    }
}
