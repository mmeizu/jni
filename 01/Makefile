CPPFLAGS+=-I/usr/lib/jvm/java-7-openjdk-amd64/include/
CPPFLAGS+=-I/usr/lib/jvm/java-7-openjdk-amd64/include/linux

all:
	g++ $(CPPFLAGS) -fPIC -shared Native.cpp -o libtest.so
clean:
	rm  -fr libtest.so *.log *.class *.h
