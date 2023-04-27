
import java.util.Scanner;

class Auther {
    String name;
    String email;
    char gender;

    public Auther(String name, String email, char gender) {
        this.name = name;
        this.email = email;
        this.gender = gender;
    }

    public String toString() {
        return "Auther Name: " + name + "\nEmail: " + email + "\nGender: " + gender;
    }

}

class Bok {
    String name;
    Auther auther;
    double price;
    int qtyInStock;

    public Bok(String name, Auther auther, double price, int qtyInStock) {
        this.name = name;
        this.auther = auther;
        this.price = price;
        this.qtyInStock = qtyInStock;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Auther getAuther() {
        return auther;
    }

    public void setAuther(Auther auther) {
        this.auther = auther;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public int getQtyInStock() {
        return qtyInStock;
    }

    public void setQtyInStock(int qtyInStock) {
        this.qtyInStock = qtyInStock;
    }
}

class book {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of Author:");
        String name = sc.nextLine();
        System.out.println("Enter the name of Book:");
        String bookName = sc.nextLine();
        System.out.println("Enter the email of auther:");
        String email = sc.nextLine();
        System.out.println("Enter the price of Book:");
        double price = sc.nextDouble();
        System.out.println("Enter the quantity in stock of Book:");
        int qtyInStock = sc.nextInt();
        System.out.println("Enter the gender of Author:");
        char gender = sc.next().charAt(0);

        Bok bk = new Bok(bookName, new Auther(name, email, gender), price, qtyInStock);
        System.out.println(bk.getAuther().toString());
        System.out.println("Book Name: " + bk.getName());
        System.out.println("Book Price: " + bk.getPrice());
        System.out.println("Book in Stock: " + bk.getQtyInStock());
        bk.setAuther(new Auther("New Name", "New Email", 'F'));
        bk.setName("New Book");
        bk.setPrice(222);
        bk.setQtyInStock(2000);
        System.out.println();
        System.out.println(bk.getAuther().toString());
        System.out.println("Book Name: " + bk.getName());
        System.out.println("Book Price: " + bk.getPrice());
        System.out.println("Book in Stock: " + bk.getQtyInStock());
    }
}