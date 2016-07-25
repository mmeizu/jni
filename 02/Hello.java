import java.util.Date;

public class Hello {
	static 
	{
		System.loadLibrary("test");
	}
	public int property;
	public int function(int foo, Date date, int[] arr) {
		System.out.println(foo);
		System.out.println("funciton");
		System.out.println("funciton");
		System.out.println(property);
		return 0;
	}

	public native void test();
	public static void main(String[] argv){
		Hello ss = new Hello();
		ss.property = 100;
		ss.test();
	};

}
