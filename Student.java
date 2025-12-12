class Student {
    String name;
    int rollNo;
    double marks;

    Student(String name, int rollNo, double marks) {
        this.name = name;
        this.rollNo = rollNo;
        this.marks = marks;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Marks: " + marks);
        System.out.println("----------------------------");
    }

    public static void main(String[] args) {
        Student s1 = new Student("A", 1, 85);
        Student s2 = new Student("B", 2, 90);
        Student s3 = new Student("C", 3, 75);
        Student s4 = new Student("D", 4, 88);
        Student s5 = new Student("E", 5, 92);

        s1.display();
        s2.display();
        s3.display();
        s4.display();
        s5.display();
    }
}
