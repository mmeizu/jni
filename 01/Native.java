public class Native {
	static {
		System.loadLibrary("test");
	}
	public static native void sayHello();
	public static void main(String[] argv) {
		sayHello();
	}
}
