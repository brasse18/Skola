import java.util.Scanner;

public class Main {

	public static void main(String[] args) 
	{
		runPogram1();
		
		//runPogram2();
		//runPogram3();
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
		
	}
	
	public static void runPogram3() 
	{
		
	}
	
}
