package com.tutorial;
import java.util.Queue;
import java.util.LinkedList;

public class App {
    public static void main(String[] args) throws Exception {
        Queue<String> queue = new LinkedList<String>();

        queue.offer("Karen");
        queue.offer("Chad");
        queue.offer("Steve");
        queue.offer("Harold");

        System.out.println(queue.isEmpty());
        System.out.println(queue.size());
        System.out.println(queue.contains("Harold"));

        System.out.println(queue.peek());
        System.out.println(queue);

        queue.poll();

        System.out.println(queue.peek());
        System.out.println(queue);
    }
}
