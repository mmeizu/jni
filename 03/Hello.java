import java.util.Date;

public class Hello {
	Father p = new Child();
	static 
	{
		System.loadLibrary("test");
	}
	public native void test();
	public static void main(String[] argv){
		new Hello().test();
	};

}
