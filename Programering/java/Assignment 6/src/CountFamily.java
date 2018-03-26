import java.util.Scanner;

public class CountFamily {

	public static void main(String[] args) {
		Family[] data;
		int dataSize = 0;
		Scanner input = new Scanner(System.in);
		
		System.out.println("How many families are there?");
		dataSize = input.nextInt();
		data = new Family[dataSize];
		
		for (int i = 0; i < data.length; i++) {
			System.out.println("Income and size for family " + (i+1));
			data[i] = new Family(input.nextDouble(), input.nextInt());
		}
		
		System.out.println("Enter the average cost for housing and food");
		int housing = input.nextInt();
		int food = input.nextInt();
		
		System.out.println("Displaying all families that would need financial assistance");
		
		int count = 0;
		for (int i = 0; i < data.length; i++) {
			if (data[i].needAssistance(housing, food))
			{
				System.out.println("Family " + (i+1) + " needs assistance: " + data[i].toString());
				count++;
			}
		}
		System.out.println("The count is: " + count);
		
		
		input.close();

	}

}
