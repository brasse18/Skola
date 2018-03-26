
public class Test {
	public static void main(String[] args) {
		System.out.println(getSuffix(12345, 4));
	}
	
	public static int getSuffix(int value, int numberOfDigits) {
		String temp;
		int out;
		temp = String.valueOf(value);
		temp = temp.substring(temp.length() - numberOfDigits, temp.length());
		out = Integer.parseInt(temp);
		return out;
	}
}

