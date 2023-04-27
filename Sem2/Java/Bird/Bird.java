class Animal {
    void eat() {
        System.out.println("Eating");
    }

    void sleep() {
        System.out.println("Sleeping");
    }
}

class Bird extends Animal {
    void eat() {
        System.out.println("Eating from bird");
    }

    void sleep() {  
        System.out.println("Sleeping from bird");
    }

    void fly() {
        System.out.println("Fly");
    }

    public static void main(String[] args) {

        Animal a = new Animal();
        a.eat();
        a.sleep();

        Bird b = new Bird();
        b.eat();
        b.sleep();
        b.fly();

    }
}