CPP=g++ -std=gnu++11
CPPFLAGS=`pkg-config gtkmm-3.0 --cflags --libs` 
LDFLAGS= -I/usr/include/libxml++-2.6 `pkg-config gtkmm-3.0 --cflags --libs`
VPATH=back

OBJS=main.o multimediaApi.o ObjetMulti.o audio_file.o


all: player

player: $(OBJS) 
	$(CPP) $^ -o $@ $(LDFLAGS)
	@mkdir ./obj
	@mv *.o ./obj

main.o: multimediaApi.h
multimediaApi.o: audio_file.h ObjetMulti.h
ObjetMulti.o: audio_file.h

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $<

clean:
	@rm -f player
	@rm -f *.o  3
	@rm -r ./obj
	
