void PhoID_SFvseta_tnpPhoID()
{
//=========Macro generated from canvas: totoeta/totoeta
//=========  (Mon Mar 28 15:34:43 2022) by ROOT version 6.14/09
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
   0.92,
   1.023355,
   1.149457,
   0.9153153,
   1.108108,
   0.9405405,
   1.071739,
   1.115702,
   1.112329,
   0.5714286};
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
   0.1322876,
   0.01991684,
   0.03133849,
   0.02643879,
   0.02684651,
   0.02663378,
   0.02039311,
   0.02668011,
   0.03127521,
   0.1181139};
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
   0.7777778,
   0.9946809,
   1.056112,
   0.9327731,
   1.005111,
   0.9594595,
   0.9928315,
   1.035897,
   1.001984,
   0.6811594};
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
   0.213697,
   0.05537765,
   0.03292921,
   0.05534747,
   0.03739149,
   0.05562795,
   0.05597311,
   0.03751932,
   0.032561,
   0.1951147};
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
   0.79,
   0.991018,
   1.043062,
   0.9583333,
   1.007331,
   0.9783862,
   1,
   1.024963,
   1.026984,
   0.6964286};
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
   0.01581139,
   0.008567008,
   0.009333891,
   0.006344656,
   0.008423112,
   0.00636294,
   0.008684008,
   0.008435481,
   0.009289444,
   0.01411731};
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
   0.2,
   1.023355,
   1.074074,
   0.9134276,
   0.9390244,
   0.9253996,
   1.05423,
   0.9277108,
   1.116279,
   0.1666667};
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
   0.6975672,
   0.03527229,
   0.08145435,
   0.07265867,
   0.05921859,
   0.07377108,
   0.03603741,
   0.05876814,
   0.07976882,
   0.6458956};
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
   0.046,
   0.482,
   0.423,
   0.508,
   0.533,
   0.522,
   0.493,
   0.54,
   0.406,
   0.032};
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
   0.006614378,
   0.009380832,
   0.01153256,
   0.01467353,
   0.01291317,
   0.01478175,
   0.009380832,
   0.01291317,
   0.01141545,
   0.006614378};
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
   0.05,
   0.471,
   0.368,
   0.555,
   0.481,
   0.555,
   0.46,
   0.484,
   0.365,
   0.056};
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
   0.049,
   0.561,
   0.527,
   0.555,
   0.59,
   0.568,
   0.554,
   0.606,
   0.505,
   0.047};
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
   0.01346291,
   0.031233,
   0.01643168,
   0.03293175,
   0.0219488,
   0.03293175,
   0.031233,
   0.0219488,
   0.01641074,
   0.01346291};
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
   0.063,
   0.564,
   0.499,
   0.595,
   0.587,
   0.592,
   0.558,
   0.585,
   0.504,
   0.069};
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
   0.079,
   0.662,
   0.654,
   0.667,
   0.687,
   0.679,
   0.659,
   0.698,
   0.647,
   0.078};
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
   0.001581139,
   0.005722762,
   0.00585235,
   0.00441588,
   0.005744563,
   0.00441588,
   0.005722762,
   0.005744563,
   0.00585235,
   0.001581139};
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
   0.1,
   0.668,
   0.627,
   0.696,
   0.682,
   0.694,
   0.659,
   0.681,
   0.63,
   0.112};
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
   0.01,
   0.482,
   0.319,
   0.517,
   0.385,
   0.521,
   0.486,
   0.385,
   0.336,
   0.009};
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
   0.03487836,
   0.01661325,
   0.02419194,
   0.04112481,
   0.02427962,
   0.04153312,
   0.01661325,
   0.02438878,
   0.02401041,
   0.03487836};
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
   0.05,
   0.471,
   0.297,
   0.566,
   0.41,
   0.563,
   0.461,
   0.415,
   0.301,
   0.054};
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
   TLatex *   tex = new TLatex(0.98,0.956,"+16.9 fb^{-1} (13 TeV)");
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
