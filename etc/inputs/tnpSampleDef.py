from libPython.tnpClassUtils import tnpSample

### qll stat
#eosDir1 = 'eos/cms/store/group/phys_egamma/tnp/80X/PhoEleIDs/v1/'
#eosDir2 = 'eos/cms/store/group/phys_egamma/tnp/80X/PhoEleIDs/v2/'
#eosDirREC = 'eos/cms/store/group/phys_egamma/tnp/80X/RecoSF/RECOSFs_2016/'
#eosWinter17 = 'eos/cms/store/group/phys_egamma/tnp/80X/PhoEleIDs/Moriond17_v1/'
eosMoriond18 = '/eos/cms/store/group/phys_egamma/swmukher/tnp/ID_V2_2017/'

Moriond18_94X = {
    ### MiniAOD TnP for IDs scale factors
    'DY_1j_madgraph'              : tnpSample('DY_1j_madgraph',
                                       eosMoriond18 + 'mc/DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/crab_DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_1j_madgraph_ext'          : tnpSample('DY_1j_madgraph_ext',
                                       eosMoriond18 + 'mc/DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/crab_DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_ext1/DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_ext1.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_2j_madgraph'              : tnpSample('DY_2j_madgraph',
                                       eosMoriond18 + 'mc/DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/crab_DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_2j_madgraph_ext'          : tnpSample('DY_2j_madgraph_ext',
                                       eosMoriond18 + 'mc/DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/crab_DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_ext1/DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_ext1.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnlo'                 : tnpSample('DY_amcatnlo',
                                       eosMoriond18 + 'mc/DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8/crab_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8/DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8.root',
                                       isMC = True, nEvts =  -1 ),
#    'DY_madgraph'          : tnpSample('DY_madgraph',
#                                       eosMoriond18 + 'mc/TnPTree_DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_all.root',
#                                       isMC = True, nEvts =  -1 ),
#    'DY_madgraph_Moriond18' : tnpSample('DY_madgraph_Moriond18', 
#                                       eosMoriond18 + 'mc/TnPTree_DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8_all.root',
#                                       isMC = True, nEvts =  -1 ),
#    'DY_amcatnlo_Moriond18' : tnpSample('DY_amcatnlo_Moriond18', 
#                                       eosMoriond18 + 'mc/TnPTree_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_all.root',
#                                       isMC = True, nEvts =  -1 ),

    'data_Run2017B' : tnpSample('data_Run2017B' , eosMoriond18 + 'data/TnPTree_17Nov2017_RunB.root' , lumi = 4.7609 ),
    'data_Run2017C' : tnpSample('data_Run2017C' , eosMoriond18 + 'data/TnPTree_17Nov2017_RunC.root' , lumi = 9.72),
    'data_Run2017D' : tnpSample('data_Run2017D' , eosMoriond18 + 'data/TnPTree_17Nov2017_RunD.root' , lumi = 4.319),
    'data_Run2017E' : tnpSample('data_Run2017E' , eosMoriond18 + 'data/TnPTree_17Nov2017_RunE.root' , lumi = 7.712),
    'data_Run2017F' : tnpSample('data_Run2017F' , eosMoriond18 + 'data/TnPTree_17Nov2017_RunF.root' , lumi = 13.470),

    }
