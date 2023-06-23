
// public class join2 {
//     public static void main(String[] args) throws Exception{
//     B obj=new B();
//     Thread x=Thread.currentThread();
//     obj.getthread(x);
//     obj.start();
//     for(int i=0;i<5;i++)
//     {
//         System.out.println(i+" Executing "+Thread.currentThread().getName());
//     }
// }
// }

// class B extends Thread
// {
//     Thread x;
//     void getthread(Thread x)
//     {
//         this.x=x;
//     }
//     public void run()
//     {
//         for(int i=0;i<5;i++)
//         {
//             try
//             {
//                 x.join();
//                 Thread.sleep(1000);
//                 System.out.println(i + " Executing " + Thread.currentThread().getName());
//             }
//             catch (Exception e)
//             {
//                 System.out.println(e);
//             }
//         }
//     }
// }


// class Threading1 extends Thread {
//     static Thread m1;

//     public void run() {
//         try {
//             m1.join();
//         } catch (Exception e) {
//         }
//         for (int i = 0; i < 5; i++)
//             System.out.println("Child thread Execute " + i);

//         System.out.println(Thread.currentThread());
//     }
// }

// class join2 {
//     public static void main(String[] args) throws Exception {
//         Threading1 t1 = new Threading1();
//         Threading1.m1 = Thread.currentThread();
        
//         t1.start();
//         for (int i = 0; i < 5; i++)
//             System.out.println("Main Thread Execute " + i);
//     }
// }



// class A extends Thread {
//     public void run() {
//         for (int i = 1; i <= 3; i++) {
//             System.out.println("Child thread " + i);
//             if (i == 1) {
//                 try {
//                     Thread.sleep(1000);
//                 } catch (Exception e) {
//                 }
//             }
//         }
//     }
// }

// class B extends Thread {
//     public void run() {
//         System.out.println("Working of yield thread");
//         for (int i = 1; i <= 3; i++) {
//             System.out.println("Child yield " + i);
//             if (i == 1) {
//                 try {
//                     Thread.yield();
//                 } catch (Exception e) {
//                 }
//             }
//         }
//     }
// }

// class join2 {
//     public static void main(String[] args) {
//         A obj1 = new A();
//         obj1.start();
//         for (int i = 100; i <= 103; i++) {
//             System.out.println("Main thread " + i);
//         }
//         B obj2 = new B();
//         obj2.start();
//         for (int i = 100; i <= 103; i++) {
//             System.out.println("Main " + i);
//         }
//     }
// }




class YoungAgeException extends Exception {
    public YoungAgeException() {
        throw new ArithmeticException("You are too young.");
    }
}

class OldAgeException extends Exception {
    public OldAgeException() {
        throw new ArithmeticException("You are too old.");
    }
}

public class join2 {
    public static void main(String[] args) {
            int age=17;
            if (age < 18) {
                YoungAgeException ob1=new YoungAgeException();
            } else if (age > 65) {
                OldAgeException ob1=new OldAgeException();
            } else {
                System.out.println("Age is valid.");
            }

    }
}
