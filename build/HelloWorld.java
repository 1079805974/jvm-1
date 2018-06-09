//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by Fernflower decompiler)
//

class HelloWorld {
    HelloWorld() {
    }

    public native void hello(String var1);

    public static void main(String[] var0) {
        (new HelloWorld()).hello("jni");
    }

    static {
        System.loadLibrary("hello");
    }
}
