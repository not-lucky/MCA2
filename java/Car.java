class Vehicle {
    String brand = "Ford"; // Vehicle attribute

    public void honk() { // Vehicle method
        System.out.println("Tuut, tuut!");
    }
}

class Car extends Vehicle {
    private String modelName = "Mustang"; // Car attribute

    public static void main(String[] args) {

        // Create a myCar object
        Car myCar = new Car();

        // Call the honk() method (from the Vehicle class) on the myCar object
        myCar.honk();
public class Employee {
    private String name;
    private int age;

    public Employee(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void printInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class Manager {
    private String department;

    public Manager(String department) {
        this.department = department;
    }

    public void printDepartment() {
        System.out.println("Department: " + department);
    }
}

public class ManagerEmployee extends Employee, Manager {
    private String title;

    public ManagerEmployee(String name, int age, String department, String title) {
        super(name, age);
        this.department = department;
        this.title = title;
    }

    public void printTitle() {
        System.out.println("Title: " + title);
    }
}

public class InheritanceExample {
    public static void main(String[] args) {
        ManagerEmployee me = new ManagerEmployee("John Doe", 35, "Sales", "Sales Manager");
        me.printInfo(); // output: Name: John Doe Age: 35
        me.printDepartment(); // output: Department: Sales
        me.printTitle(); // output: Title: Sales Manager
    }
}

        // Display the value of the brand attribute (from the Vehicle class) and the
        // value of the modelName from the Car class
        System.out.println(myCar.brand + " " + myCar.modelName);
    }
}