class st {
    int rollno;
    String name;

    st(int rollno, String name) {
        this.rollno = rollno;
        this.name = name;

    }

    void show() {

        System.out.println("Name : " + name + " Rollno : " + rollno);
    }
}

class student {
    public static void main(String[] args) {
        st s1 = new st(32, "Krishant");
        st s2 = new st(33, "Thanos");
        s1.show();
        s2.show();
    }
}