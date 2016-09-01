/*!
   \file eam.h
   \brief Function prototypes of EAM methods
   \author Piyush Divyankar
   \date 1/08/2016
 */

#include "datatypes.h"
#include "point3D.h"

#ifndef _EAM_H
  #define _EAM_H 1

int * atomicMatrixRead(char *, parameter *);
int * readCrystalFileFCC(char *);

void print_AtomicMatrix(int *, int, int);

Sn_fcc * Sn_fcc_readNeighbours_fromFile(char *);

void print_Neighbours(Sn_fcc *);

Sn_fcc * _defaultFCCNeighbours();

void eam_data_read(binEAMpot **, char *, char [], char []);

rdf * rdf_radius_retrive(binEAMpot *, double);

eDen_df * eDen_df_charge_density_retrive(binEAMpot *, double);

double energyAtIndexFCC(int, int *, binEAMpot *, parameter *, Sn_fcc *);

void energyInMatrix(double **, int *, binEAMpot *, parameter *, Sn_fcc *);

void printEnergyMap(double *, int, int);

double energyToSwap(int, int *, binEAMpot *, parameter *, Sn_fcc *);

void deltaEnergyMatrix(double **, int *, binEAMpot *, parameter *, Sn_fcc *);
#endif /* ifndef _EAM_H */
