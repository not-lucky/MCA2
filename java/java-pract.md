# test

## Input from user

```java
Scanner sc = new Scanner(System.in);

String name = sc.nextLine();
```

```java
InputStreamReader isr = new InputStreamReader(System.in);

int i = isr.read();
```

```java
InputStreamReader isr = new InputStreamReader(System.in);
BufferedReader br = new BufferedReader(isr);

int i = br.read();
String s = br.readLine();
```

## Input from File

```java
File file = new File("input.txt");
Scanner sc = new Scanner(file);
while(sc.hasNextLine()){
   System.out.println(sc.nextLine());
}
```

```java
File file = new File("input.txt");
FileReader fr = new FileReader(file);
BufferedReader br = new BufferedReader(fr);
String line;
while((line = br.readLine()) != null){
   System.out.println(line);
}
```

### Output to file

```java
FileWriter writer = new FileWriter("output.txt");

writer.write("Hello World!");
```

```java
FileWriter writer = new FileWriter("output.txt");
BufferedWriter bw = new BufferedWriter(writer);

bw.write("Hello World!");
bw.close();
```

## String

```java
charAt()
indexOf() // ch, ch from_ind, str, str from_ind
contains()
substring()   // start_ind, start_ind end_ind
toLowerCase()
toUpperCase()
```

## Character

```java
getNumericValue()
isLetterOrDigit()
```

## Integer

```java
parseInt()
toBinaryString()
toOctalString()
toHexString()
```

## Random no

```java
import java.util.Random

Random rand = new Random();
rand.nextInt(from_including, upto_not_including);
```
