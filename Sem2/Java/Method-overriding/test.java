class A {
    void m() {
        System.out.println("Parent class method");
    }
}

class B extends A {
    @Override
    void m() {
        System.out.println("child class");
    }
}

class test {
    public static void main(String args[]) {
        A ob1 = new A();
        ob1.m();
        B ob2 = new B();
        ob2.m();
        A ob3 = new B();
        ob3.m();

    }
}