// Online Java Compiler
// Use this editor to write, compile and run your Java code online
interface Sortable 
{
    void sort(int[] arr);
}
class BubbleSort implements Sortable
{
    public void sort(int[] arr)
    {
        for(int i=0; i<arr.length-1;i++)
        {
            for(int j=0; j<arr.length-i-1;j++)
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
// SelectionSort.java
class SelectionSort implements Sortable
{
    public void sort(int[] arr)
    {
        for(int i=0; i<arr.length-1; i++)
        {
            int MinIndex = i;
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[j]<arr[MinIndex])
                {
                 MinIndex = j;   
                }
            }
            int temp = arr[i];
            arr[i] = arr[MinIndex];
            arr[MinIndex] = temp;
        }
    }
}
class Main {
    public static void main(String[] args) {
            int[] arr = {
            4,
            2,
            0,
            3,
            1,
            6,
            8
        };
        Sortable bubbleSort = new BubbleSort();
        bubbleSort.sort(arr);
        System.out.print("Bubble Sort: ");
        printArray(arr);
    }
        Sortable selectionSort = new SelectionSort();
        selectionSort.sort(arr);
        System.out.print("Selection Sort: ");
        printArray(arr);
        
        private static void printArray(int[] arr)
        {
            for(int num:arr)
            {
                System.out.print(num + " ");
            }
        }
        System.out.print();
    }
}
