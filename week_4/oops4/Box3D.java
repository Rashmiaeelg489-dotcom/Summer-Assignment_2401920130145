package oops4;

class Box {

    int length;
    int breadth;

    Box(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    int area() {
        return length * breadth;
    }
}

public class Box3D extends Box {

    int height;

    Box3D(int length, int breadth, int height) {
        super(length, breadth);
        this.height = height;
    }

    int volume() {
        return length * breadth * height;
    }

    public static void main(String[] args) {

        Box3D obj = new Box3D(10, 5, 4);

        System.out.println("Area = " + obj.area());
        System.out.println("Volume = " + obj.volume());
    }
}