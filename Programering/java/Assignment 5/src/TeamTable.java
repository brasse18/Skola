import java.util.Scanner;

public class TeamTable {
	
	public static void main(String[] args) {
		boolean run = true;
		Scanner input = new Scanner(System.in);
		int val;
		String[] teamName;
		Integer[] teamPoint;
		
		System.out.print("How many teams?");
		teamName = new String[input.nextInt()];
		teamPoint = new Integer[teamName.length];
		System.out.println("Input the name of the " + teamName.length + " teams:");
		

		input.nextLine();
		for (int i = 0; i < teamName.length; i++) {
			teamName[i] = input.nextLine();
			teamPoint[i] = 0;
		}
		
		while (run) {
			printMenu();
			System.out.print("Your choice:");
			val = input.nextInt();
			input.nextLine();
			
			switch (val) {
			case 5:
				printAvrPoints(teamName, teamPoint);
				break;
			case 4:
				printMaxPoints(teamName, teamPoint);
				
				break;
			case 3:
				printTeam(teamName, teamPoint, input);
				
				break;
			case 2:
				addPointsToTeam(teamName, teamPoint, input);
				
				break;
			case 1:
				printAllTeam(teamName, teamPoint);
				
				break;
			case 0:
				run = false;
				
				break;

			default:
				break;
			}
			
		}
			
		input.close();
	}
	
	public static void printMenu() {
		System.out.println("1. Show all teams and points");
		System.out.println("2. Register points for a team");
		System.out.println("3. Show points for a team");
		System.out.println("4. Show team with most points");
		System.out.println("5. Calculate and show average points");
		System.out.println("0. Exi");
		
	}
	
	public static void printAvrPoints(String[] teamName, Integer[] teamPoint)
	{
		int tempInger = 0;
		for (int i = 0; i < teamPoint.length; i++) {
			tempInger += teamPoint[i];
		}
		
		System.out.println("Average points is " + (double)tempInger / (double)teamPoint.length);
	}
	
	public static void printMaxPoints(String[] teamName, Integer[] teamPoint)
	{
		int tempInger = 0;
		String tempString = "";
		for (int i = 0; i < teamPoint.length; i++) {
			if (teamPoint[i] > tempInger)
			{
				tempInger = teamPoint[i];
				tempString = "The team with most points is " + teamName[i] + " with " + teamPoint[i] + " points";
			}
		}
		System.out.println(tempString);
	}
	
	public static void printTeam(String[] teamName, Integer[] teamPoint, Scanner input)
	{
		System.out.print("Team: ");
		String tempString = input.nextLine();
		for (int i = 0; i < teamName.length; i++) {
			if (teamName[i].equals(tempString))
			{
				System.out.println(teamName[i] + " has " + teamPoint[i] + " points");
			}
		}
	}
	
	public static void addPointsToTeam(String[] teamName, Integer[] teamPoint, Scanner input)
	{
		int tempInger = 0;
		System.out.print("Team: ");
		String tempString = input.nextLine();
		
		for (int i = 0; i < teamName.length; i++) {
			if (teamName[i].equals(tempString))
			{
				System.out.print("Points: : ");
				teamPoint[i] += input.nextInt();
				tempInger = 1;
			}
		}
		if (tempInger == 0)
		{
			System.out.println("The team " + tempString + " was not found!");
		}
	}
	
	public static void printAllTeam(String[] teamName, Integer[] teamPoint)
	{
		System.out.println("Team		Points");
		for (int i = 0; i < teamName.length; i++) {
			System.out.println(teamName[i] + "		" + teamPoint[i]);
		}
	}
	

}
