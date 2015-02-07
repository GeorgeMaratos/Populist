#include<stdlib.h>
#include<stdio.h>
#include"Head.h"

void
main()
{
  //variables
  World *Popu;
  //operations
  Popu = makeWorld();
  seedWorld(Popu);
  setLeader(Popu);
  interface(Popu);
}
