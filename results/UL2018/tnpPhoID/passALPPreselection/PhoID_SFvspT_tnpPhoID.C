void PhoID_SFvspT_tnpPhoID()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Mon Mar 28 15:37:16 2022) by ROOT version 6.14/09
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
   1.114094,
   1.101449,
   0.9774812,
   0.9734151};
   Double_t Graph0_fex1001[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph0_fey1001[4] = {
   0.05443761,
   0.0307861,
   0.01028261,
   0.05724146};
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
   0.9425287,
   1.068692,
   1.012821,
   0.9698444};
   Double_t Graph1_fex1002[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph1_fey1002[4] = {
   0.02747654,
   0.02534126,
   0.009911325,
   0.05951368};
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
   0.9558832,
   1.038636,
   1.031098,
   1.009421};
   Double_t Graph2_fex1003[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph2_fey1003[4] = {
   0.0367699,
   0.02937014,
   0.01411648,
   0.0347074};
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
   0.8865467,
   0.9068826,
   0.9758567,
   0.96695};
   Double_t Graph3_fex1004[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph3_fey1004[4] = {
   0.04037098,
   0.0624503,
   0.01522183,
   0.05592062};
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
   0.4203628,
   0.418,
   0.586,
   0.476};
   Double_t Graph0_fex1005[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph0_fey1005[4] = {
   0.02054005,
   0.01168333,
   0.006164422,
   0.02799107};
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
   0.3773136,
   0.3795,
   0.5995,
   0.489};
   Double_t Graph1_fex1006[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph1_fey1006[4] = {
   0.02054005,
   0.01168333,
   0.006164422,
   0.02799107};
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
   0.287,
   0.4045,
   0.632,
   0.4985};
   Double_t Graph2_fex1007[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph2_fey1007[4] = {
   0.008366606,
   0.009591668,
   0.006184667,
   0.03059003};
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
   0.3045,
   0.3785,
   0.624,
   0.514};
   Double_t Graph3_fex1008[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph3_fey1008[4] = {
   0.008366606,
   0.009591668,
   0.006184667,
   0.03059003};
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
   0.1508979,
   0.2285,
   0.5305,
   0.375};
   Double_t Graph4_fex1009[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph4_fey1009[4] = {
   0.005804578,
   0.006461432,
   0.007262926,
   0.0128938};
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
   0.1578622,
   0.22,
   0.5145,
   0.3715};
   Double_t Graph5_fex1010[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph5_fey1010[4] = {
   0.005804578,
   0.006461432,
   0.007262926,
   0.0128938};
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
   0.445632,
   0.448,
   0.6265,
   0.512};
   Double_t Graph6_fex1011[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph6_fey1011[4] = {
   0.0202929,
   0.03085045,
   0.009772415,
   0.02960997};
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
   0.5026605,
   0.494,
   0.642,
   0.5295};
   Double_t Graph7_fex1012[4] = {
   2.5,
   2.5,
   7.5,
   7.5};
   Double_t Graph7_fey1012[4] = {
   0.0202929,
   0.03085045,
   0.009772415,
   0.02960997};
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
   totopT->Modified();
   totopT->cd();
   totopT->SetSelected(totopT);
}
