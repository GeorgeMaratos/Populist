//Header
#define WORLDSIZE 10000
#define MAXLEADERS 100
#define MAXDISPOSITION 100
#define MAXALLEGIANCE 100
#define DEBUG 1

typedef struct indi
{
  int disposition,allegiance,followers;
  struct indi *Leader;
}Indi;

typedef struct world
{
  Indi *Player;
  Indi **Leaders;
  Indi **Population;
}World;

//Memory
Indi *makeIndi(int,int);
World *makeWorld();
//WorldOps
void seedWorld(World *);
void setLeader(World *);
void timeStep(World *);
void setDispo(World *);
void addLeader(World *);
//Interface
void interface(World *);
void showFollowers(World *);
