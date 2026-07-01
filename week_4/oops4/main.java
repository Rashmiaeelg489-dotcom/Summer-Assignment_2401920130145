package oops4;

class outer{
	void display()
	{
		System.out.println("This is inner class");
	}
	class inner
	{
		void display()
		{
			System.out.println("This is inner class");
		}
	}
}
public class main {
	 public static void main(String[] args) 
	 {

	   outer obj = new outer();
       obj.display();
       outer.inner obj2 = obj.new inner();
       obj2.display();
   }

}
