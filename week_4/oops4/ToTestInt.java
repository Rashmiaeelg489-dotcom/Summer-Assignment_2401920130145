package oops4;

interface Test
{
	int square(int n);
}
class arithmetic implements Test
{
	public int square(int n)
	{
        return n*n;
    }
}
public class ToTestInt 
{
	 public static void main(String[] args)
	 {
	        arithmetic obj = new arithmetic();

	        System.out.println("Square = " + obj.square(5));
	    }
	
}