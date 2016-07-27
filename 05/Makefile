CPPFLAGS+=-I/usr/lib/jvm/java-7-openjdk-amd64/include/
CPPFLAGS+=-I/usr/lib/jvm/java-7-openjdk-amd64/include/linux
LDFLAGS+=-L/usr/lib/jvm/java-7-openjdk-amd64/jre/lib/amd64/server/ -ljvm
main:test.o
	g++  $< $(LDFLAGS) -o $@
%.o:%.cpp
	gcc -c $(CPPFLAGS) $<
%:%.cpp
	g++ $(CPPFLAGS) $< $(LDFLAGS) -o $@
clean:
	@rm -fr test.o main
