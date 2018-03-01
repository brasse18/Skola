import java.io.Reader;
import java.util.Scanner;

public class TeamTable {
	
	public static void main(String[] args) {
		boolean run = true;
		Scanner input = new Scanner(System.in);
		int val;
		int nrOfTeams;
		String tempString;
		Integer tempInger;
		String[] teamName;
		Integer[] teamPoint;
		
		System.out.print("How many teams?");
		nrOfTeams = input.nextInt();
		System.out.println("Input the name of the " + nrOfTeams + " teams:");
		
		teamName = new String[nrOfTeams];
		teamPoint = new Integer[nrOfTeams];
		input.nextLine();
		for (int i = 0; i < nrOfTeams; i++) {
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
				tempInger = 0;
				for (int i = 0; i < teamPoint.length; i++) {
					tempInger += teamPoint[i];
				}
				
				System.out.println("Average points is " + (double)tempInger / (double)nrOfTeams);
				break;
			case 4:
				tempInger = 0;
				tempString = "";
				for (int i = 0; i < teamPoint.length; i++) {
					if (teamPoint[i] > tempInger)
					{
						tempInger = teamPoint[i];
						tempString = "The team with most points is " + teamName[i] + " with " + teamPoint[i] + " points";
					}
				}
				System.out.println(tempString);
				
				break;
			case 3:
				System.out.print("Team: ");
				tempString = input.nextLine();
				for (int i = 0; i < teamName.length; i++) {
					if (teamName[i].equals(tempString))
					{
						System.out.println(teamName[i] + " has " + teamPoint[i] + " points");
					}
				}
				
				break;
			case 2:
				tempInger = 0;
				System.out.print("Team: ");
				tempString = input.nextLine();
				
				for (int i = 0; i < teamName.length; i++) {
					if (teamName[i].equals(tempString))
					{
						System.out.print("Points: : ");
						teamPoint[i] = input.nextInt();
						tempInger = 1;
					}
				}
				if (tempInger == 0)
				{
					System.out.println("The team " + tempString + " was not found!");
				}
				
				break;
			case 1:
				System.out.println("Team		Points");
				for (int i = 0; i < teamName.length; i++) {
					System.out.println(teamName[i] + "		" + teamPoint[i]);
				}
				
				break;
			case 0:
				run = false;
				
				break;

			default:
				break;
			}
			
		}
			

	}
	
	public static void printMenu() {
		System.out.println("1. Show all teams and points");
		System.out.println("2. Register points for a team");
		System.out.println("3. Show points for a team");
		System.out.println("4. Show team with most points");
		System.out.println("5. Calculate and show average points");
		System.out.println("0. Exi");
		
	}
	

}
