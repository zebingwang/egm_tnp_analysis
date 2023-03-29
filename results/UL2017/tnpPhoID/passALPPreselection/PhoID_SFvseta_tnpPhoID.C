void PhoID_SFvseta_tnpPhoID()
{
//=========Macro generated from canvas: totoeta/totoeta
//=========  (Mon Mar 28 15:36:46 2022) by ROOT version 6.14/09
   TCanvas *totoeta = new TCanvas("totoeta", "totoeta",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   totoeta->SetHighLightColor(2);
   totoeta->Range(0,0,1,1);
   totoeta->SetFillColor(0);
   totoeta->SetBorderMode(0);
   totoeta->SetBorderSize(2);
   totoeta->SetTickx(1);
   totoeta->SetTicky(1);
   totoeta->SetLeftMargin(0.12);
   totoeta->SetRightMargin(0.02);
   totoeta->SetTopMargin(0.055);
   totoeta->SetFrameFillStyle(0);
   totoeta->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: totoeta_do
   TPad *totoeta_do = new TPad("totoeta_do", "totoeta_do",0,0,1,0.45);
   totoeta_do->Draw();
   totoeta_do->cd();
   totoeta_do->Range(-3.325581,0.5665128,2.72093,1.527205);
   totoeta_do->SetFillColor(0);
   totoeta_do->SetBorderMode(0);
   totoeta_do->SetBorderSize(0);
   totoeta_do->SetTickx(1);
   totoeta_do->SetTicky(1);
   totoeta_do->SetLeftMargin(0.12);
   totoeta_do->SetRightMargin(0.02);
   totoeta_do->SetTopMargin(0.0075);
   totoeta_do->SetBottomMargin(0.2222222);
   totoeta_do->SetFrameFillStyle(0);
   totoeta_do->SetFrameBorderMode(0);
   totoeta_do->SetFrameFillStyle(0);
   totoeta_do->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph0_fy1013[10] = {
   1.081081,
   1.123711,
   1.330645,
   0.8918919,
   1.142119,
   0.9267823,
   1.158854,
   1.138021,
   1.226337,
   1.192308};
   Double_t Graph0_fex1013[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph0_fey1013[10] = {
   0.1282004,
   0.0578212,
   0.03515241,
   0.03247966,
   0.03106154,
   0.03251356,
   0.05831822,
   0.03112088,
   0.03618417,
   0.1824391};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","Graph",100,-2.6,2.6);
   Graph_Graph01013->SetMinimum(0.78);
   Graph_Graph01013->SetMaximum(1.52);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);
   Graph_Graph01013->SetLineStyle(0);
   Graph_Graph01013->SetMarkerStyle(20);
   Graph_Graph01013->GetXaxis()->SetTitle("SuperCluster #eta");
   Graph_Graph01013->GetXaxis()->SetNoExponent();
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph01013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph01013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph01013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1014[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph1_fy1014[10] = {
   1.097561,
   1.007921,
   1.158311,
   0.9207207,
   1.038,
   0.9727768,
   0.9799599,
   1.064128,
   1.117647,
   1.135135};
   Double_t Graph1_fex1014[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph1_fey1014[10] = {
   0.2775563,
   0.06422683,
   0.0424425,
   0.05367737,
   0.0433359,
   0.05406704,
   0.0649991,
   0.04342274,
   0.04300991,
   0.3067449};
   gre = new TGraphErrors(10,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11014 = new TH1F("Graph_Graph11014","Graph",100,-2.6,2.6);
   Graph_Graph11014->SetMinimum(0.78);
   Graph_Graph11014->SetMaximum(1.52);
   Graph_Graph11014->SetDirectory(0);
   Graph_Graph11014->SetStats(0);
   Graph_Graph11014->SetLineStyle(0);
   Graph_Graph11014->SetMarkerStyle(20);
   Graph_Graph11014->GetXaxis()->SetTitle("SuperCluster #eta");
   Graph_Graph11014->GetXaxis()->SetNoExponent();
   Graph_Graph11014->GetXaxis()->SetLabelFont(42);
   Graph_Graph11014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11014->GetXaxis()->SetTitleFont(42);
   Graph_Graph11014->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph11014->GetYaxis()->SetLabelFont(42);
   Graph_Graph11014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11014->GetYaxis()->SetTitleFont(42);
   Graph_Graph11014->GetZaxis()->SetLabelFont(42);
   Graph_Graph11014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11014);
   
   gre->Draw("p");
   
   Double_t Graph2_fx1015[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph2_fy1015[10] = {
   1.070423,
   1.00491,
   1.12426,
   0.9560606,
   1.036304,
   0.9847561,
   1.014827,
   1.044628,
   1.1002,
   1.136364};
   Double_t Graph2_fex1015[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph2_fey1015[10] = {
   0.06754692,
   0.0111305,
   0.01191622,
   0.006984503,
   0.010239,
   0.007027092,
   0.01120385,
   0.01025593,
   0.01210726,
   0.07266411};
   gre = new TGraphErrors(10,Graph2_fx1015,Graph2_fy1015,Graph2_fex1015,Graph2_fey1015);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993333");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#993333");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21015 = new TH1F("Graph_Graph21015","Graph",100,-2.6,2.6);
   Graph_Graph21015->SetMinimum(0.78);
   Graph_Graph21015->SetMaximum(1.52);
   Graph_Graph21015->SetDirectory(0);
   Graph_Graph21015->SetStats(0);
   Graph_Graph21015->SetLineStyle(0);
   Graph_Graph21015->SetMarkerStyle(20);
   Graph_Graph21015->GetXaxis()->SetTitle("SuperCluster #eta");
   Graph_Graph21015->GetXaxis()->SetNoExponent();
   Graph_Graph21015->GetXaxis()->SetLabelFont(42);
   Graph_Graph21015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph21015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21015->GetXaxis()->SetTitleFont(42);
   Graph_Graph21015->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph21015->GetYaxis()->SetLabelFont(42);
   Graph_Graph21015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph21015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21015->GetYaxis()->SetTitleFont(42);
   Graph_Graph21015->GetZaxis()->SetLabelFont(42);
   Graph_Graph21015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph21015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21015);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1016[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph3_fy1016[10] = {
   0.28125,
   1.069054,
   1.291005,
   0.9329502,
   1.015528,
   0.8880157,
   1.147959,
   1.021739,
   1.373563,
   0.35};
   Double_t Graph3_fex1016[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph3_fey1016[10] = {
   1.475053,
   0.04632352,
   0.09442629,
   0.05484082,
   0.04416603,
   0.05599214,
   0.0464643,
   0.04463442,
   0.1017988,
   2.358661};
   gre = new TGraphErrors(10,Graph3_fx1016,Graph3_fy1016,Graph3_fex1016,Graph3_fey1016);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31016 = new TH1F("Graph_Graph31016","Graph",100,-2.6,2.6);
   Graph_Graph31016->SetMinimum(0.78);
   Graph_Graph31016->SetMaximum(1.52);
   Graph_Graph31016->SetDirectory(0);
   Graph_Graph31016->SetStats(0);
   Graph_Graph31016->SetLineStyle(0);
   Graph_Graph31016->SetMarkerStyle(20);
   Graph_Graph31016->GetXaxis()->SetTitle("SuperCluster #eta");
   Graph_Graph31016->GetXaxis()->SetNoExponent();
   Graph_Graph31016->GetXaxis()->SetLabelFont(42);
   Graph_Graph31016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph31016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph31016->GetXaxis()->SetTitleFont(42);
   Graph_Graph31016->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph31016->GetYaxis()->SetLabelFont(42);
   Graph_Graph31016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph31016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph31016->GetYaxis()->SetTitleFont(42);
   Graph_Graph31016->GetZaxis()->SetLabelFont(42);
   Graph_Graph31016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph31016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph31016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31016);
   
   gre->Draw("p");
   TLine *line = new TLine(-2.6,1,2.6,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   totoeta_do->Modified();
   totoeta->cd();
  
// ------------>Primitives in pad: totoeta_up
   TPad *totoeta_up = new TPad("totoeta_up", "totoeta_up",0,0.45,1,1);
   totoeta_up->Draw();
   totoeta_up->cd();
   totoeta_up->Range(-3.325581,0.1701681,2.72093,1.481092);
   totoeta_up->SetFillColor(0);
   totoeta_up->SetBorderMode(0);
   totoeta_up->SetBorderSize(0);
   totoeta_up->SetTickx(1);
   totoeta_up->SetTicky(1);
   totoeta_up->SetLeftMargin(0.12);
   totoeta_up->SetRightMargin(0.02);
   totoeta_up->SetBottomMargin(0.0075);
   totoeta_up->SetFrameFillStyle(0);
   totoeta_up->SetFrameBorderMode(0);
   totoeta_up->SetFrameFillStyle(0);
   totoeta_up->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph0_fy1017[10] = {
   0.04,
   0.436,
   0.33,
   0.462,
   0.442,
   0.481,
   0.445,
   0.437,
   0.298,
   0.031};
   Double_t Graph0_fex1017[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph0_fey1017[10] = {
   0.004743416,
   0.02243463,
   0.008717798,
   0.01682446,
   0.01202082,
   0.01687454,
   0.0223942,
   0.01195042,
   0.008792753,
   0.004743416};
   gre = new TGraphErrors(10,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","Graph",100,-2.6,2.6);
   Graph_Graph01017->SetMinimum(0.18);
   Graph_Graph01017->SetMaximum(1.35);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);
   Graph_Graph01017->SetLineStyle(0);
   Graph_Graph01017->SetMarkerStyle(20);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph01017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph01017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph01017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1018[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph1_fy1018[10] = {
   0.037,
   0.388,
   0.248,
   0.518,
   0.387,
   0.519,
   0.384,
   0.384,
   0.243,
   0.026};
   Double_t Graph1_fex1018[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph1_fey1018[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(10,Graph1_fx1018,Graph1_fy1018,Graph1_fex1018,Graph1_fey1018);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   gre->Draw("ez");
   
   Double_t Graph2_fx1019[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph2_fy1019[10] = {
   0.045,
   0.509,
   0.439,
   0.511,
   0.519,
   0.536,
   0.489,
   0.531,
   0.418,
   0.042};
   Double_t Graph2_fex1019[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph2_fey1019[10] = {
   0.01137981,
   0.03243455,
   0.01608571,
   0.02979094,
   0.02166795,
   0.02979094,
   0.03243455,
   0.02166795,
   0.01608571,
   0.01134956};
   gre = new TGraphErrors(10,Graph2_fx1019,Graph2_fy1019,Graph2_fex1019,Graph2_fey1019);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21019 = new TH1F("Graph_Graph21019","Graph",100,-2.6,2.6);
   Graph_Graph21019->SetMinimum(0.18);
   Graph_Graph21019->SetMaximum(1.35);
   Graph_Graph21019->SetDirectory(0);
   Graph_Graph21019->SetStats(0);
   Graph_Graph21019->SetLineStyle(0);
   Graph_Graph21019->SetMarkerStyle(20);
   Graph_Graph21019->GetXaxis()->SetLabelFont(42);
   Graph_Graph21019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph21019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph21019->GetXaxis()->SetTitleFont(42);
   Graph_Graph21019->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph21019->GetYaxis()->SetLabelFont(42);
   Graph_Graph21019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph21019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21019->GetYaxis()->SetTitleFont(42);
   Graph_Graph21019->GetZaxis()->SetLabelFont(42);
   Graph_Graph21019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph21019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21019);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1020[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph3_fy1020[10] = {
   0.041,
   0.505,
   0.379,
   0.555,
   0.5,
   0.551,
   0.499,
   0.499,
   0.374,
   0.037};
   Double_t Graph3_fex1020[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph3_fey1020[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(10,Graph3_fx1020,Graph3_fy1020,Graph3_fex1020,Graph3_fey1020);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   gre->Draw("ez");
   
   Double_t Graph4_fx1021[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph4_fy1021[10] = {
   0.076,
   0.614,
   0.57,
   0.631,
   0.628,
   0.646,
   0.616,
   0.632,
   0.549,
   0.075};
   Double_t Graph4_fex1021[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph4_fey1021[10] = {
   0.004795832,
   0.006800735,
   0.006041523,
   0.004609772,
   0.006204837,
   0.004609772,
   0.006800735,
   0.006204837,
   0.006041523,
   0.004795832};
   gre = new TGraphErrors(10,Graph4_fx1021,Graph4_fy1021,Graph4_fex1021,Graph4_fey1021);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993333");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#993333");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41021 = new TH1F("Graph_Graph41021","Graph",100,-2.6,2.6);
   Graph_Graph41021->SetMinimum(0.18);
   Graph_Graph41021->SetMaximum(1.35);
   Graph_Graph41021->SetDirectory(0);
   Graph_Graph41021->SetStats(0);
   Graph_Graph41021->SetLineStyle(0);
   Graph_Graph41021->SetMarkerStyle(20);
   Graph_Graph41021->GetXaxis()->SetLabelFont(42);
   Graph_Graph41021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph41021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph41021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph41021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph41021->GetXaxis()->SetTitleFont(42);
   Graph_Graph41021->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph41021->GetYaxis()->SetLabelFont(42);
   Graph_Graph41021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph41021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph41021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph41021->GetYaxis()->SetTitleFont(42);
   Graph_Graph41021->GetZaxis()->SetLabelFont(42);
   Graph_Graph41021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph41021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph41021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph41021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41021);
   
   gre->Draw("p");
   
   Double_t Graph5_fx1022[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph5_fy1022[10] = {
   0.071,
   0.611,
   0.507,
   0.66,
   0.606,
   0.656,
   0.607,
   0.605,
   0.499,
   0.066};
   Double_t Graph5_fex1022[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph5_fey1022[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(10,Graph5_fx1022,Graph5_fy1022,Graph5_fex1022,Graph5_fey1022);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993333");
   gre->SetLineColor(ci);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   gre->Draw("ez");
   
   Double_t Graph6_fx1023[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph6_fy1023[10] = {
   0.009,
   0.418,
   0.244,
   0.487,
   0.327,
   0.452,
   0.45,
   0.329,
   0.239,
   0.007};
   Double_t Graph6_fex1023[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph6_fey1023[10] = {
   0.04720169,
   0.0181125,
   0.01784657,
   0.02862691,
   0.01422146,
   0.0285,
   0.01821401,
   0.01437228,
   0.01771299,
   0.04717322};
   gre = new TGraphErrors(10,Graph6_fx1023,Graph6_fy1023,Graph6_fex1023,Graph6_fey1023);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph61023 = new TH1F("Graph_Graph61023","Graph",100,-2.6,2.6);
   Graph_Graph61023->SetMinimum(0.18);
   Graph_Graph61023->SetMaximum(1.35);
   Graph_Graph61023->SetDirectory(0);
   Graph_Graph61023->SetStats(0);
   Graph_Graph61023->SetLineStyle(0);
   Graph_Graph61023->SetMarkerStyle(20);
   Graph_Graph61023->GetXaxis()->SetLabelFont(42);
   Graph_Graph61023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph61023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph61023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph61023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph61023->GetXaxis()->SetTitleFont(42);
   Graph_Graph61023->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph61023->GetYaxis()->SetLabelFont(42);
   Graph_Graph61023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph61023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph61023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph61023->GetYaxis()->SetTitleFont(42);
   Graph_Graph61023->GetZaxis()->SetLabelFont(42);
   Graph_Graph61023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph61023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph61023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph61023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph61023);
   
   gre->Draw("p");
   
   Double_t Graph7_fx1024[10] = {
   1.505,
   -1.122,
   2.25,
   -0.4,
   1.783,
   0.4,
   1.122,
   -1.783,
   -2.25,
   -1.505};
   Double_t Graph7_fy1024[10] = {
   0.032,
   0.391,
   0.189,
   0.522,
   0.322,
   0.509,
   0.392,
   0.322,
   0.174,
   0.02};
   Double_t Graph7_fex1024[10] = {
   0.061,
   0.322,
   0.25,
   0.4,
   0.217,
   0.4,
   0.322,
   0.217,
   0.25,
   0.061};
   Double_t Graph7_fey1024[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(10,Graph7_fx1024,Graph7_fy1024,Graph7_fex1024,Graph7_fey1024);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   gre->Draw("ez");
   totoeta_up->Modified();
   totoeta->cd();
   
   TLegend *leg = new TLegend(0.5,0.8,0.95,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph6"," 10 #leq p_{T} #leq   15 GeV","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0"," 15 #leq p_{T} #leq   20 GeV","PL");

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2"," 20 #leq p_{T} #leq   35 GeV","PL");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4"," 35 #leq p_{T} #leq   50 GeV","PL");

   ci = TColor::GetColor("#993333");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#993333");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.98,0.956,"+41.5 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.033);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1587,0.915425,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.04125);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1587,0.865925,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03135);
   tex->SetLineWidth(2);
   tex->Draw();
   totoeta->Modified();
   totoeta->cd();
   totoeta->SetSelected(totoeta);
}
