class A extends Thread {
    public void run() {
        for (int i = 1; i <= 3; i++) {
            System.out.println("child thread " + i);
            if (i == 1) {
                try {
                    Thread.sleep(1000);
                } catch (Exception e) {
                    // Exception handling
                }
            }
        }
    }
}

class B extends Thread {
    public void run() {
        System.out.println("working of yield thread");
        for (int i = 1; i <= 3; i++) {
            System.out.println("child yield " + i);
            if (i == 1) {
                Thread.yield();
            }
        }
    }
}

public class threadmain {
    public static void main(String[] args) {
        A obj1 = new A();
        obj1.start();
        for (int i = 100; i <= 103; i++) {
            System.out.println("Main thread " + i);
        }
        B obj2 = new B();
        obj2.start();
        for (int i = 100; i <= 103; i++) {
            System.out.println("Main " + i);
        }
    }
}

