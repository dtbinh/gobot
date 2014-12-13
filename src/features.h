#ifndef _FEATURES_H_
#define _FEATURES_H_

#define NUMBER_OF_FEATURES 40

class BlockFinalFeatures
{
  public:
    // Local Features
    int size;
    int perimeter;
    int opponents;
    int liberties;
    int protectedLiberties;
    int autoAtariLiberties;
    int secondOrderLiberties;
    int thirdOrderLiberties;
    int numberOfAdjacentOpponentBlocks;
    int localMajority;
    float centerOfMass;
    int boundingBoxSize;
    // Color Enclosed Territory Features
    int CETNumberOfTerritories;
    int CETSize;
    int CETPerimeter;
    float CETCenterOfMass;
    // Optimistic Chain Features
    int OCNumberOfBlocks;
    int OCSize;
    int OCPerimeter;
    int OCCETNumberOfTerritories;
    int OCCETSize;
    int OCCETPerimeter;
    float OCCETCenterOfMass;
    int OCDTNumberOfTerritories;
    int OCDTDirectLiberties;
    int OCDTLibertiesOfFriendlyBlocks;
    int OCDTLibertiesOfEnemyBlocks;
    // Weakest Adjacent Enemy Features
    int WAEPerimeter;
    int WAELiberties;
    int WAESharedLiberties;
    // Second Weakest Adjacent Enemy Features
    int SWAEPerimeter;
    int SWAELiberties;
    int SWAESharedLiberties;
    // Weakest Adjacent Chained Enemy Features
    int WACEPerimeter;
    int WACELiberties;
    int WACESharedLiberties;
    // Disputed Territory Features
    int DTNumberOfTerritories;
    int DTDirectLiberties;
    int DTLibertiesOfFriendlyBlocks;
    int DTLibertiesOfEnemyBlocks;

    void print(void) const;
    float* getFeatureVector(void) const;
};

#endif
