from libPython.tnpClassUtils import tnpSample

### qll stat
#eosDir1 = 'eos/cms/store/group/phys_egamma/tnp/80X/PhoEleIDs/v1/'
#eosDir2 = 'eos/cms/store/group/phys_egamma/tnp/80X/PhoEleIDs/v2/'
#eosDirREC = 'eos/cms/store/group/phys_egamma/tnp/80X/RecoSF/RECOSFs_2016/'
#eosWinter17 = 'eos/cms/store/group/phys_egamma/tnp/80X/PhoEleIDs/Moriond17_v1/'
eosMoriond18 = '/eos/cms/store/group/phys_egamma/swmukher/ntuple_2017/'

Moriond18_94X = {
    ### MiniAOD TnP for IDs scale factors
    'DY_1j_madgraph'              : tnpSample('DY_1j_madgraph',
                                       eosMoriond18 + 'DY1JetsToLLM50madgraphMLM.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnlo'                 : tnpSample('DY_amcatnlo',
                                       eosMoriond18 + 'DYJetsToLLM50amcatnloFXFX.root',
                                       isMC = True, nEvts =  -1 ),

    'DY_amcatnloext'                 : tnpSample('DY_amcatnloext',
                                       eosMoriond18 + 'DYJetsToLLM50amcatnloFXFXext.root',
                                       isMC = True, nEvts =  -1 ),


    'data_Run2017B' : tnpSample('data_Run2017B' , eosMoriond18 + 'Run2017B.root' , lumi = 4.793  ),
    'data_Run2017C' : tnpSample('data_Run2017C' , eosMoriond18 + 'Run2017C.root' , lumi = 9.736),
    'data_Run2017D' : tnpSample('data_Run2017D' , eosMoriond18 + 'Run2017D.root' , lumi = 4.320 ),
    'data_Run2017E' : tnpSample('data_Run2017E' , eosMoriond18 + 'Run2017E.root' , lumi = 6.998),
    'data_Run2017F' : tnpSample('data_Run2017F' , eosMoriond18 + 'Run2017F.root' , lumi = 13.567 ),

    }
