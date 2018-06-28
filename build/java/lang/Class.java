//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by Fernflower decompiler)
//

package java.lang;

import java.lang.ClassLoader;

public final class Class{
    private static final int ANNOTATION = 8192;
    private static final int ENUM = 16384;
    private static final int SYNTHETIC = 4096;
    private static ClassLoader classLoader;
    private static native void registerNatives();

    private Class(ClassLoader var1) {
        this.classLoader = var1;
    }

    public String toString() {
        return "";
    }

}
