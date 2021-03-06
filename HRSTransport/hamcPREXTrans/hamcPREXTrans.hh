#ifndef PREX_SEPTUM
#define PREX_SEPTUM

#include "HRSTransBase.hh"

class hamcPREXTrans : public HRSTransBase
{
public:
    hamcPREXTrans();
    ~hamcPREXTrans();

    bool TransLeftHRS(double* vector_jjl);
    bool TransRightHRS(double* vector_jjl);
    void ReconLeftHRS(double* vector_jjl);
    void ReconRightHRS(double* vector_jjl);

    double GetAngle() { return cModelAngle; }

private:
    const double cModelAngle;
};

#endif
