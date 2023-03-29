void PhoID_SFvspT_tnpPhoID()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Mon Mar 28 15:34:43 2022) by ROOT version 6.14/09
   TCanvas *totopT = new TCanvas("totopT", "totopT",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   totopT->SetHighLightColor(2);
   totopT->Range(0,0,1,1);
   totopT->SetFillColor(0);
   totopT->SetBorderMode(0);
   totopT->SetBorderSize(2);
   totopT->SetTickx(1);
   totopT->SetTicky(1);
   totopT->SetLeftMargin(0.12);
   totopT->SetRightMargin(0.02);
   totopT->SetTopMargin(0.055);
   totopT->SetFrameFillStyle(0);
   totopT->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: totopT_do
   TPad *totopT_do = new TPad("totopT_do", "totopT_do",0,0,1,0.45);
   totopT_do->Draw();
   totopT_do->cd();
   totopT_do->Range(0.9024693,0.5665128,1.715225,1.527205);
   totopT_do->SetFillColor(0);
   totopT_do->SetBorderMode(0);
   totopT_do->SetBorderSize(0);
   totopT_do->SetLogx();
   totopT_do->SetTickx(1);
   totopT_do->SetTicky(1);
   totopT_do->SetLeftMargin(0.12);
   totopT_do->SetRightMargin(0.02);
   totopT_do->SetTopMargin(0.0075);
   totopT_do->SetBottomMargin(0.2222222);
   totopT_do->SetFrameFillStyle(0);
   totopT_do->SetFrameBorderMode(0);
   totopT_do->SetFrameFillStyle(0);
   totopT_do->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph0_fy1001[4] = {
   1.038627,
   1.047261,
   0.9954785,
   0.9937611};
   Double_t Graph0_fex1001[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph0_fey1001[4] = {
   0.02842842,
   0.01677821,
   0.008425288,
   0.05563097};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
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
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,10,50);
   Graph_Graph01001->SetMinimum(0.78);
   Graph_Graph01001->SetMaximum(1.52);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineStyle(0);
   Graph_Graph01001->SetMarkerStyle(20);
   Graph_Graph01001->GetXaxis()->SetTitle("p_{T}  [GeV]");
   Graph_Graph01001->GetXaxis()->SetMoreLogLabels();
   Graph_Graph01001->GetXaxis()->SetNoExponent();
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1002[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph1_fy1002[4] = {
   0.9334664,
   1.111917,
   1.016141,
   1.020478};
   Double_t Graph1_fex1002[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph1_fey1002[4] = {
   0.05485441,
   0.02387922,
   0.008235503,
   0.03739694};
   gre = new TGraphErrors(4,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,10,50);
   Graph_Graph11002->SetMinimum(0.78);
   Graph_Graph11002->SetMaximum(1.52);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);
   Graph_Graph11002->SetLineStyle(0);
   Graph_Graph11002->SetMarkerStyle(20);
   Graph_Graph11002->GetXaxis()->SetTitle("p_{T}  [GeV]");
   Graph_Graph11002->GetXaxis()->SetMoreLogLabels();
   Graph_Graph11002->GetXaxis()->SetNoExponent();
   Graph_Graph11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph11002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph11002->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph11002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("p");
   
   Double_t Graph2_fx1003[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph2_fy1003[4] = {
   1.096522,
   1.130106,
   1.035004,
   1.024037};
   Double_t Graph2_fex1003[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph2_fey1003[4] = {
   0.078281,
   0.02782824,
   0.009105442,
   0.03567028};
   gre = new TGraphErrors(4,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993333");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#993333");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21003 = new TH1F("Graph_Graph21003","Graph",100,10,50);
   Graph_Graph21003->SetMinimum(0.78);
   Graph_Graph21003->SetMaximum(1.52);
   Graph_Graph21003->SetDirectory(0);
   Graph_Graph21003->SetStats(0);
   Graph_Graph21003->SetLineStyle(0);
   Graph_Graph21003->SetMarkerStyle(20);
   Graph_Graph21003->GetXaxis()->SetTitle("p_{T}  [GeV]");
   Graph_Graph21003->GetXaxis()->SetMoreLogLabels();
   Graph_Graph21003->GetXaxis()->SetNoExponent();
   Graph_Graph21003->GetXaxis()->SetLabelFont(42);
   Graph_Graph21003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph21003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetXaxis()->SetTitleFont(42);
   Graph_Graph21003->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph21003->GetYaxis()->SetLabelFont(42);
   Graph_Graph21003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph21003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetYaxis()->SetTitleFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph21003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21003);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1004[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph3_fy1004[4] = {
   0.9186034,
   0.9274335,
   0.9683453,
   0.9460826};
   Double_t Graph3_fex1004[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph3_fey1004[4] = {
   0.07171142,
   0.02481117,
   0.006104536,
   0.05544898};
   gre = new TGraphErrors(4,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31004 = new TH1F("Graph_Graph31004","Graph",100,10,50);
   Graph_Graph31004->SetMinimum(0.78);
   Graph_Graph31004->SetMaximum(1.52);
   Graph_Graph31004->SetDirectory(0);
   Graph_Graph31004->SetStats(0);
   Graph_Graph31004->SetLineStyle(0);
   Graph_Graph31004->SetMarkerStyle(20);
   Graph_Graph31004->GetXaxis()->SetTitle("p_{T}  [GeV]");
   Graph_Graph31004->GetXaxis()->SetMoreLogLabels();
   Graph_Graph31004->GetXaxis()->SetNoExponent();
   Graph_Graph31004->GetXaxis()->SetLabelFont(42);
   Graph_Graph31004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph31004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetXaxis()->SetTitleFont(42);
   Graph_Graph31004->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph31004->GetYaxis()->SetLabelFont(42);
   Graph_Graph31004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph31004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetYaxis()->SetTitleFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph31004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31004);
   
   gre->Draw("p");
   TLine *line = new TLine(10,1,50,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   totopT_do->Modified();
   totopT->cd();
  
// ------------>Primitives in pad: totopT_up
   TPad *totopT_up = new TPad("totopT_up", "totopT_up",0,0.45,1,1);
   totopT_up->Draw();
   totopT_up->cd();
   totopT_up->Range(0.9024693,0.1701681,1.715225,1.481092);
   totopT_up->SetFillColor(0);
   totopT_up->SetBorderMode(0);
   totopT_up->SetBorderSize(0);
   totopT_up->SetLogx();
   totopT_up->SetTickx(1);
   totopT_up->SetTicky(1);
   totopT_up->SetLeftMargin(0.12);
   totopT_up->SetRightMargin(0.02);
   totopT_up->SetBottomMargin(0.0075);
   totopT_up->SetFrameFillStyle(0);
   totopT_up->SetFrameBorderMode(0);
   totopT_up->SetFrameFillStyle(0);
   totopT_up->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph0_fy1005[4] = {
   0.484,
   0.4875,
   0.6605,
   0.5575};
   Double_t Graph0_fex1005[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph0_fey1005[4] = {
   0.01324765,
   0.007810256,
   0.005590179,
   0.03120897};
   gre = new TGraphErrors(4,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","Graph",100,10,50);
   Graph_Graph01005->SetMinimum(0.18);
   Graph_Graph01005->SetMaximum(1.35);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);
   Graph_Graph01005->SetLineStyle(0);
   Graph_Graph01005->SetMarkerStyle(20);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph01005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph01005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph01005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1006[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph1_fy1006[4] = {
   0.466,
   0.4655,
   0.6635,
   0.561};
   Double_t Graph1_fex1006[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph1_fey1006[4] = {
   0.01324765,
   0.007810256,
   0.005590179,
   0.03120897};
   gre = new TGraphErrors(4,Graph1_fx1006,Graph1_fy1006,Graph1_fex1006,Graph1_fey1006);
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
   
   Double_t Graph2_fx1007[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph2_fy1007[4] = {
   0.385,
   0.5365,
   0.6925,
   0.598};
   Double_t Graph2_fex1007[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph2_fey1007[4] = {
   0.02262422,
   0.01152172,
   0.005612495,
   0.02191461};
   gre = new TGraphErrors(4,Graph2_fx1007,Graph2_fy1007,Graph2_fex1007,Graph2_fey1007);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21007 = new TH1F("Graph_Graph21007","Graph",100,10,50);
   Graph_Graph21007->SetMinimum(0.18);
   Graph_Graph21007->SetMaximum(1.35);
   Graph_Graph21007->SetDirectory(0);
   Graph_Graph21007->SetStats(0);
   Graph_Graph21007->SetLineStyle(0);
   Graph_Graph21007->SetMarkerStyle(20);
   Graph_Graph21007->GetXaxis()->SetLabelFont(42);
   Graph_Graph21007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph21007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph21007->GetXaxis()->SetTitleFont(42);
   Graph_Graph21007->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph21007->GetYaxis()->SetLabelFont(42);
   Graph_Graph21007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph21007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21007->GetYaxis()->SetTitleFont(42);
   Graph_Graph21007->GetZaxis()->SetLabelFont(42);
   Graph_Graph21007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph21007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21007);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1008[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph3_fy1008[4] = {
   0.4124412,
   0.4825,
   0.6815,
   0.586};
   Double_t Graph3_fex1008[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph3_fey1008[4] = {
   0.02262422,
   0.01152172,
   0.005612495,
   0.02191461};
   gre = new TGraphErrors(4,Graph3_fx1008,Graph3_fy1008,Graph3_fex1008,Graph3_fey1008);
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
   
   Double_t Graph4_fx1009[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph4_fy1009[4] = {
   0.3279853,
   0.4141049,
   0.6505,
   0.5140164};
   Double_t Graph4_fex1009[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph4_fey1009[4] = {
   0.02341496,
   0.01019711,
   0.00572277,
   0.01790473};
   gre = new TGraphErrors(4,Graph4_fx1009,Graph4_fy1009,Graph4_fex1009,Graph4_fey1009);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993333");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#993333");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41009 = new TH1F("Graph_Graph41009","Graph",100,10,50);
   Graph_Graph41009->SetMinimum(0.18);
   Graph_Graph41009->SetMaximum(1.35);
   Graph_Graph41009->SetDirectory(0);
   Graph_Graph41009->SetStats(0);
   Graph_Graph41009->SetLineStyle(0);
   Graph_Graph41009->SetMarkerStyle(20);
   Graph_Graph41009->GetXaxis()->SetLabelFont(42);
   Graph_Graph41009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph41009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph41009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph41009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph41009->GetXaxis()->SetTitleFont(42);
   Graph_Graph41009->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph41009->GetYaxis()->SetLabelFont(42);
   Graph_Graph41009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph41009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph41009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph41009->GetYaxis()->SetTitleFont(42);
   Graph_Graph41009->GetZaxis()->SetLabelFont(42);
   Graph_Graph41009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph41009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph41009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph41009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41009);
   
   gre->Draw("p");
   
   Double_t Graph5_fx1010[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph5_fy1010[4] = {
   0.2991142,
   0.3664303,
   0.6285,
   0.5019508};
   Double_t Graph5_fex1010[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph5_fey1010[4] = {
   0.02341496,
   0.01019711,
   0.00572277,
   0.01790473};
   gre = new TGraphErrors(4,Graph5_fx1010,Graph5_fy1010,Graph5_fex1010,Graph5_fey1010);
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
   
   Double_t Graph6_fx1011[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph6_fy1011[4] = {
   0.5187345,
   0.5147256,
   0.673,
   0.5615};
   Double_t Graph6_fex1011[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph6_fey1011[4] = {
   0.04049537,
   0.0137702,
   0.004242652,
   0.03290897};
   gre = new TGraphErrors(4,Graph6_fx1011,Graph6_fy1011,Graph6_fex1011,Graph6_fey1011);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph61011 = new TH1F("Graph_Graph61011","Graph",100,10,50);
   Graph_Graph61011->SetMinimum(0.18);
   Graph_Graph61011->SetMaximum(1.35);
   Graph_Graph61011->SetDirectory(0);
   Graph_Graph61011->SetStats(0);
   Graph_Graph61011->SetLineStyle(0);
   Graph_Graph61011->SetMarkerStyle(20);
   Graph_Graph61011->GetXaxis()->SetLabelFont(42);
   Graph_Graph61011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph61011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph61011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph61011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph61011->GetXaxis()->SetTitleFont(42);
   Graph_Graph61011->GetYaxis()->SetTitle("Data efficiency");
   Graph_Graph61011->GetYaxis()->SetLabelFont(42);
   Graph_Graph61011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph61011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph61011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph61011->GetYaxis()->SetTitleFont(42);
   Graph_Graph61011->GetZaxis()->SetLabelFont(42);
   Graph_Graph61011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph61011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph61011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph61011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph61011);
   
   gre->Draw("p");
   
   Double_t Graph7_fx1012[4] = {
   12.5,
   17.5,
   42.5,
   27.5};
   Double_t Graph7_fy1012[4] = {
   0.5646991,
   0.555,
   0.695,
   0.5935};
   Double_t Graph7_fex1012[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph7_fey1012[4] = {
   0.04049537,
   0.0137702,
   0.004242652,
   0.03290897};
   gre = new TGraphErrors(4,Graph7_fx1012,Graph7_fy1012,Graph7_fex1012,Graph7_fey1012);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   gre->Draw("ez");
   totopT_up->Modified();
   totopT->cd();
   
   TLegend *leg = new TLegend(0.5,0.8,0.95,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph6","0.000 #leq | #eta | #leq  0.800","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","0.800 #leq | #eta | #leq  1.444","PL");

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","1.566 #leq | #eta | #leq  2.000","PL");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","2.000 #leq | #eta | #leq  2.500","PL");

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
   totopT->Modified();
   totopT->cd();
   totopT->SetSelected(totopT);
}
