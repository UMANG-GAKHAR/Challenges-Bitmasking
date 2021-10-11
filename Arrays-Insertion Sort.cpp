import java.util.*;
public class Main {
static Scanner scn = new Scanner(System.in);
public static void main(String args[]) {
int[] arr;
arr = take_input();
arr = insertion_sort(arr);
display(arr);
}
public static int[] take_input() {
int[] arry=null;
//System.out.println(“What size array do you want?”);
int n = scn.nextInt();
if(n>=1&&n<=1000)
{
int[] arr = new int[n];
for (int i = 0; i < arr.length; i++) {
//System.out.println(“Enter value:”);
int tmp = scn.nextInt();
if(tmp<=1000000){
arr[i]=tmp;
}
}
arry=arr;
}
return arry;
}
public static void display(int[] arr) {
for (int i = 0; i < arr.length; i++) {
System.out.print(arr[i]+" ");
}
}

public static int[] insertion_sort(int[] array) {
	int i = array.length - 1, k, j, min;
	for (k = 1; k <= i; k++) {
		min = array[k];
		j = k - 1;
		while (j >= 0 && array[j] > min) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = min;
	}
	return array;
}
}
