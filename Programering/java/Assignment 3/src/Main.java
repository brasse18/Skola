import java.util.Scanner;

public class Main {

	
	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner reader = new Scanner(System.in);
		String mes = "test..";
		boolean isMatch = false;
		Integer[] upperArray = new Integer[26];
		Integer[] lowerArray = new Integer[26];
		Integer[] digitArray = new Integer[10];
		int otherChars = 0;	
		
		// initialize data to arrays
		for (int i = 0; i < 26; i++) {
			upperArray[i] = 0;
			lowerArray[i] = 0;
			if (i<=9)
			{
				digitArray[i] = 0;
			}
		}
		
		// User input
		System.out.println("Please enter a string: ");
		mes = reader.nextLine();
		
		// search after matching char from string
		for (char ch : mes.toCharArray()) {
			isMatch = false;
			for (int i = 0;i<10;i++) {
			    if (ch == (char) ((int) i+48))
			    {
			    	digitArray[i]++;
			    	isMatch = true;
			    }
			}
			for (int i = 0; i < 26; i++) {
			    if (ch == (char) ((int) i+65))
			    {
			    	upperArray[i]++;
			    	isMatch = true;
			    }
			    else if (ch == (char) ((int) i+97))
			    {
			    	lowerArray[i]++;
			    	isMatch = true;
			    }
			}
			if (isMatch == false)
			{
				otherChars++;
			}
		}
		
		// Printing out findings
		for (int i = 0; i < 26; i++) {
			System.out.print((char) ((int) i+65) + ": " + upperArray[i]);
			System.out.print("		");
			System.out.print((char) ((int) i+97) + ": " + lowerArray[i]);
			if (i<=9)
			{
				System.out.print("		");
				System.out.print((char) ((int) i+48) + ": " + digitArray[i]);
			}
			System.out.println("");
		}
		System.out.println("");
		System.out.println("");
		System.out.println("Other characters: " + otherChars);
		
		
	}

}
