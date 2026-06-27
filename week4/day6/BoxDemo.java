class Box {
    protected double length, breadth;
    
    public Box() {
        length = 0;
        breadth = 0;
    }
    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public void setDimensions(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public double area() {
        return length * breadth;
    }
}

class Box3D extends Box {
    private double height;
    
    public Box3D() {
        super();
        height = 0;
    }
    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }
    public void setHeight(double height) {
        this.height = height;
    }
    public double volume() {
        return length * breadth * height;
    }
}

public class Main {
    public static void main(String[] args) {
        Box b = new Box(5, 4);
        System.out.println("Box area: " + b.area());
        
        Box3D b3 = new Box3D(5, 4, 3);
        System.out.println("Box3D area (base): " + b3.area());
        System.out.println("Box3D volume: " + b3.volume());
    }
}
