//World Operators
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"Head.h"

void
seedWorld(World *w)
{
  //variables
  int i, dis, alleg;
  Indi *temp;
  //operations
  srand(time(NULL));
  for(i = 0;i < WORLDSIZE;i++){
    dis = rand() % MAXDISPOSITION;
    alleg = rand() % MAXALLEGIANCE;
    temp = makeIndi(dis,alleg);
    w->Population[i] = temp;
  }
  w->Player = makeIndi(dis,alleg);
  w->Leaders[0] = w->Player;
}

void
setLeader(World *w)
{
  //variables
  int i,j;
  Indi *tempLead,*tempPop;
  //operations
  for(j = 0;j < MAXLEADERS;j++){
    tempLead = w->Leaders[j];
    if(tempLead != NULL)
    for(i = 0;i < WORLDSIZE;i++){
      tempPop = w->Population[i];
      if(tempLead->disposition == tempPop->disposition){
	if(tempPop->Leader != NULL) tempPop->Leader->followers--;
        tempPop->Leader = tempLead;
        tempLead->followers++;
      }
    }
  }
}

void
setDispo(World *w)
{
  //variables
  int i;
  //ops
  srand(time(NULL));
  for(i = 0;i < WORLDSIZE;i++)
    w->Population[i]->disposition = rand() % MAXDISPOSITION;
}

void
timeStep(World *w)
{
  //variables
  //ops
  setDispo(w);
  setLeader(w);
}

void
addLeader(World *w)
{
  //variables
  int i, dis, alleg;
  Indi *temp;
  //ops
  sleep(1);
  srand(time(NULL));
  dis = rand() % MAXDISPOSITION;
  alleg = rand() % MAXALLEGIANCE;
  temp = makeIndi(dis,alleg);
  for(i = 0;i < MAXLEADERS; i++){
    if(w->Leaders[i] == NULL){
      w->Leaders[i] = temp;
      return;
    }
  }
}
