CPPFLAGS+=-I/usr/lib/jvm/java-7-openjdk-amd64/include/
CPPFLAGS+=-I/usr/lib/jvm/java-7-openjdk-amd64/include/linux

all:
	g++ $(CPPFLAGS) -fPIC -shared test.cpp -o libtest.so
clean:
	rm  -fr libtest.so *.class *.log *.h
