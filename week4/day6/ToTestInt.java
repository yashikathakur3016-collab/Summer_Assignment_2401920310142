interface test {
    void square(int n);
}
class arithmetic implements test {
    public void square(int n) {
        System.out.println("Square of " + n + " is " + (n * n));
    }
}
class ToTestInt {
    public static void main(String[] args) {
        arithmetic obj = new arithmetic();
        obj.square(5);
    }
}
