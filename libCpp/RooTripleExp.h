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

#ifndef ROO_TRIPLE_EXP
#define ROO_TRIPLE_EXP

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooAbsReal.h"
#include "TMath.h"
#include "RooMath.h"

class RooTripleExp : public RooAbsPdf {
public:
  RooTripleExp() {};
  RooTripleExp(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _alpha,
	      RooAbsReal& _beta,
	      RooAbsReal& _gamma,
	      RooAbsReal& _peak,
        RooAbsReal& _p1,
        RooAbsReal& _p2);

  RooTripleExp(const RooTripleExp& other, const char* name);
  inline virtual TObject* clone(const char* newname) const { return new RooTripleExp(*this,newname); }
  inline ~RooTripleExp() {}
  Double_t evaluate() const ;


  ClassDef(RooTripleExp,2);

protected:

  RooRealProxy x ;
  RooRealProxy alpha ;
  RooRealProxy beta ;
  RooRealProxy gamma ;
  RooRealProxy peak ;
  RooRealProxy p1 ;
  RooRealProxy p2 ;

};

#endif
