#!/bin/bash

#Bins=( 30 31 33 35 38 39 40 41 43 44 45 46 48 49 )
#Bins=(  0 1 2 3 4 5 6 7 8 9 )
#Bins=(  1 3 5 6 8 17 20 49 52  ) # nominal fit --doFit
#Bins=( 54  )
#Bins=( 31 33 40 41 43 44 45 46 48 49 ) # --doFit --mcSig --altSig
#Bins=( 40 41 43 44 45 46 48 49 )
#Bins=(  3 6 8 40 41 43 44 45 46 48 49 57  ) # nominal fit --doFit --altSig
#Bins=(  57  )
#Bins=(  3 6 11 19 ) # nominal fit --doFit --altBkg
#Bins=( 3 6 )

#### 2018
#Bins=( 0 1 3 6 8 ) 4 14 15 23 24
#  0 1 3 4 5 6 8 9 14
#Bins=( 55 )
#Bins=( 41 42 43 44 45 46 47 48 ) #38 40 41 49 54 59 )
#Bins=( 54 59)

#2016
#Bins=( 40 41 43 44 45 46 48 49 )
Bins=( 14 15 )
nBin=${#Bins[@]}

for ((iBin=0; iBin<$nBin; iBin++))
    do
    # python tnpEGM_fitter.py etc/config/settings_pho_UL2016_postVFP.py --flag passingMedium100XV2 --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    # python tnpEGM_fitter.py etc/config/settings_pho_UL2016_postVFP.py --flag passingMedium100XV2 --doFit --altSig --iBin ${Bins[$iBin]}
    # ADD GAUSS
    #python tnpEGM_fitter.py etc/config/settings_pho_UL2016_postVFP.py --flag passingMedium100XV2 --doFit --mcSig --addGaus --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_UL2016_postVFP.py --flag passingMedium100XV2 --doFit --addGaus --altSig --iBin ${Bins[$iBin]}
    # python tnpEGM_fitter.py etc/config/settings_pho_UL2016_postVFP.py --flag passingMedium100XV2 --doFit --altBkg --iBin  ${Bins[$iBin]}

    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2017.py --flag passALPPreselection --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2017.py --flag passALPPreselection --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2017.py --flag passALPPreselection --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2017.py --flag passALPPreselection --doFit --altBkg --iBin ${Bins[$iBin]}

    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2017.py --flag passingTight94X --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2017.py --flag passingTight94X --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2017.py --flag passingTight94X --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2017.py --flag passingTight94X --doFit --altBkg --iBin ${Bins[$iBin]}


    ##2018
    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2018.py --flag passingTight94X --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2018.py --flag passingTight94X --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2018.py --flag passingTight94X --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ReReco2018.py --flag passingTight94X --doFit --altBkg --iBin ${Bins[$iBin]}

    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2018.py --flag passALPPreselection --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2018.py --flag passALPPreselection --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2018.py --flag passALPPreselection --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_ReReco2018.py --flag passALPPreselection --doFit --altBkg --iBin ${Bins[$iBin]}

    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_LegacyReReco2016.py --flag passALPPreselection --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_LegacyReReco2016.py --flag passALPPreselection --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_LegacyReReco2016.py --flag passALPPreselection --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_LegacyReReco2016.py --flag passALPPreselection --doFit --altBkg --iBin ${Bins[$iBin]}

    ## UL18
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2018.py --flag passALPPreselection --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2018.py --flag passALPPreselection --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2018.py --flag passALPPreselection --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2018.py --flag passALPPreselection --doFit --altBkg --iBin ${Bins[$iBin]}

    ## UL17
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2017.py --flag passALPPreselection --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2017.py --flag passALPPreselection --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2017.py --flag passALPPreselection --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2017.py --flag passALPPreselection --doFit --altBkg --iBin ${Bins[$iBin]}

    ## UL16-pre
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_preVFP.py --flag passALPPreselection --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_preVFP.py --flag passALPPreselection --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_preVFP.py --flag passALPPreselection --doFit --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_preVFP.py --flag passALPPreselection --doFit --altBkg --iBin ${Bins[$iBin]}

    ## UL16-post
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_postVFP.py --flag passALPPreselection --doFit --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_postVFP.py --flag passALPPreselection --doFit --mcSig --altSig --iBin ${Bins[$iBin]}
    #python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_postVFP.py --flag passALPPreselection --doFit --altSig --iBin ${Bins[$iBin]}
    python tnpEGM_fitter.py etc/config/settings_pho_ALP_UL2016_postVFP.py --flag passALPPreselection --doFit --altBkg --iBin ${Bins[$iBin]}

done
