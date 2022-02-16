package com.tutorial;
import java.util.Stack;

public class App {
    public static void main(String[] args) throws Exception {
        Stack<String> stack = new Stack<String>();

        // System.out.println(stack.empty());

        stack.push("Minecraft");
        stack.push("Skyrim");
        stack.push("DOOM");
        stack.push("Borderlands");
        stack.push("FFVII");

        System.out.println(stack.peek());
        System.out.println(stack);

        stack.pop();

        System.out.println(stack.peek());
        System.out.println(stack);

        System.out.println(stack.search("Borderlands"));
        System.out.println(stack.search("Minecraft"));
        System.out.println(stack.search("Fallout76"));
    }
}
