void PhoID_SFvseta_tnpPhoID()
{
//=========Macro generated from canvas: totoeta/totoeta
//=========  (Mon Mar 28 15:37:17 2022) by ROOT version 6.14/09
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
   1.129032,
   1.090206,
   0.9728507,
   0.8767677,
   1.020997,
   0.9371197,
   1.113208,
   1.117021,
   1.105023,
   1.357143};
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
   0.2303687,
   0.03156559,
   0.03286389,
   0.06276459,
   0.02695884,
   0.06301921,
   0.03301199,
   0.02731734,
   0.03316402,
   0.255051};
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
   0.9268293,
   0.9557344,
   0.9784367,
   0.9510358,
   0.959144,
   0.9829545,
   0.991684,
   0.9805447,
   1.040323,
   1.075};
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
   0.3921448,
   0.05637395,
   0.0349106,
   0.05581033,
   0.05956136,
   0.05612743,
   0.05824917,
   0.05956136,
   0.03481676,
   0.4019484};
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
   0.9710145,
   0.9719934,
   1.01751,
   0.9657854,
   1.004815,
   0.9859594,
   0.9831081,
   1.0208,
   1.04466,
   1.057143};
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
   0.03074377,
   0.01035404,
   0.01432969,
   0.01531704,
   0.01012,
   0.01536483,
   0.01061639,
   0.01008762,
   0.01430186,
   0.03030458};
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
   1.285714,
   1.083117,
   0.8717949,
   0.8632812,
   0.884106,
   0.9089069,
   1.149051,
   1,
   1.05,
   2.217391};
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
   13.35917,
   0.05543873,
   0.04406323,
   0.04161864,
   0.03356479,
   0.04297748,
   0.05804458,
   0.03338762,
   0.0445792,
   20.32946};
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
   0.035,
   0.423,
   0.215,
   0.434,
   0.389,
   0.462,
   0.413,
   0.42,
   0.242,
   0.038};
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
   0.007141428,
   0.01224745,
   0.00726292,
   0.03106847,
   0.01027132,
   0.03106847,
   0.01224745,
   0.01027132,
   0.00726292,
   0.007141428};
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
   0.031,
   0.388,
   0.221,
   0.495,
   0.381,
   0.493,
   0.371,
   0.376,
   0.219,
   0.028};
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
   0.038,
   0.475,
   0.363,
   0.505,
   0.493,
   0.519,
   0.477,
   0.504,
   0.387,
   0.043};
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
   0.01607794,
   0.02801785,
   0.01295183,
   0.02963528,
   0.03061454,
   0.02963528,
   0.02801785,
   0.03061454,
   0.01295183,
   0.01607794};
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
   0.497,
   0.371,
   0.531,
   0.514,
   0.528,
   0.481,
   0.514,
   0.372,
   0.04};
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
   0.067,
   0.59,
   0.523,
   0.621,
   0.626,
   0.632,
   0.582,
   0.638,
   0.538,
   0.074};
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
   0.00212132,
   0.006284903,
   0.00736546,
   0.009848858,
   0.00630476,
   0.009848858,
   0.006284903,
   0.00630476,
   0.00736546,
   0.00212132};
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
   0.069,
   0.607,
   0.514,
   0.643,
   0.623,
   0.641,
   0.592,
   0.625,
   0.515,
   0.07};
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
   0.045,
   0.417,
   0.136,
   0.442,
   0.267,
   0.449,
   0.424,
   0.307,
   0.168,
   0.051};
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
   0.4675709,
   0.02134391,
   0.006873864,
   0.02130874,
   0.01013657,
   0.02123087,
   0.02141845,
   0.01025,
   0.007132671,
   0.4675775};
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
   0.035,
   0.385,
   0.156,
   0.512,
   0.302,
   0.494,
   0.369,
   0.307,
   0.16,
   0.023};
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
   TLatex *   tex = new TLatex(0.98,0.956,"+59.7 fb^{-1} (13 TeV)");
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
