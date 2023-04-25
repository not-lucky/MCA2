class Info extends Object {
    String name;
    Info(String n) {
        this.name = n;
    }

    public String toString() {
        return "Info: name=" + this.name;
    }
}

class Car{
    public static void main(String[] args) {
        Info i = new Info("Java");
        System.out.println(i);
    }
}