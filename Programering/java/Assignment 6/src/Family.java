
public class Family {
	private double income = 0;
	private int size = 0;
	
	Family(double income, int size)
	{
		this.income = income;
		this.size = size;
	}
	
	public boolean needAssistance(int housingCost, int foodCost)
	{
		boolean out = false;
		
		if (((housingCost + foodCost) * size) > (income / 2))
		{
			out = true;
		}
		
		return out;
	}
	
	public String toString()
	{
		String out = size + " people with income " + income;
		
		return out;
	}
	
	
}
