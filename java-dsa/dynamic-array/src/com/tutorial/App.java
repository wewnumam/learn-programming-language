package com.tutorial;
import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        // ArrayList<String> arrayList = new ArrayList<String>();

        // DynamicArray dynamicArray = new DynamicArray();
        DynamicArray dynamicArray = new DynamicArray(5);
        
        dynamicArray.add("A");
        dynamicArray.add("B");
        dynamicArray.add("C");
        dynamicArray.add("D");
        dynamicArray.add("E");

        dynamicArray.insert(0, "X");
        
        dynamicArray.delete("A");
        dynamicArray.delete("B");
        dynamicArray.delete("C");

        
        System.out.println(dynamicArray.toString());
        System.out.printf("indexOfC : %2d\n", dynamicArray.search("C"));
        System.out.printf("    size : %2d\n", dynamicArray.size);
        System.out.printf("capacity : %2d\n", dynamicArray.capacity);
        System.out.printf("   empty : %s\n", dynamicArray.isEmpty());
    }
}
