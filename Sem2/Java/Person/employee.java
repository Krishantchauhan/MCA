public class employee extends person {
    double anul_sal;
    int join;
    long mob_no;

    void setsal(double anul_sal) {
        this.anul_sal = anul_sal;
    }

    void setjoin(int join) {
        this.join = join;
    }

    void setmob(long mob_no) {
        this.mob_no = mob_no;
    }

    double getsal() {
        return anul_sal;
    }

    int getjoin() {
        return join;
    }

    long getmob() {
        return mob_no;
    }

}