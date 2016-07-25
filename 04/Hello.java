import java.util.Date;

public class Hello {
	static 
	{
		System.loadLibrary("test");
	}
	public native void test();
	public static void main(String[] argv){
		new Hello().test();
	};

}
