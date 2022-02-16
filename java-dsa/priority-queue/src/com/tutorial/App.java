package com.tutorial;
import java.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        // Queue<Double> queue = new LinkedList<>();
        // Queue<Double> queue = new PriorityQueue<>();
        // Queue<Double> queue = new PriorityQueue<>(Collections.reverseOrder());

        // queue.offer(3.0);
        // queue.offer(2.5);
        // queue.offer(4.0);
        // queue.offer(1.5);
        // queue.offer(2.0);

        Queue<String> queue = new PriorityQueue<>();

        queue.offer("B");
        queue.offer("C");
        queue.offer("A");
        queue.offer("F");
        queue.offer("D");

        while (!queue.isEmpty()) {
            System.out.println(queue.poll());
        }
    }
}
