# Java

## Unit 1

### Class

- template / blueprint for creating obj (instance of class).
- defines attributes and behaviours of obj.
- Ex. Car:
  - attr: make, model, color, number of doors.
  - behaviour: starting of engine, accelerating, braking.

### Object

- specific instance of a class
- created from class
- has its own set of values for attrs.
- Ex: Toyota model, color blue, no. of doors 4.

### Evolution of Java, Byte Code, JDK, JVM, JRE

Here is an explanation in points for the evolution of Java, byte code, JDK, JVM, and JRE:

1. In 1991, James Gosling and his team at Sun Microsystems started the development of a new programming language called Oak, which later became Java.

2. The first version of Java, called Java 1.0, was released in 1996.

3. Java introduced the concept of write once, run anywhere (WORA), which means that code written in Java can run on any platform that has a Java Virtual Machine (JVM) installed.

4. Java programs are compiled into bytecode, which is an intermediate language that can be executed by a JVM.

5. The JVM is a virtual machine that interprets the bytecode and executes it on the underlying operating system.

6. The Java Development Kit (JDK) is a software development kit that includes tools for developing, compiling, and debugging Java programs.

7. The JDK includes the Java Runtime Environment (JRE), which is a subset of the JDK and includes the JVM and essential libraries for running Java programs.

8. The JRE is installed on end-user machines to run Java applications.

9. As Java evolved, new versions were released, adding new features and improving performance.

10. In 2010, Oracle Corporation acquired Sun Microsystems and became the steward of the Java platform.

11. Today, Java is widely used for developing a variety of applications, including web applications, desktop applications, mobile applications, and enterprise software.

### Encapsulation

Make sure that "sensitive" data is hidden from users.
To achieve this:
    -   declare class variables/attributes as private.
    -   provide public get and set methods to access and update the value of a private variable.

### Inheritance

- inherit attr. and methods from one class to another.
- 2 categories:
  - subclass (child)
  - superclass (parent)
- uses extends keyword

```java
class Vehicle {
  protected String brand = "Ford";        // Vehicle attribute
  public void honk() {                    // Vehicle method
    System.out.println("Tuut, tuut!");
  }
}

class Car extends Vehicle {
  private String modelName = "Mustang";    // Car attribute
  public static void main(String[] args) {

    // Create a myCar object
    Car myCar = new Car();

    // Call the honk() method (from the Vehicle class) on the myCar object
    myCar.honk();

    // Display the value of the brand attribute (from the Vehicle class) and the value of the modelName from the Car class
    System.out.println(myCar.brand + " " + myCar.modelName);
  }
}
```

#### Multilevel vs multiple inheritance

##### Multilevel 

- ability of a subclass to inherit from a superclass that itself inherits from another superclass.
- each subclass only one direct superclass.

```java
public class Animal {
    public void eat() {
        System.out.println("The animal is eating.");
    }
}

public class Mammal extends Animal {
    public void sleep() {
        System.out.println("The mammal is sleeping.");
    }
}

public class Dog extends Mammal {
    public void bark() {
        System.out.println("The dog is barking.");
    }
}

public class InheritanceExample {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.eat(); // output: The animal is eating.
        d.sleep(); // output: The mammal is sleeping.
        d.bark(); // output: The dog is barking.
    }
}
```

##### Multiple Inheritance

- ability of a subclass to inherit from multiple superclasses. 
- subclass can inherit properties and methods from more than one superclass
- not all programming languages support multiple inheritance, as it can lead to conflicts and ambiguity when two or more superclasses have the same method or property names.

```java
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
```

### Polymorphism

- "many forms"
- uses **inherited** methods to perform diff. tasks.

```java
class Animal {
  public void animalSound() {
    System.out.println("The animal makes a sound");
  }
}

class Pig extends Animal {
  public void animalSound() {
    System.out.println("The pig says: wee wee");
  }
}

class Dog extends Animal {
  public void animalSound() {
    System.out.println("The dog says: bow wow");
  }
}
```

#### Runtime vs Compiletime polymorphism

1. Runtime:

- dynamic polymorphism
- overriding
- decision about which implementation of the method to execute is made at runtime, based on actual object.

```java
public class Animal {
    public void makeSound() {
        System.out.println("The animal makes a sound.");
    }
}

public class Dog extends Animal {
    public void makeSound() {
        System.out.println("The dog barks.");
    }
}

public class Cat extends Animal {
    public void makeSound() {
        System.out.println("The cat meows.");
    }
}

public class PolymorphismExample {
    public static void main(String[] args) {
        Animal a1 = new Animal();
        Animal a2 = new Dog();
        Animal a3 = new Cat();
        
        a1.makeSound(); // output: The animal makes a sound.
        a2.makeSound(); // output: The dog barks.
        a3.makeSound(); // output: The cat meows.
    }
}
```

1. Compiletime:

- static polymorphism 
- method overloading
- compiler decides which implementation of a method to execute at compile time, based on the number and types of arguments that are passed to the method.

```java
public class Calculator {
    public int add(int a, int b) {
        return a + b;
    }
    
    public double add(double a, double b) {
        return a + b;
    }
    
    public String add(String a, String b) {
        return a + b;
    }
}

public class PolymorphismExample {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        int sum1 = calc.add(2, 3); // calls add(int a, int b)
        double sum2 = calc.add(2.5, 3.5); // calls add(double a, double b)
        String sum3 = calc.add("Hello", " world!"); // calls add(String a, String b)
        System.out.println(sum1); // output: 5
        System.out.println(sum2); // output: 6.0
        System.out.println(sum3); // output: Hello world!
    }
}
```

