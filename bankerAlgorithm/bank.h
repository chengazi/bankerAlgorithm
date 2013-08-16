#ifndef BANK_H
#define BANK_H

#include "resources.h"
class Bank
{
  public:
    getResource(int[] count);
    releaseResource(int[] count);
  private:
    tryDistribute(int[] count);
    isSafe();

  private:
    int needed[PROCESS_NUMBER][RESOURCES_NUMBER] ;
    int available[RESOURCES_NUMBER];
    int allocated[PROCESS_NUMBER][RESOURCES_NUMBER];


}
#endif
