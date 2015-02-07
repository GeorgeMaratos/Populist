//This is the memory allocation function list
#include<stdlib.h>
#include<stdio.h>
#include"Head.h"

Indi*
makeIndi(int d, int a)
{
  //variables
  Indi *ret;
  //operations
  ret = malloc(sizeof(Indi));
  ret->disposition = d;
  ret->allegiance = a;
  ret->followers = 0;
  ret->Leader = NULL;
  //return
  return ret;
}

World*
makeWorld()
{
  //variables
  int i;
  World *ret;
  //operations
  ret = malloc(sizeof(World));
  ret->Population = malloc(sizeof(Indi *) * WORLDSIZE);
  ret->Leaders = malloc(sizeof(Indi *) * MAXLEADERS);
  for(i = 0;i < WORLDSIZE;i++)
    ret->Population[i] = NULL;
  for(i = 0;i < MAXLEADERS;i++)
    ret->Leaders[i] = NULL;
  ret->Player = NULL;
  //return
  return ret;
}
