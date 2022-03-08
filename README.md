# 320Lab05



This assignment uses an stree along with the integer object (not to be confused with the basic C int, since this modified class has a count variable as well.) in order to create an in order tree of integer objects that count each time they appear using a random variable within a loop of 10000. I ran into some issues while making this in terms of outputs (which it turned out I just needed to change a cout to an ostr) and the method of counting (which I had ended up using an integer object along with the iterator returned through the stree<T> find() function, where I had set the integer to the node the iterator was pointed to, I incremented the integer, then I set the iterator value to the integer again. After I finished, everything ran very well. I asked some people to take glances at my work when I hit walls to see if I missed something obvious, but they werent able to help me, so I didnt really recieve any significant help on this assignment. None of the other files were modified except for int.h
  
  When running this program, youll need:
  -The main (320Lab05.cpp)
  -int.h
  -d_stiter.h
  -d_stree.h
  -random.h (never ended up using this, but I had it anyways just in case)
  -d_except.h
  
  compiling:
  
  g++ -c 320Lab05.cpp
  g++ 320Lab05.o -o 320Lab05
  ./320Lab05
