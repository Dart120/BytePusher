bytepusher: 
	g++ main.cpp  memory.cpp outer_loop.cpp poll_stdin.cpp print.cpp inner_loop.cpp screen_update.cpp audio.cpp -I /Library/Frameworks/SDL2.framework/Versions/A/Headers -F /Library/Frameworks/ -framework SDL2 --std=c++2a -I fmt/include

