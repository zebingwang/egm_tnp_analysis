/*****************************************************************************
 * Project: CMS detector at the CERN
 *
 * Package: PhysicsTools/TagAndProbe/RooTripleExp
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

#include "RooTripleExp.h"

ClassImp(RooTripleExp)

 RooTripleExp::RooTripleExp(const char *name, const char *title,
                        RooAbsReal& _x,
                        RooAbsReal& _alpha,
                        RooAbsReal& _beta,
                        RooAbsReal& _gamma,
                        RooAbsReal& _peak,
                        RooAbsReal& _p1,
                        RooAbsReal& _p2) :
   RooAbsPdf(name,title),
   x("x","x",this,_x),
   alpha("alpha","alpha",this,_alpha),
   beta("beta","beta",this,_beta),
   gamma("gamma","gamma",this,_gamma),
   peak("peak","peak",this,_peak),
   p1("p1","p1",this,_p1),
   p2("p2","p2",this,_p2)
 { }


 RooTripleExp::RooTripleExp(const RooTripleExp& other, const char* name):
   RooAbsPdf(other,name),
   x("x",this,other.x),
   alpha("alpha",this,other.alpha),
   beta("beta",this,other.beta),
   gamma("gamma",this,other.gamma),
   peak("peak",this,other.peak),
   p1("p1",this,other.p1),
   p2("p2",this,other.p2)
 { }



 Double_t RooTripleExp::evaluate() const
 {
  // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE

  //Double_t erf = TMath::Erfc((alpha - x) * beta);
  //Double_t erf = RooMath::erfc((alpha - x) * beta);
  //Double_t u = (x - peak)*gamma;

  //if(u < -70) u = 1e20;
  //else if( u>70 ) u = 0;
  //else u = exp(-u);   //exponential decay
  //return erf*u;

  double ret = alpha*exp(beta*(x-90.)) + gamma*exp(peak*(x-90.)) + p1*exp(p2*(x-90.));
  //double ret = peak + (1.+2.*(beta)/(alpha)*x+3.*(gamma)/(beta)*x*x)*exp(alpha*x+beta*x*x+gamma*x*x*x);
  //double ret = alpha + beta * x;

  return ret;
 }
