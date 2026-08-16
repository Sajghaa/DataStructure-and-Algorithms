package Arrays.java;

public class ArrayInsertion {
    public static void main(String[] args) {
        int [] A = new int[10];
        int n = 5;
        A[0] = 10;
        A[1] = 20;
        A[2] = 30;
        A[3] = 40;
        A[4] = 50;

        int x = 25;
        int pos = 2;

        for (int i =  n-1; i >=pos ; i--){
            A[i + 1] = A[i];
        }
        A[pos] = x;

        n++;

        System.out.println("Array after insertion: ");
        for (int i = 0; i < n; i ++){
            System.out.println(A[i] + " ");
        }
    }
}
