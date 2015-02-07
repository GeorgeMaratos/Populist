//Contains functions for the Player interface
#include<stdlib.h>
#include<stdio.h>
#include"Head.h"

void
interface(World *w)
{
  //variables
  int input, time;
  //ops
  time = 0;
  for(;;){
//    printf("Enter: ");
    scanf("%d", &input);
    switch(input){
      case 0: return;
      case 1: 
	showFollowers(w);
        break;
      case 2:
	timeStep(w);
	time++;
//	printf("Day: %d\n",time);
	break;
      case 3:
	addLeader(w);
	break;
    }
  }
}

void
showFollowers(World *w)
{
  //variables
  int i;
  //ops
  for(i = 0;i < MAXLEADERS;i++){
    if(w->Leaders[i] != NULL)
      printf("Leader [%d] disp: %d\n Followers: %d\n",i,w->Leaders[i]->disposition,w->Leaders[i]->followers);
  }
  printf("\n");
}
