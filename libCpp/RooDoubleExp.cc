/*****************************************************************************
 * Project: CMS detector at the CERN
 *
 * Package: PhysicsTools/TagAndProbe/RooDoubleExp
 *
 *
 * Authors:
 *   Nadia Adam, Princeton - neadam@princeton.edu
 *   Adam Hunt, Princeton  - ahunt@princeton.edu
 *   Kalanand Mishra, Fermilab - kalanand@fnal.gov
 *
 * Description:
 *   Defines a probability density function which has exponential decay
 *   distribution at high mass beyond the pole position (say, Z peak)
 *   but turns over (i.e., error function) at low mass due to threshold
 *   effect. We use this to model the background shape in Z->ll invariant
 *   mass.
 * History:
 *
 *
 *****************************************************************************/

#include "RooDoubleExp.h"

ClassImp(RooDoubleExp)

 RooDoubleExp::RooDoubleExp(const char *name, const char *title,
                        RooAbsReal& _x,
                        RooAbsReal& _alpha,
                        RooAbsReal& _beta,
                        RooAbsReal& _gamma,
                        RooAbsReal& _peak) :
   RooAbsPdf(name,title),
   x("x","x",this,_x),
   alpha("alpha","alpha",this,_alpha),
   beta("beta","beta",this,_beta),
   gamma("gamma","gamma",this,_gamma),
   peak("peak","peak",this,_peak)
 { }


 RooDoubleExp::RooDoubleExp(const RooDoubleExp& other, const char* name):
   RooAbsPdf(other,name),
   x("x",this,other.x),
   alpha("alpha",this,other.alpha),
   beta("beta",this,other.beta),
   gamma("gamma",this,other.gamma),
   peak("peak",this,other.peak)
 { }



 Double_t RooDoubleExp::evaluate() const
 {
  // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE

  //Double_t erf = TMath::Erfc((alpha - x) * beta);
  //Double_t erf = RooMath::erfc((alpha - x) * beta);
  //Double_t u = (x - peak)*gamma;

  //if(u < -70) u = 1e20;
  //else if( u>70 ) u = 0;
  //else u = exp(-u);   //exponential decay
  //return erf*u;

  double ret = alpha*exp(beta*(x-90.)) + gamma*exp(peak*(x-90.));
  //double ret = peak + (1.+2.*(beta)/(alpha)*x+3.*(gamma)/(beta)*x*x)*exp(alpha*x+beta*x*x+gamma*x*x*x);
  //double ret = alpha + beta * x;

  return ret;
 }
