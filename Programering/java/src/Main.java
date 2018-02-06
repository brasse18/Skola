import java.util.Scanner;

public class Main {

	public static void main(String[] args) 
	{
		//runPogram1();
		//runPogram2();
		runPogram3();
	}

	public static void runPogram1() 
	{
		int loop = 2;
		int nr = 0;
		boolean isx = false;
		@SuppressWarnings("resource")
		Scanner reader = new Scanner(System.in);
		System.out.println("sdfsdfsdf");
		while (loop <= 4) {
			System.out.print("Please enter the dimension of the board ");
			nr = Integer.parseInt(reader.nextLine());
			for (int y = 0; y < nr; y++) {
				for (int x = 0; x < nr; x++) {
					if (isx)
					{
						System.out.print("X");
						isx = false;
					}
					else
					{
						System.out.print("O");
						isx = true;
					}
				}
				if (isx)
				{
					isx = false;
				}
				else
				{
					isx = true;
				}
				System.out.println("");
			}
			loop++;
		}
		
	}
	
	public static void runPogram2() 
	{
		int nr = 100;
		double sum = 0;
		for (int i = 0; i < nr; i++) {
			sum += i/(100-i);
		}
		System.out.println("Sum is : " + sum);
		
	}
	
	public static void runPogram3() 
	{
		String message = ":mmZ\\dXZmX]Zpg";
		for (int i = 1; i <= 100; i++) {
			for (char ch : message.toCharArray()) {
				//System.out.println("Mystick key: " + (int)ch);
				System.out.print(uncryptKey(ch, i));
			}
			if (i%4 == 0)
			{
				System.out.println("");
			} else
			{
				System.out.print("			");
			}
		}
		
	}
	
	public static char uncryptKey(char ch,int key)
	{
		char outChar;
		if (((int)ch) - key - 32 > 0 )
{
		outChar = (char)((int)ch - key);
} else {
	outChar = (char)(127 + ((int)ch - 32 - key));
	
}
		
		return outChar;
	}
	
}
