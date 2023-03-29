#############################################################
########## General settings
#############################################################
# flag to be Tested

EB = '(ph_abseta < 1.4442)'
EE = '(ph_abseta > 1.566 && ph_abseta < 2.5)'
eff_eta_min = [0.0000, 1.0000, 1.4790, 2.0000, 2.2000, 2.3000, 2.4000]
eff_eta_max = [1.0000, 1.4790, 2.0000, 2.2000, 2.3000, 2.4000, 5.0000]
eff_range = '(ph_abseta > %f && ph_abseta < %f)'

chiso = '(ph_chIso - event_rho * %f)'
chiso_eff = [0.0112, 0.0108, 0.0106, 0.01002, 0.0098, 0.0089, 0.0087]
chCut_EB = 0.65
chCut_EE = 0.517
chisoCut = '%f'


neuiso = '(ph_neuIso - event_rho * %f)'
neuiso_eff = [0.0668, 0.1054, 0.0786, 0.0233, 0.0078, 0.0028, 0.0137]
neuCut_EB = [0.317, 0.01512, 0.00002259]
neuCut_EE = [2.716, 0.0117, 0.000023]
neuisoCut = '-%f - ph_et*%f - ph_et*ph_et*%.8f'

chiso_range = [chiso%(chiso_eff[0]), chiso%(chiso_eff[1]), chiso%(chiso_eff[2]), chiso%(chiso_eff[3]), chiso%(chiso_eff[4]), chiso%(chiso_eff[5]), chiso%(chiso_eff[6])]
chisoCut_range_EB = chisoCut%(chCut_EB)
chisoCut_range_EE = chisoCut%(chCut_EE)
neuiso_range = [neuiso%(neuiso_eff[0]), neuiso%(neuiso_eff[1]), neuiso%(neuiso_eff[2]), neuiso%(neuiso_eff[3]), neuiso%(neuiso_eff[4]), neuiso%(neuiso_eff[5]), neuiso%(neuiso_eff[6])]
neuisoCut_range_EB = neuisoCut%(neuCut_EB[0], neuCut_EB[1], neuCut_EB[2])
neuisoCut_range_EE = neuisoCut%(neuCut_EE[0], neuCut_EE[1], neuCut_EE[2])
##### max( 0.0, chiso) < chisoCut
chiso_rhocorr_1 = '((' + chiso_range[0] + ' > 0.0 && ' + chiso_range[0] + ' < ' + chisoCut_range_EB + ') || ' + chiso_range[0] + ' < 0.0)'
chiso_rhocorr_2 = '((' + chiso_range[1] + ' > 0.0 && ' + chiso_range[1] + ' < ' + chisoCut_range_EB + ') || ' + chiso_range[1] + ' < 0.0)'
chiso_rhocorr_3 = '((' + chiso_range[2] + ' > 0.0 && ' + chiso_range[2] + ' < ' + chisoCut_range_EE + ') || ' + chiso_range[2] + ' < 0.0)'
chiso_rhocorr_4 = '((' + chiso_range[3] + ' > 0.0 && ' + chiso_range[3] + ' < ' + chisoCut_range_EE + ') || ' + chiso_range[3] + ' < 0.0)'
chiso_rhocorr_5 = '((' + chiso_range[4] + ' > 0.0 && ' + chiso_range[4] + ' < ' + chisoCut_range_EE + ') || ' + chiso_range[4] + ' < 0.0)'
chiso_rhocorr_6 = '((' + chiso_range[5] + ' > 0.0 && ' + chiso_range[5] + ' < ' + chisoCut_range_EE + ') || ' + chiso_range[5] + ' < 0.0)'
chiso_rhocorr_7 = '((' + chiso_range[6] + ' > 0.0 && ' + chiso_range[6] + ' < ' + chisoCut_range_EE + ') || ' + chiso_range[6] + ' < 0.0)'

#chiso_rhocorr_1 = '(' + chiso_range[0] + ' < ' + chisoCut_range_EB + ')'
#chiso_rhocorr_2 = '(' + chiso_range[1] + ' < ' + chisoCut_range_EB + ')'
#chiso_rhocorr_3 = '(' + chiso_range[2] + ' < ' + chisoCut_range_EE + ')'
#chiso_rhocorr_4 = '(' + chiso_range[3] + ' < ' + chisoCut_range_EE + ')'
#chiso_rhocorr_5 = '(' + chiso_range[4] + ' < ' + chisoCut_range_EE + ')'
#chiso_rhocorr_6 = '(' + chiso_range[5] + ' < ' + chisoCut_range_EE + ')'
#chiso_rhocorr_7 = '(' + chiso_range[6] + ' < ' + chisoCut_range_EE + ')'

##### max( 0.0, neuiso) < neuisoCut
neuiso_rhocorr_1 = '((' + neuiso_range[0] + ' > 0.0 && (' + neuiso_range[0] + neuisoCut_range_EB + ') < 0.0) || ' + neuiso_range[0] + ' < 0.0)'
neuiso_rhocorr_2 = '((' + neuiso_range[1] + ' > 0.0 && (' + neuiso_range[1] + neuisoCut_range_EB + ') < 0.0) || ' + neuiso_range[1] + ' < 0.0)'
neuiso_rhocorr_3 = '((' + neuiso_range[2] + ' > 0.0 && (' + neuiso_range[2] + neuisoCut_range_EE + ') < 0.0) || ' + neuiso_range[2] + ' < 0.0)'
neuiso_rhocorr_4 = '((' + neuiso_range[3] + ' > 0.0 && (' + neuiso_range[3] + neuisoCut_range_EE + ') < 0.0) || ' + neuiso_range[3] + ' < 0.0)'
neuiso_rhocorr_5 = '((' + neuiso_range[4] + ' > 0.0 && (' + neuiso_range[4] + neuisoCut_range_EE + ') < 0.0) || ' + neuiso_range[4] + ' < 0.0)'
neuiso_rhocorr_6 = '((' + neuiso_range[5] + ' > 0.0 && (' + neuiso_range[5] + neuisoCut_range_EE + ') < 0.0) || ' + neuiso_range[5] + ' < 0.0)'
neuiso_rhocorr_7 = '((' + neuiso_range[6] + ' > 0.0 && (' + neuiso_range[6] + neuisoCut_range_EE + ') < 0.0) || ' + neuiso_range[6] + ' < 0.0)'

#neuiso_rhocorr_1 = '(' + neuiso_range[0] + ' < ' + neuisoCut_range_EB + ')'
#neuiso_rhocorr_2 = '(' + neuiso_range[1] + ' < ' + neuisoCut_range_EB + ')'
#neuiso_rhocorr_3 = '(' + neuiso_range[2] + ' < ' + neuisoCut_range_EE + ')'
#neuiso_rhocorr_4 = '(' + neuiso_range[3] + ' < ' + neuisoCut_range_EE + ')'
#neuiso_rhocorr_5 = '(' + neuiso_range[4] + ' < ' + neuisoCut_range_EE + ')'
#neuiso_rhocorr_6 = '(' + neuiso_range[5] + ' < ' + neuisoCut_range_EE + ')'
#neuiso_rhocorr_7 = '(' + neuiso_range[6] + ' < ' + neuisoCut_range_EE + ')'


hoe = 'ph_hoe < %f'
hoeCut_EB = 0.02148
hoeCut_EE = 0.0321

range1 = EB + ' && ' + eff_range%(eff_eta_min[0], eff_eta_max[0]) + ' && ' + chiso_rhocorr_1 + ' && ' + neuiso_rhocorr_1 + ' && ' + hoe%(hoeCut_EB)
range2 = EB + ' && ' + eff_range%(eff_eta_min[1], eff_eta_max[1]) + ' && ' + chiso_rhocorr_2 + ' && ' + neuiso_rhocorr_2 + ' && ' + hoe%(hoeCut_EB)
range3 = EE + ' && ' + eff_range%(eff_eta_min[2], eff_eta_max[2]) + ' && ' + chiso_rhocorr_3 + ' && ' + neuiso_rhocorr_3 + ' && ' + hoe%(hoeCut_EE)
range4 = EE + ' && ' + eff_range%(eff_eta_min[3], eff_eta_max[3]) + ' && ' + chiso_rhocorr_4 + ' && ' + neuiso_rhocorr_4 + ' && ' + hoe%(hoeCut_EE)
range5 = EE + ' && ' + eff_range%(eff_eta_min[4], eff_eta_max[4]) + ' && ' + chiso_rhocorr_5 + ' && ' + neuiso_rhocorr_5 + ' && ' + hoe%(hoeCut_EE)
range6 = EE + ' && ' + eff_range%(eff_eta_min[5], eff_eta_max[5]) + ' && ' + chiso_rhocorr_6 + ' && ' + neuiso_rhocorr_6 + ' && ' + hoe%(hoeCut_EE)
range7 = EE + ' && ' + eff_range%(eff_eta_min[6], eff_eta_max[6]) + ' && ' + chiso_rhocorr_7 + ' && ' + neuiso_rhocorr_7 + ' && ' + hoe%(hoeCut_EE)

ALPPreselection = '(' + range1 + ') || ' + '(' + range2 + ') || ' + '(' + range3 + ') || ' + '(' + range4 + ') || ' + '(' + range5 + ') || ' + '(' + range6 + ') || ' + '(' + range7 + ')'

flags = {
    #'passingLoose100XV2'   : '(passingLoose100XV2  == 1)',
    #'passingMedium100XV2'  : '(passingMedium100XV2 == 1)',
    #'passingTight100XV2'   : '(passingTight100XV2  == 1)',
    #'passingMVA94XV2wp80' : '(passingMVA94XV2wp80 == 1)',
    #'passingMVA94XV2wp90' : '(passingMVA94XV2wp90 == 1)',
    'passALPPreselection' : ALPPreselection,#bing
    }

baseOutDir = 'results/UL2016_preVFP/tnpPhoID/'

#############################################################
########## samples definition  - preparing the samples
#############################################################
### samples are defined in etc/inputs/tnpSampleDef.py
### not: you can setup another sampleDef File in inputs
import etc.inputs.tnpSampleDef as tnpSamples
tnpTreeDir = 'tnpPhoIDs'

samplesDef = {
    'data'   : tnpSamples.UL2016_preVFP['data_Run2016B'].clone(),
    'mcNom'  : tnpSamples.UL2016_preVFP['DY_madgraph'].clone(),
    'mcAlt'  : tnpSamples.UL2016_preVFP['DY_amcatnloext'].clone(),
    'tagSel' : tnpSamples.UL2016_preVFP['DY_madgraph'].clone(),
}
## can add data sample easily
samplesDef['data'].add_sample( tnpSamples.UL2016_preVFP['data_Run2016B_ver2'] )
samplesDef['data'].add_sample( tnpSamples.UL2016_preVFP['data_Run2016C'] )
samplesDef['data'].add_sample( tnpSamples.UL2016_preVFP['data_Run2016D'] )
samplesDef['data'].add_sample( tnpSamples.UL2016_preVFP['data_Run2016E'] )
samplesDef['data'].add_sample( tnpSamples.UL2016_preVFP['data_Run2016F'] )

## some sample-based cuts... general cuts defined here after
## require mcTruth on MC DY samples and additional cuts
## all the samples MUST have different names (i.e. sample.name must be different for all)
## if you need to use 2 times the same sample, then rename the second one
#samplesDef['data'  ].set_cut('run >= 273726')
samplesDef['data' ].set_tnpTree(tnpTreeDir)
if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_tnpTree(tnpTreeDir)
if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_tnpTree(tnpTreeDir)
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_tnpTree(tnpTreeDir)

if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_mcTruth()
if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_mcTruth()
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_mcTruth()
if not samplesDef['tagSel'] is None:
    samplesDef['tagSel'].rename('mcAltSel_DY_madgraph')
    samplesDef['tagSel'].set_cut('tag_Ele_pt > 37')

## set MC weight, simple way (use tree weight) 
#weightName = 'totWeight'
#if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_weight(weightName)
#if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_weight(weightName)
#if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_weight(weightName)

## set MC weight, can use several pileup rw for different data taking 

weightName = 'weights_2016_run2016.totWeight'
if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_weight(weightName)
if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_weight(weightName)
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_weight(weightName)
if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_puTree('/eos/cms/store/group/phys_egamma/asroy/Tag-and-Probe_Tree/UL2016/PU_Trees/preVFP/DY_madgraph_pho.pu.puTree.root')
if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_puTree('/eos/cms/store/group/phys_egamma/asroy/Tag-and-Probe_Tree/UL2016/PU_Trees/preVFP/DY_amcatnloext_pho.pu.puTree.root')
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_puTree('/eos/cms/store/group/phys_egamma/asroy/Tag-and-Probe_Tree/UL2016/PU_Trees/preVFP/DY_madgraph_pho.pu.puTree.root')



#############################################################
########## bining definition  [can be nD bining]
#############################################################
biningDef = [
   { 'var' : 'ph_sc_eta' , 'type': 'float', 'bins': [-2.5,-2.0,-1.566,-1.4442, -0.8, 0.0, 0.8, 1.4442, 1.566, 2.0, 2.5] },
#   { 'var' : 'ph_et' , 'type': 'float', 'bins': [20,35,50,100,500] },
   { 'var' : 'ph_et' , 'type': 'float', 'bins': [10,15,20,35,50] },
]

#############################################################
########## Cuts definition for all samples
#############################################################
### cut
cutBase   = 'tag_Ele_pt > 35 && abs(tag_sc_eta) < 2.17'

# can add addtionnal cuts for some bins (first check bin number using tnpEGM --checkBins)
#LS: we removed the met cuts cause JEC not ready for UL2016        
#additionalCuts = { 
#   0 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   1 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   2 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   3 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   4 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   5 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   6 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   7 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   8 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#   9 : 'sqrt( 2*event_met_pfmet*tag_Ele_pt*(1-cos(event_met_pfphi-tag_Ele_phi))) < 45',
#}

#### or remove any additional cut (default)
additionalCuts = None

#############################################################
########## fitting params to tune fit by hand if necessary
#############################################################
tnpParNomFit = [
    "meanP[-0.0,-5.0,5.0]","sigmaP[0.9,0.5,5.0]",
    "meanF[-0.0,-5.0,5.0]","sigmaF[0.9,0.5,5.0]",
    "acmsP[60.,50.,80.]","betaP[0.05,0.01,0.08]","gammaP[0.1, -2, 2]","peakP[90.0]",
    "acmsF[60.,50.,80.]","betaF[0.05,0.01,0.08]","gammaF[0.1, -2, 2]","peakF[90.0]",
    ]

tnpParAltSigFit = [
    "meanP[-0.0,-5.0,5.0]","sigmaP[1,0.7,6.0]","alphaP[2.0,1.2,3.5]" ,'nP[3,-5,5]',"sigmaP_2[1.5,0.5,6.0]","sosP[1,0.5,5.0]",
    "meanF[-0.0,-5.0,5.0]","sigmaF[2,0.7,15.0]","alphaF[2.0,1.2,3.5]",'nF[3,-5,5]',"sigmaF_2[2.0,0.5,6.0]","sosF[1,0.5,5.0]",
    "acmsP[60.,50.,75.]","betaP[0.04,0.01,0.06]","gammaP[0.1, 0.005, 1]","peakP[90.0]",
    "acmsF[60.,50.,75.]","betaF[0.04,0.01,0.06]","gammaF[0.1, 0.005, 1]","peakF[90.0]",
    ]
    
tnpParAltSigFit_addGaus = [
    "meanP[-0.0,-5.0,5.0]","sigmaP[1,0.7,6.0]","alphaP[2.0,1.2,3.5]" ,'nP[3,-5,5]',"sigmaP_2[1.5,0.5,6.0]","sosP[1,0.5,5.0]",
    "meanF[-0.0,-5.0,5.0]","sigmaF[2,0.7,6.0]","alphaF[2.0,1.2,3.5]",'nF[3,-5,5]',"sigmaF_2[2.0,0.5,6.0]","sosF[1,0.5,5.0]",
    "meanGF[80.0,70.0,100.0]","sigmaGF[15,5.0,125.0]",
    "acmsP[60.,50.,75.]","betaP[0.04,0.01,0.06]","gammaP[0.1, 0.005, 1]","peakP[90.0]",
    "acmsF[60.,50.,85.]","betaF[0.04,0.01,0.06]","gammaF[0.1, 0.005, 1]","peakF[90.0]",
    ]

tnpParAltBkgFit = [
    "meanP[-0.0,-5.0,5.0]","sigmaP[0.9,0.5,5.0]",
    "meanF[-0.0,-5.0,5.0]","sigmaF[0.9,0.5,5.0]",
    "alphaP[0.,-5.,5.]",
    "alphaF[0.,-5.,5.]",
    ]
        
