package dsa;

import java.io.*;

class ExamFileInputStreamDemo {

    public static void main(String args[]) {
        try (FileInputStream f = new FileInputStream("Input.txt")) {

            for (int i = 0; i < 42; i++) {
                System.out.print((char) f.read());
            }

            for (int i = 0; i < 10; i++) {
                f.read();
                
            }

            System.out.println("\nC04\nLevel-3\n1\nCOLLEGE\nPRE");

            byte[] b = new byte[50];
            f.read(b);
            System.out.println(new String(b, 0, 50));

        } catch (FileNotFoundException e) {
            System.err.println("File not found: " + e.getMessage());
        } catch (IOException e) {
            System.err.println("IOException: " + e.getMessage());
        }
    }
}