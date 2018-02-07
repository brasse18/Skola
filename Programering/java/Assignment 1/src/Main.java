import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {

	private static float dolToSek = 8.32561f;

	public static void main(String[] args) {
		runPogram1();
		runPogram2();
		runPogram3();

	}

	public static void runPogram1() {
		float mony = 0;
		@SuppressWarnings("resource")
		Scanner reader = new Scanner(System.in);
		boolean error = false;
		int val;
		int nr = 0;
		while (nr != 5) {
			error = false;
			mony = 0;
			val = -1;
			printInfo(val);
			// testar så att det bara har skrivits in integers
			try {
				val = reader.nextInt();
				if (val != 0 && val != 1) {
					error = true;
				}
				;
				printInfo(val);
				if (!error) {
					mony = reader.nextFloat();
				}
				;
				if (!error) {
					printMony(val, mony);
				}
				;

			} catch (InputMismatchException e) {
				error = true;
			}
			System.out.println("");
			nr++;
		}
	}

	public static void runPogram2() {
		@SuppressWarnings("resource")
		Scanner reader = new Scanner(System.in);
		int nr = 0;
		while (nr != 4) {
			System.out.print("Enter an integer: ");
			int value = reader.nextInt();
			if (value % 5 == 0) {
				System.out.print("HiFive ");
			}
			if (value % 2 == 0) {
				System.out.print("Georgia");
			} else if (value % 3 == 0) {
				System.out.print("Georgia");
			}

			System.out.println("");
			nr++;
		}
	}

	public static void runPogram3() {
		@SuppressWarnings("resource")
		Scanner reader = new Scanner(System.in);
		String sentence = "";
		int nr = 0;
		while (nr != 4) {
			System.out.println("Please enter a one line question or statement.");
			sentence = reader.nextLine();
			if (sentence.endsWith("?")) {
				if (sentence.length() % 2 == 0) {
					System.out.println("Yes");
				} else {
					System.out.println("No");
				}
			} else if (sentence.endsWith("!")) {
				System.out.println("Wow");
			} else {
				System.out.println("You always say " + '"' + sentence + '"');
			}
			System.out.println("");
			nr++;
		}
	}

	public static void printInfo(int val) {
		switch (val) {
		case -1: {
			System.out.println("Enter the exchange rate from dollars to SEK: 8.32561");
			System.out.print("Enter 0 to convert dollars to SEKand 1 vice versa: ");
		}
			break;
		case 0: {
			System.out.print("Enter the dollar amount: ");
		}
			break;
		case 1: {
			System.out.print("Enter the SEKamount: ");
		}
			break;

		default: {
			System.out.println("Incorrect input");
		}
			break;
		}
	}

	public static void printMony(int val, float mony) {
		float sum;
		String outPut = "";
		int nr = 0;
		switch (val) {
		case 0: {
			sum = mony * dolToSek;
			outPut = String.valueOf(sum);
			nr = outPut.indexOf('.');
			System.out.println("$" + mony + " is " + outPut.substring(0, nr + 2) + " SEK");
		}
			break;
		case 1: {
			sum = mony / dolToSek;
			outPut = String.valueOf(sum);
			nr = outPut.indexOf('.');
			System.out.println(mony + " SEK is $" + outPut.substring(0, nr + 3));
		}
			break;

		default:
			break;
		}
	}
}
