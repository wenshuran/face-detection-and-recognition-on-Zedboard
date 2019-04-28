//Copyright 1986-2015 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2015.4 (lin64) Build 1412921 Wed Nov 18 09:44:32 MST 2015
//Date        : Thu Apr 25 18:56:13 2019
//Host        : ubuntu running 64-bit Ubuntu 16.04.5 LTS
//Command     : generate_target system.bd
//Design      : system
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module m00_couplers_imp_9WRM0W
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wvalid);
  input M_ACLK;
  input [0:0]M_ARESETN;
  output [31:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output M_AXI_wvalid;
  input S_ACLK;
  input [0:0]S_ARESETN;
  input [31:0]S_AXI_araddr;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input S_AXI_wvalid;

  wire [31:0]m00_couplers_to_m00_couplers_ARADDR;
  wire m00_couplers_to_m00_couplers_ARREADY;
  wire m00_couplers_to_m00_couplers_ARVALID;
  wire [31:0]m00_couplers_to_m00_couplers_AWADDR;
  wire m00_couplers_to_m00_couplers_AWREADY;
  wire m00_couplers_to_m00_couplers_AWVALID;
  wire m00_couplers_to_m00_couplers_BREADY;
  wire [1:0]m00_couplers_to_m00_couplers_BRESP;
  wire m00_couplers_to_m00_couplers_BVALID;
  wire [31:0]m00_couplers_to_m00_couplers_RDATA;
  wire m00_couplers_to_m00_couplers_RREADY;
  wire [1:0]m00_couplers_to_m00_couplers_RRESP;
  wire m00_couplers_to_m00_couplers_RVALID;
  wire [31:0]m00_couplers_to_m00_couplers_WDATA;
  wire m00_couplers_to_m00_couplers_WREADY;
  wire m00_couplers_to_m00_couplers_WVALID;

  assign M_AXI_araddr[31:0] = m00_couplers_to_m00_couplers_ARADDR;
  assign M_AXI_arvalid = m00_couplers_to_m00_couplers_ARVALID;
  assign M_AXI_awaddr[31:0] = m00_couplers_to_m00_couplers_AWADDR;
  assign M_AXI_awvalid = m00_couplers_to_m00_couplers_AWVALID;
  assign M_AXI_bready = m00_couplers_to_m00_couplers_BREADY;
  assign M_AXI_rready = m00_couplers_to_m00_couplers_RREADY;
  assign M_AXI_wdata[31:0] = m00_couplers_to_m00_couplers_WDATA;
  assign M_AXI_wvalid = m00_couplers_to_m00_couplers_WVALID;
  assign S_AXI_arready = m00_couplers_to_m00_couplers_ARREADY;
  assign S_AXI_awready = m00_couplers_to_m00_couplers_AWREADY;
  assign S_AXI_bresp[1:0] = m00_couplers_to_m00_couplers_BRESP;
  assign S_AXI_bvalid = m00_couplers_to_m00_couplers_BVALID;
  assign S_AXI_rdata[31:0] = m00_couplers_to_m00_couplers_RDATA;
  assign S_AXI_rresp[1:0] = m00_couplers_to_m00_couplers_RRESP;
  assign S_AXI_rvalid = m00_couplers_to_m00_couplers_RVALID;
  assign S_AXI_wready = m00_couplers_to_m00_couplers_WREADY;
  assign m00_couplers_to_m00_couplers_ARADDR = S_AXI_araddr[31:0];
  assign m00_couplers_to_m00_couplers_ARREADY = M_AXI_arready;
  assign m00_couplers_to_m00_couplers_ARVALID = S_AXI_arvalid;
  assign m00_couplers_to_m00_couplers_AWADDR = S_AXI_awaddr[31:0];
  assign m00_couplers_to_m00_couplers_AWREADY = M_AXI_awready;
  assign m00_couplers_to_m00_couplers_AWVALID = S_AXI_awvalid;
  assign m00_couplers_to_m00_couplers_BREADY = S_AXI_bready;
  assign m00_couplers_to_m00_couplers_BRESP = M_AXI_bresp[1:0];
  assign m00_couplers_to_m00_couplers_BVALID = M_AXI_bvalid;
  assign m00_couplers_to_m00_couplers_RDATA = M_AXI_rdata[31:0];
  assign m00_couplers_to_m00_couplers_RREADY = S_AXI_rready;
  assign m00_couplers_to_m00_couplers_RRESP = M_AXI_rresp[1:0];
  assign m00_couplers_to_m00_couplers_RVALID = M_AXI_rvalid;
  assign m00_couplers_to_m00_couplers_WDATA = S_AXI_wdata[31:0];
  assign m00_couplers_to_m00_couplers_WREADY = M_AXI_wready;
  assign m00_couplers_to_m00_couplers_WVALID = S_AXI_wvalid;
endmodule

module m01_couplers_imp_13D45HT
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arprot,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awprot,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input [0:0]M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input [0:0]S_ARESETN;
  input [31:0]S_AXI_araddr;
  input [2:0]S_AXI_arprot;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  input [2:0]S_AXI_awprot;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK_1;
  wire [0:0]M_ARESETN_1;
  wire S_ACLK_1;
  wire [0:0]S_ARESETN_1;
  wire [31:0]auto_cc_to_m01_couplers_ARADDR;
  wire [2:0]auto_cc_to_m01_couplers_ARPROT;
  wire auto_cc_to_m01_couplers_ARREADY;
  wire auto_cc_to_m01_couplers_ARVALID;
  wire [31:0]auto_cc_to_m01_couplers_AWADDR;
  wire [2:0]auto_cc_to_m01_couplers_AWPROT;
  wire auto_cc_to_m01_couplers_AWREADY;
  wire auto_cc_to_m01_couplers_AWVALID;
  wire auto_cc_to_m01_couplers_BREADY;
  wire [1:0]auto_cc_to_m01_couplers_BRESP;
  wire auto_cc_to_m01_couplers_BVALID;
  wire [31:0]auto_cc_to_m01_couplers_RDATA;
  wire auto_cc_to_m01_couplers_RREADY;
  wire [1:0]auto_cc_to_m01_couplers_RRESP;
  wire auto_cc_to_m01_couplers_RVALID;
  wire [31:0]auto_cc_to_m01_couplers_WDATA;
  wire auto_cc_to_m01_couplers_WREADY;
  wire [3:0]auto_cc_to_m01_couplers_WSTRB;
  wire auto_cc_to_m01_couplers_WVALID;
  wire [31:0]m01_couplers_to_auto_cc_ARADDR;
  wire [2:0]m01_couplers_to_auto_cc_ARPROT;
  wire m01_couplers_to_auto_cc_ARREADY;
  wire m01_couplers_to_auto_cc_ARVALID;
  wire [31:0]m01_couplers_to_auto_cc_AWADDR;
  wire [2:0]m01_couplers_to_auto_cc_AWPROT;
  wire m01_couplers_to_auto_cc_AWREADY;
  wire m01_couplers_to_auto_cc_AWVALID;
  wire m01_couplers_to_auto_cc_BREADY;
  wire [1:0]m01_couplers_to_auto_cc_BRESP;
  wire m01_couplers_to_auto_cc_BVALID;
  wire [31:0]m01_couplers_to_auto_cc_RDATA;
  wire m01_couplers_to_auto_cc_RREADY;
  wire [1:0]m01_couplers_to_auto_cc_RRESP;
  wire m01_couplers_to_auto_cc_RVALID;
  wire [31:0]m01_couplers_to_auto_cc_WDATA;
  wire m01_couplers_to_auto_cc_WREADY;
  wire [3:0]m01_couplers_to_auto_cc_WSTRB;
  wire m01_couplers_to_auto_cc_WVALID;

  assign M_ACLK_1 = M_ACLK;
  assign M_ARESETN_1 = M_ARESETN[0];
  assign M_AXI_araddr[31:0] = auto_cc_to_m01_couplers_ARADDR;
  assign M_AXI_arprot[2:0] = auto_cc_to_m01_couplers_ARPROT;
  assign M_AXI_arvalid = auto_cc_to_m01_couplers_ARVALID;
  assign M_AXI_awaddr[31:0] = auto_cc_to_m01_couplers_AWADDR;
  assign M_AXI_awprot[2:0] = auto_cc_to_m01_couplers_AWPROT;
  assign M_AXI_awvalid = auto_cc_to_m01_couplers_AWVALID;
  assign M_AXI_bready = auto_cc_to_m01_couplers_BREADY;
  assign M_AXI_rready = auto_cc_to_m01_couplers_RREADY;
  assign M_AXI_wdata[31:0] = auto_cc_to_m01_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = auto_cc_to_m01_couplers_WSTRB;
  assign M_AXI_wvalid = auto_cc_to_m01_couplers_WVALID;
  assign S_ACLK_1 = S_ACLK;
  assign S_ARESETN_1 = S_ARESETN[0];
  assign S_AXI_arready = m01_couplers_to_auto_cc_ARREADY;
  assign S_AXI_awready = m01_couplers_to_auto_cc_AWREADY;
  assign S_AXI_bresp[1:0] = m01_couplers_to_auto_cc_BRESP;
  assign S_AXI_bvalid = m01_couplers_to_auto_cc_BVALID;
  assign S_AXI_rdata[31:0] = m01_couplers_to_auto_cc_RDATA;
  assign S_AXI_rresp[1:0] = m01_couplers_to_auto_cc_RRESP;
  assign S_AXI_rvalid = m01_couplers_to_auto_cc_RVALID;
  assign S_AXI_wready = m01_couplers_to_auto_cc_WREADY;
  assign auto_cc_to_m01_couplers_ARREADY = M_AXI_arready;
  assign auto_cc_to_m01_couplers_AWREADY = M_AXI_awready;
  assign auto_cc_to_m01_couplers_BRESP = M_AXI_bresp[1:0];
  assign auto_cc_to_m01_couplers_BVALID = M_AXI_bvalid;
  assign auto_cc_to_m01_couplers_RDATA = M_AXI_rdata[31:0];
  assign auto_cc_to_m01_couplers_RRESP = M_AXI_rresp[1:0];
  assign auto_cc_to_m01_couplers_RVALID = M_AXI_rvalid;
  assign auto_cc_to_m01_couplers_WREADY = M_AXI_wready;
  assign m01_couplers_to_auto_cc_ARADDR = S_AXI_araddr[31:0];
  assign m01_couplers_to_auto_cc_ARPROT = S_AXI_arprot[2:0];
  assign m01_couplers_to_auto_cc_ARVALID = S_AXI_arvalid;
  assign m01_couplers_to_auto_cc_AWADDR = S_AXI_awaddr[31:0];
  assign m01_couplers_to_auto_cc_AWPROT = S_AXI_awprot[2:0];
  assign m01_couplers_to_auto_cc_AWVALID = S_AXI_awvalid;
  assign m01_couplers_to_auto_cc_BREADY = S_AXI_bready;
  assign m01_couplers_to_auto_cc_RREADY = S_AXI_rready;
  assign m01_couplers_to_auto_cc_WDATA = S_AXI_wdata[31:0];
  assign m01_couplers_to_auto_cc_WSTRB = S_AXI_wstrb[3:0];
  assign m01_couplers_to_auto_cc_WVALID = S_AXI_wvalid;
  system_auto_cc_0 auto_cc
       (.m_axi_aclk(M_ACLK_1),
        .m_axi_araddr(auto_cc_to_m01_couplers_ARADDR),
        .m_axi_aresetn(M_ARESETN_1),
        .m_axi_arprot(auto_cc_to_m01_couplers_ARPROT),
        .m_axi_arready(auto_cc_to_m01_couplers_ARREADY),
        .m_axi_arvalid(auto_cc_to_m01_couplers_ARVALID),
        .m_axi_awaddr(auto_cc_to_m01_couplers_AWADDR),
        .m_axi_awprot(auto_cc_to_m01_couplers_AWPROT),
        .m_axi_awready(auto_cc_to_m01_couplers_AWREADY),
        .m_axi_awvalid(auto_cc_to_m01_couplers_AWVALID),
        .m_axi_bready(auto_cc_to_m01_couplers_BREADY),
        .m_axi_bresp(auto_cc_to_m01_couplers_BRESP),
        .m_axi_bvalid(auto_cc_to_m01_couplers_BVALID),
        .m_axi_rdata(auto_cc_to_m01_couplers_RDATA),
        .m_axi_rready(auto_cc_to_m01_couplers_RREADY),
        .m_axi_rresp(auto_cc_to_m01_couplers_RRESP),
        .m_axi_rvalid(auto_cc_to_m01_couplers_RVALID),
        .m_axi_wdata(auto_cc_to_m01_couplers_WDATA),
        .m_axi_wready(auto_cc_to_m01_couplers_WREADY),
        .m_axi_wstrb(auto_cc_to_m01_couplers_WSTRB),
        .m_axi_wvalid(auto_cc_to_m01_couplers_WVALID),
        .s_axi_aclk(S_ACLK_1),
        .s_axi_araddr(m01_couplers_to_auto_cc_ARADDR),
        .s_axi_aresetn(S_ARESETN_1),
        .s_axi_arprot(m01_couplers_to_auto_cc_ARPROT),
        .s_axi_arready(m01_couplers_to_auto_cc_ARREADY),
        .s_axi_arvalid(m01_couplers_to_auto_cc_ARVALID),
        .s_axi_awaddr(m01_couplers_to_auto_cc_AWADDR),
        .s_axi_awprot(m01_couplers_to_auto_cc_AWPROT),
        .s_axi_awready(m01_couplers_to_auto_cc_AWREADY),
        .s_axi_awvalid(m01_couplers_to_auto_cc_AWVALID),
        .s_axi_bready(m01_couplers_to_auto_cc_BREADY),
        .s_axi_bresp(m01_couplers_to_auto_cc_BRESP),
        .s_axi_bvalid(m01_couplers_to_auto_cc_BVALID),
        .s_axi_rdata(m01_couplers_to_auto_cc_RDATA),
        .s_axi_rready(m01_couplers_to_auto_cc_RREADY),
        .s_axi_rresp(m01_couplers_to_auto_cc_RRESP),
        .s_axi_rvalid(m01_couplers_to_auto_cc_RVALID),
        .s_axi_wdata(m01_couplers_to_auto_cc_WDATA),
        .s_axi_wready(m01_couplers_to_auto_cc_WREADY),
        .s_axi_wstrb(m01_couplers_to_auto_cc_WSTRB),
        .s_axi_wvalid(m01_couplers_to_auto_cc_WVALID));
endmodule

module m02_couplers_imp_19J2N8J
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wvalid);
  input M_ACLK;
  input [0:0]M_ARESETN;
  output [31:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output M_AXI_wvalid;
  input S_ACLK;
  input [0:0]S_ARESETN;
  input [31:0]S_AXI_araddr;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input S_AXI_wvalid;

  wire [31:0]m02_couplers_to_m02_couplers_ARADDR;
  wire m02_couplers_to_m02_couplers_ARREADY;
  wire m02_couplers_to_m02_couplers_ARVALID;
  wire [31:0]m02_couplers_to_m02_couplers_AWADDR;
  wire m02_couplers_to_m02_couplers_AWREADY;
  wire m02_couplers_to_m02_couplers_AWVALID;
  wire m02_couplers_to_m02_couplers_BREADY;
  wire [1:0]m02_couplers_to_m02_couplers_BRESP;
  wire m02_couplers_to_m02_couplers_BVALID;
  wire [31:0]m02_couplers_to_m02_couplers_RDATA;
  wire m02_couplers_to_m02_couplers_RREADY;
  wire [1:0]m02_couplers_to_m02_couplers_RRESP;
  wire m02_couplers_to_m02_couplers_RVALID;
  wire [31:0]m02_couplers_to_m02_couplers_WDATA;
  wire m02_couplers_to_m02_couplers_WREADY;
  wire m02_couplers_to_m02_couplers_WVALID;

  assign M_AXI_araddr[31:0] = m02_couplers_to_m02_couplers_ARADDR;
  assign M_AXI_arvalid = m02_couplers_to_m02_couplers_ARVALID;
  assign M_AXI_awaddr[31:0] = m02_couplers_to_m02_couplers_AWADDR;
  assign M_AXI_awvalid = m02_couplers_to_m02_couplers_AWVALID;
  assign M_AXI_bready = m02_couplers_to_m02_couplers_BREADY;
  assign M_AXI_rready = m02_couplers_to_m02_couplers_RREADY;
  assign M_AXI_wdata[31:0] = m02_couplers_to_m02_couplers_WDATA;
  assign M_AXI_wvalid = m02_couplers_to_m02_couplers_WVALID;
  assign S_AXI_arready = m02_couplers_to_m02_couplers_ARREADY;
  assign S_AXI_awready = m02_couplers_to_m02_couplers_AWREADY;
  assign S_AXI_bresp[1:0] = m02_couplers_to_m02_couplers_BRESP;
  assign S_AXI_bvalid = m02_couplers_to_m02_couplers_BVALID;
  assign S_AXI_rdata[31:0] = m02_couplers_to_m02_couplers_RDATA;
  assign S_AXI_rresp[1:0] = m02_couplers_to_m02_couplers_RRESP;
  assign S_AXI_rvalid = m02_couplers_to_m02_couplers_RVALID;
  assign S_AXI_wready = m02_couplers_to_m02_couplers_WREADY;
  assign m02_couplers_to_m02_couplers_ARADDR = S_AXI_araddr[31:0];
  assign m02_couplers_to_m02_couplers_ARREADY = M_AXI_arready;
  assign m02_couplers_to_m02_couplers_ARVALID = S_AXI_arvalid;
  assign m02_couplers_to_m02_couplers_AWADDR = S_AXI_awaddr[31:0];
  assign m02_couplers_to_m02_couplers_AWREADY = M_AXI_awready;
  assign m02_couplers_to_m02_couplers_AWVALID = S_AXI_awvalid;
  assign m02_couplers_to_m02_couplers_BREADY = S_AXI_bready;
  assign m02_couplers_to_m02_couplers_BRESP = M_AXI_bresp[1:0];
  assign m02_couplers_to_m02_couplers_BVALID = M_AXI_bvalid;
  assign m02_couplers_to_m02_couplers_RDATA = M_AXI_rdata[31:0];
  assign m02_couplers_to_m02_couplers_RREADY = S_AXI_rready;
  assign m02_couplers_to_m02_couplers_RRESP = M_AXI_rresp[1:0];
  assign m02_couplers_to_m02_couplers_RVALID = M_AXI_rvalid;
  assign m02_couplers_to_m02_couplers_WDATA = S_AXI_wdata[31:0];
  assign m02_couplers_to_m02_couplers_WREADY = M_AXI_wready;
  assign m02_couplers_to_m02_couplers_WVALID = S_AXI_wvalid;
endmodule

module s00_couplers_imp_16HO73N
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arcache,
    M_AXI_arlen,
    M_AXI_arlock,
    M_AXI_arprot,
    M_AXI_arqos,
    M_AXI_arready,
    M_AXI_arsize,
    M_AXI_arvalid,
    M_AXI_rdata,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arlen,
    S_AXI_arprot,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_rdata,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid);
  input M_ACLK;
  input [0:0]M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [3:0]M_AXI_arcache;
  output [3:0]M_AXI_arlen;
  output [1:0]M_AXI_arlock;
  output [2:0]M_AXI_arprot;
  output [3:0]M_AXI_arqos;
  input M_AXI_arready;
  output [2:0]M_AXI_arsize;
  output M_AXI_arvalid;
  input [63:0]M_AXI_rdata;
  input M_AXI_rlast;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  input S_ACLK;
  input [0:0]S_ARESETN;
  input [31:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [7:0]S_AXI_arlen;
  input [2:0]S_AXI_arprot;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  output [63:0]S_AXI_rdata;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;

  wire S_ACLK_1;
  wire [0:0]S_ARESETN_1;
  wire [31:0]auto_pc_to_s00_couplers_ARADDR;
  wire [1:0]auto_pc_to_s00_couplers_ARBURST;
  wire [3:0]auto_pc_to_s00_couplers_ARCACHE;
  wire [3:0]auto_pc_to_s00_couplers_ARLEN;
  wire [1:0]auto_pc_to_s00_couplers_ARLOCK;
  wire [2:0]auto_pc_to_s00_couplers_ARPROT;
  wire [3:0]auto_pc_to_s00_couplers_ARQOS;
  wire auto_pc_to_s00_couplers_ARREADY;
  wire [2:0]auto_pc_to_s00_couplers_ARSIZE;
  wire auto_pc_to_s00_couplers_ARVALID;
  wire [63:0]auto_pc_to_s00_couplers_RDATA;
  wire auto_pc_to_s00_couplers_RLAST;
  wire auto_pc_to_s00_couplers_RREADY;
  wire [1:0]auto_pc_to_s00_couplers_RRESP;
  wire auto_pc_to_s00_couplers_RVALID;
  wire [31:0]s00_couplers_to_auto_pc_ARADDR;
  wire [1:0]s00_couplers_to_auto_pc_ARBURST;
  wire [3:0]s00_couplers_to_auto_pc_ARCACHE;
  wire [7:0]s00_couplers_to_auto_pc_ARLEN;
  wire [2:0]s00_couplers_to_auto_pc_ARPROT;
  wire s00_couplers_to_auto_pc_ARREADY;
  wire [2:0]s00_couplers_to_auto_pc_ARSIZE;
  wire s00_couplers_to_auto_pc_ARVALID;
  wire [63:0]s00_couplers_to_auto_pc_RDATA;
  wire s00_couplers_to_auto_pc_RLAST;
  wire s00_couplers_to_auto_pc_RREADY;
  wire [1:0]s00_couplers_to_auto_pc_RRESP;
  wire s00_couplers_to_auto_pc_RVALID;

  assign M_AXI_araddr[31:0] = auto_pc_to_s00_couplers_ARADDR;
  assign M_AXI_arburst[1:0] = auto_pc_to_s00_couplers_ARBURST;
  assign M_AXI_arcache[3:0] = auto_pc_to_s00_couplers_ARCACHE;
  assign M_AXI_arlen[3:0] = auto_pc_to_s00_couplers_ARLEN;
  assign M_AXI_arlock[1:0] = auto_pc_to_s00_couplers_ARLOCK;
  assign M_AXI_arprot[2:0] = auto_pc_to_s00_couplers_ARPROT;
  assign M_AXI_arqos[3:0] = auto_pc_to_s00_couplers_ARQOS;
  assign M_AXI_arsize[2:0] = auto_pc_to_s00_couplers_ARSIZE;
  assign M_AXI_arvalid = auto_pc_to_s00_couplers_ARVALID;
  assign M_AXI_rready = auto_pc_to_s00_couplers_RREADY;
  assign S_ACLK_1 = S_ACLK;
  assign S_ARESETN_1 = S_ARESETN[0];
  assign S_AXI_arready = s00_couplers_to_auto_pc_ARREADY;
  assign S_AXI_rdata[63:0] = s00_couplers_to_auto_pc_RDATA;
  assign S_AXI_rlast = s00_couplers_to_auto_pc_RLAST;
  assign S_AXI_rresp[1:0] = s00_couplers_to_auto_pc_RRESP;
  assign S_AXI_rvalid = s00_couplers_to_auto_pc_RVALID;
  assign auto_pc_to_s00_couplers_ARREADY = M_AXI_arready;
  assign auto_pc_to_s00_couplers_RDATA = M_AXI_rdata[63:0];
  assign auto_pc_to_s00_couplers_RLAST = M_AXI_rlast;
  assign auto_pc_to_s00_couplers_RRESP = M_AXI_rresp[1:0];
  assign auto_pc_to_s00_couplers_RVALID = M_AXI_rvalid;
  assign s00_couplers_to_auto_pc_ARADDR = S_AXI_araddr[31:0];
  assign s00_couplers_to_auto_pc_ARBURST = S_AXI_arburst[1:0];
  assign s00_couplers_to_auto_pc_ARCACHE = S_AXI_arcache[3:0];
  assign s00_couplers_to_auto_pc_ARLEN = S_AXI_arlen[7:0];
  assign s00_couplers_to_auto_pc_ARPROT = S_AXI_arprot[2:0];
  assign s00_couplers_to_auto_pc_ARSIZE = S_AXI_arsize[2:0];
  assign s00_couplers_to_auto_pc_ARVALID = S_AXI_arvalid;
  assign s00_couplers_to_auto_pc_RREADY = S_AXI_rready;
  system_auto_pc_1 auto_pc
       (.aclk(S_ACLK_1),
        .aresetn(S_ARESETN_1),
        .m_axi_araddr(auto_pc_to_s00_couplers_ARADDR),
        .m_axi_arburst(auto_pc_to_s00_couplers_ARBURST),
        .m_axi_arcache(auto_pc_to_s00_couplers_ARCACHE),
        .m_axi_arlen(auto_pc_to_s00_couplers_ARLEN),
        .m_axi_arlock(auto_pc_to_s00_couplers_ARLOCK),
        .m_axi_arprot(auto_pc_to_s00_couplers_ARPROT),
        .m_axi_arqos(auto_pc_to_s00_couplers_ARQOS),
        .m_axi_arready(auto_pc_to_s00_couplers_ARREADY),
        .m_axi_arsize(auto_pc_to_s00_couplers_ARSIZE),
        .m_axi_arvalid(auto_pc_to_s00_couplers_ARVALID),
        .m_axi_rdata(auto_pc_to_s00_couplers_RDATA),
        .m_axi_rlast(auto_pc_to_s00_couplers_RLAST),
        .m_axi_rready(auto_pc_to_s00_couplers_RREADY),
        .m_axi_rresp(auto_pc_to_s00_couplers_RRESP),
        .m_axi_rvalid(auto_pc_to_s00_couplers_RVALID),
        .s_axi_araddr(s00_couplers_to_auto_pc_ARADDR),
        .s_axi_arburst(s00_couplers_to_auto_pc_ARBURST),
        .s_axi_arcache(s00_couplers_to_auto_pc_ARCACHE),
        .s_axi_arlen(s00_couplers_to_auto_pc_ARLEN),
        .s_axi_arlock(1'b0),
        .s_axi_arprot(s00_couplers_to_auto_pc_ARPROT),
        .s_axi_arqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(s00_couplers_to_auto_pc_ARREADY),
        .s_axi_arregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arsize(s00_couplers_to_auto_pc_ARSIZE),
        .s_axi_arvalid(s00_couplers_to_auto_pc_ARVALID),
        .s_axi_rdata(s00_couplers_to_auto_pc_RDATA),
        .s_axi_rlast(s00_couplers_to_auto_pc_RLAST),
        .s_axi_rready(s00_couplers_to_auto_pc_RREADY),
        .s_axi_rresp(s00_couplers_to_auto_pc_RRESP),
        .s_axi_rvalid(s00_couplers_to_auto_pc_RVALID));
endmodule

module s00_couplers_imp_1KTB6MO
   (M_ACLK,
    M_ARESETN,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awsize,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awlen,
    S_AXI_awprot,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input [0:0]M_ARESETN;
  output [31:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [3:0]M_AXI_awlen;
  output [1:0]M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input M_AXI_awready;
  output [2:0]M_AXI_awsize;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  output [63:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [7:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input [0:0]S_ARESETN;
  input [31:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [7:0]S_AXI_awlen;
  input [2:0]S_AXI_awprot;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire S_ACLK_1;
  wire [0:0]S_ARESETN_1;
  wire [31:0]auto_pc_to_auto_us_AWADDR;
  wire [1:0]auto_pc_to_auto_us_AWBURST;
  wire [3:0]auto_pc_to_auto_us_AWCACHE;
  wire [3:0]auto_pc_to_auto_us_AWLEN;
  wire [1:0]auto_pc_to_auto_us_AWLOCK;
  wire [2:0]auto_pc_to_auto_us_AWPROT;
  wire [3:0]auto_pc_to_auto_us_AWQOS;
  wire auto_pc_to_auto_us_AWREADY;
  wire [2:0]auto_pc_to_auto_us_AWSIZE;
  wire auto_pc_to_auto_us_AWVALID;
  wire auto_pc_to_auto_us_BREADY;
  wire [1:0]auto_pc_to_auto_us_BRESP;
  wire auto_pc_to_auto_us_BVALID;
  wire [31:0]auto_pc_to_auto_us_WDATA;
  wire auto_pc_to_auto_us_WLAST;
  wire auto_pc_to_auto_us_WREADY;
  wire [3:0]auto_pc_to_auto_us_WSTRB;
  wire auto_pc_to_auto_us_WVALID;
  wire [31:0]auto_us_to_s00_couplers_AWADDR;
  wire [1:0]auto_us_to_s00_couplers_AWBURST;
  wire [3:0]auto_us_to_s00_couplers_AWCACHE;
  wire [3:0]auto_us_to_s00_couplers_AWLEN;
  wire [1:0]auto_us_to_s00_couplers_AWLOCK;
  wire [2:0]auto_us_to_s00_couplers_AWPROT;
  wire [3:0]auto_us_to_s00_couplers_AWQOS;
  wire auto_us_to_s00_couplers_AWREADY;
  wire [2:0]auto_us_to_s00_couplers_AWSIZE;
  wire auto_us_to_s00_couplers_AWVALID;
  wire auto_us_to_s00_couplers_BREADY;
  wire [1:0]auto_us_to_s00_couplers_BRESP;
  wire auto_us_to_s00_couplers_BVALID;
  wire [63:0]auto_us_to_s00_couplers_WDATA;
  wire auto_us_to_s00_couplers_WLAST;
  wire auto_us_to_s00_couplers_WREADY;
  wire [7:0]auto_us_to_s00_couplers_WSTRB;
  wire auto_us_to_s00_couplers_WVALID;
  wire [31:0]s00_couplers_to_auto_pc_AWADDR;
  wire [1:0]s00_couplers_to_auto_pc_AWBURST;
  wire [3:0]s00_couplers_to_auto_pc_AWCACHE;
  wire [7:0]s00_couplers_to_auto_pc_AWLEN;
  wire [2:0]s00_couplers_to_auto_pc_AWPROT;
  wire s00_couplers_to_auto_pc_AWREADY;
  wire [2:0]s00_couplers_to_auto_pc_AWSIZE;
  wire s00_couplers_to_auto_pc_AWVALID;
  wire s00_couplers_to_auto_pc_BREADY;
  wire [1:0]s00_couplers_to_auto_pc_BRESP;
  wire s00_couplers_to_auto_pc_BVALID;
  wire [31:0]s00_couplers_to_auto_pc_WDATA;
  wire s00_couplers_to_auto_pc_WLAST;
  wire s00_couplers_to_auto_pc_WREADY;
  wire [3:0]s00_couplers_to_auto_pc_WSTRB;
  wire s00_couplers_to_auto_pc_WVALID;

  assign M_AXI_awaddr[31:0] = auto_us_to_s00_couplers_AWADDR;
  assign M_AXI_awburst[1:0] = auto_us_to_s00_couplers_AWBURST;
  assign M_AXI_awcache[3:0] = auto_us_to_s00_couplers_AWCACHE;
  assign M_AXI_awlen[3:0] = auto_us_to_s00_couplers_AWLEN;
  assign M_AXI_awlock[1:0] = auto_us_to_s00_couplers_AWLOCK;
  assign M_AXI_awprot[2:0] = auto_us_to_s00_couplers_AWPROT;
  assign M_AXI_awqos[3:0] = auto_us_to_s00_couplers_AWQOS;
  assign M_AXI_awsize[2:0] = auto_us_to_s00_couplers_AWSIZE;
  assign M_AXI_awvalid = auto_us_to_s00_couplers_AWVALID;
  assign M_AXI_bready = auto_us_to_s00_couplers_BREADY;
  assign M_AXI_wdata[63:0] = auto_us_to_s00_couplers_WDATA;
  assign M_AXI_wlast = auto_us_to_s00_couplers_WLAST;
  assign M_AXI_wstrb[7:0] = auto_us_to_s00_couplers_WSTRB;
  assign M_AXI_wvalid = auto_us_to_s00_couplers_WVALID;
  assign S_ACLK_1 = S_ACLK;
  assign S_ARESETN_1 = S_ARESETN[0];
  assign S_AXI_awready = s00_couplers_to_auto_pc_AWREADY;
  assign S_AXI_bresp[1:0] = s00_couplers_to_auto_pc_BRESP;
  assign S_AXI_bvalid = s00_couplers_to_auto_pc_BVALID;
  assign S_AXI_wready = s00_couplers_to_auto_pc_WREADY;
  assign auto_us_to_s00_couplers_AWREADY = M_AXI_awready;
  assign auto_us_to_s00_couplers_BRESP = M_AXI_bresp[1:0];
  assign auto_us_to_s00_couplers_BVALID = M_AXI_bvalid;
  assign auto_us_to_s00_couplers_WREADY = M_AXI_wready;
  assign s00_couplers_to_auto_pc_AWADDR = S_AXI_awaddr[31:0];
  assign s00_couplers_to_auto_pc_AWBURST = S_AXI_awburst[1:0];
  assign s00_couplers_to_auto_pc_AWCACHE = S_AXI_awcache[3:0];
  assign s00_couplers_to_auto_pc_AWLEN = S_AXI_awlen[7:0];
  assign s00_couplers_to_auto_pc_AWPROT = S_AXI_awprot[2:0];
  assign s00_couplers_to_auto_pc_AWSIZE = S_AXI_awsize[2:0];
  assign s00_couplers_to_auto_pc_AWVALID = S_AXI_awvalid;
  assign s00_couplers_to_auto_pc_BREADY = S_AXI_bready;
  assign s00_couplers_to_auto_pc_WDATA = S_AXI_wdata[31:0];
  assign s00_couplers_to_auto_pc_WLAST = S_AXI_wlast;
  assign s00_couplers_to_auto_pc_WSTRB = S_AXI_wstrb[3:0];
  assign s00_couplers_to_auto_pc_WVALID = S_AXI_wvalid;
  system_auto_pc_2 auto_pc
       (.aclk(S_ACLK_1),
        .aresetn(S_ARESETN_1),
        .m_axi_awaddr(auto_pc_to_auto_us_AWADDR),
        .m_axi_awburst(auto_pc_to_auto_us_AWBURST),
        .m_axi_awcache(auto_pc_to_auto_us_AWCACHE),
        .m_axi_awlen(auto_pc_to_auto_us_AWLEN),
        .m_axi_awlock(auto_pc_to_auto_us_AWLOCK),
        .m_axi_awprot(auto_pc_to_auto_us_AWPROT),
        .m_axi_awqos(auto_pc_to_auto_us_AWQOS),
        .m_axi_awready(auto_pc_to_auto_us_AWREADY),
        .m_axi_awsize(auto_pc_to_auto_us_AWSIZE),
        .m_axi_awvalid(auto_pc_to_auto_us_AWVALID),
        .m_axi_bready(auto_pc_to_auto_us_BREADY),
        .m_axi_bresp(auto_pc_to_auto_us_BRESP),
        .m_axi_bvalid(auto_pc_to_auto_us_BVALID),
        .m_axi_wdata(auto_pc_to_auto_us_WDATA),
        .m_axi_wlast(auto_pc_to_auto_us_WLAST),
        .m_axi_wready(auto_pc_to_auto_us_WREADY),
        .m_axi_wstrb(auto_pc_to_auto_us_WSTRB),
        .m_axi_wvalid(auto_pc_to_auto_us_WVALID),
        .s_axi_awaddr(s00_couplers_to_auto_pc_AWADDR),
        .s_axi_awburst(s00_couplers_to_auto_pc_AWBURST),
        .s_axi_awcache(s00_couplers_to_auto_pc_AWCACHE),
        .s_axi_awlen(s00_couplers_to_auto_pc_AWLEN),
        .s_axi_awlock(1'b0),
        .s_axi_awprot(s00_couplers_to_auto_pc_AWPROT),
        .s_axi_awqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(s00_couplers_to_auto_pc_AWREADY),
        .s_axi_awregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awsize(s00_couplers_to_auto_pc_AWSIZE),
        .s_axi_awvalid(s00_couplers_to_auto_pc_AWVALID),
        .s_axi_bready(s00_couplers_to_auto_pc_BREADY),
        .s_axi_bresp(s00_couplers_to_auto_pc_BRESP),
        .s_axi_bvalid(s00_couplers_to_auto_pc_BVALID),
        .s_axi_wdata(s00_couplers_to_auto_pc_WDATA),
        .s_axi_wlast(s00_couplers_to_auto_pc_WLAST),
        .s_axi_wready(s00_couplers_to_auto_pc_WREADY),
        .s_axi_wstrb(s00_couplers_to_auto_pc_WSTRB),
        .s_axi_wvalid(s00_couplers_to_auto_pc_WVALID));
  system_auto_us_0 auto_us
       (.m_axi_awaddr(auto_us_to_s00_couplers_AWADDR),
        .m_axi_awburst(auto_us_to_s00_couplers_AWBURST),
        .m_axi_awcache(auto_us_to_s00_couplers_AWCACHE),
        .m_axi_awlen(auto_us_to_s00_couplers_AWLEN),
        .m_axi_awlock(auto_us_to_s00_couplers_AWLOCK),
        .m_axi_awprot(auto_us_to_s00_couplers_AWPROT),
        .m_axi_awqos(auto_us_to_s00_couplers_AWQOS),
        .m_axi_awready(auto_us_to_s00_couplers_AWREADY),
        .m_axi_awsize(auto_us_to_s00_couplers_AWSIZE),
        .m_axi_awvalid(auto_us_to_s00_couplers_AWVALID),
        .m_axi_bready(auto_us_to_s00_couplers_BREADY),
        .m_axi_bresp(auto_us_to_s00_couplers_BRESP),
        .m_axi_bvalid(auto_us_to_s00_couplers_BVALID),
        .m_axi_wdata(auto_us_to_s00_couplers_WDATA),
        .m_axi_wlast(auto_us_to_s00_couplers_WLAST),
        .m_axi_wready(auto_us_to_s00_couplers_WREADY),
        .m_axi_wstrb(auto_us_to_s00_couplers_WSTRB),
        .m_axi_wvalid(auto_us_to_s00_couplers_WVALID),
        .s_axi_aclk(S_ACLK_1),
        .s_axi_aresetn(S_ARESETN_1),
        .s_axi_awaddr(auto_pc_to_auto_us_AWADDR),
        .s_axi_awburst(auto_pc_to_auto_us_AWBURST),
        .s_axi_awcache(auto_pc_to_auto_us_AWCACHE),
        .s_axi_awlen(auto_pc_to_auto_us_AWLEN),
        .s_axi_awlock(auto_pc_to_auto_us_AWLOCK),
        .s_axi_awprot(auto_pc_to_auto_us_AWPROT),
        .s_axi_awqos(auto_pc_to_auto_us_AWQOS),
        .s_axi_awready(auto_pc_to_auto_us_AWREADY),
        .s_axi_awsize(auto_pc_to_auto_us_AWSIZE),
        .s_axi_awvalid(auto_pc_to_auto_us_AWVALID),
        .s_axi_bready(auto_pc_to_auto_us_BREADY),
        .s_axi_bresp(auto_pc_to_auto_us_BRESP),
        .s_axi_bvalid(auto_pc_to_auto_us_BVALID),
        .s_axi_wdata(auto_pc_to_auto_us_WDATA),
        .s_axi_wlast(auto_pc_to_auto_us_WLAST),
        .s_axi_wready(auto_pc_to_auto_us_WREADY),
        .s_axi_wstrb(auto_pc_to_auto_us_WSTRB),
        .s_axi_wvalid(auto_pc_to_auto_us_WVALID));
endmodule

module s00_couplers_imp_5M10I9
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wid,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input [0:0]M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input [0:0]S_ARESETN;
  input [31:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [11:0]S_AXI_arid;
  input [3:0]S_AXI_arlen;
  input [1:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [11:0]S_AXI_awid;
  input [3:0]S_AXI_awlen;
  input [1:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  output [11:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output [11:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input [11:0]S_AXI_wid;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire S_ACLK_1;
  wire [0:0]S_ARESETN_1;
  wire [31:0]auto_pc_to_s00_couplers_ARADDR;
  wire [2:0]auto_pc_to_s00_couplers_ARPROT;
  wire auto_pc_to_s00_couplers_ARREADY;
  wire auto_pc_to_s00_couplers_ARVALID;
  wire [31:0]auto_pc_to_s00_couplers_AWADDR;
  wire [2:0]auto_pc_to_s00_couplers_AWPROT;
  wire auto_pc_to_s00_couplers_AWREADY;
  wire auto_pc_to_s00_couplers_AWVALID;
  wire auto_pc_to_s00_couplers_BREADY;
  wire [1:0]auto_pc_to_s00_couplers_BRESP;
  wire auto_pc_to_s00_couplers_BVALID;
  wire [31:0]auto_pc_to_s00_couplers_RDATA;
  wire auto_pc_to_s00_couplers_RREADY;
  wire [1:0]auto_pc_to_s00_couplers_RRESP;
  wire auto_pc_to_s00_couplers_RVALID;
  wire [31:0]auto_pc_to_s00_couplers_WDATA;
  wire auto_pc_to_s00_couplers_WREADY;
  wire [3:0]auto_pc_to_s00_couplers_WSTRB;
  wire auto_pc_to_s00_couplers_WVALID;
  wire [31:0]s00_couplers_to_auto_pc_ARADDR;
  wire [1:0]s00_couplers_to_auto_pc_ARBURST;
  wire [3:0]s00_couplers_to_auto_pc_ARCACHE;
  wire [11:0]s00_couplers_to_auto_pc_ARID;
  wire [3:0]s00_couplers_to_auto_pc_ARLEN;
  wire [1:0]s00_couplers_to_auto_pc_ARLOCK;
  wire [2:0]s00_couplers_to_auto_pc_ARPROT;
  wire [3:0]s00_couplers_to_auto_pc_ARQOS;
  wire s00_couplers_to_auto_pc_ARREADY;
  wire [2:0]s00_couplers_to_auto_pc_ARSIZE;
  wire s00_couplers_to_auto_pc_ARVALID;
  wire [31:0]s00_couplers_to_auto_pc_AWADDR;
  wire [1:0]s00_couplers_to_auto_pc_AWBURST;
  wire [3:0]s00_couplers_to_auto_pc_AWCACHE;
  wire [11:0]s00_couplers_to_auto_pc_AWID;
  wire [3:0]s00_couplers_to_auto_pc_AWLEN;
  wire [1:0]s00_couplers_to_auto_pc_AWLOCK;
  wire [2:0]s00_couplers_to_auto_pc_AWPROT;
  wire [3:0]s00_couplers_to_auto_pc_AWQOS;
  wire s00_couplers_to_auto_pc_AWREADY;
  wire [2:0]s00_couplers_to_auto_pc_AWSIZE;
  wire s00_couplers_to_auto_pc_AWVALID;
  wire [11:0]s00_couplers_to_auto_pc_BID;
  wire s00_couplers_to_auto_pc_BREADY;
  wire [1:0]s00_couplers_to_auto_pc_BRESP;
  wire s00_couplers_to_auto_pc_BVALID;
  wire [31:0]s00_couplers_to_auto_pc_RDATA;
  wire [11:0]s00_couplers_to_auto_pc_RID;
  wire s00_couplers_to_auto_pc_RLAST;
  wire s00_couplers_to_auto_pc_RREADY;
  wire [1:0]s00_couplers_to_auto_pc_RRESP;
  wire s00_couplers_to_auto_pc_RVALID;
  wire [31:0]s00_couplers_to_auto_pc_WDATA;
  wire [11:0]s00_couplers_to_auto_pc_WID;
  wire s00_couplers_to_auto_pc_WLAST;
  wire s00_couplers_to_auto_pc_WREADY;
  wire [3:0]s00_couplers_to_auto_pc_WSTRB;
  wire s00_couplers_to_auto_pc_WVALID;

  assign M_AXI_araddr[31:0] = auto_pc_to_s00_couplers_ARADDR;
  assign M_AXI_arprot[2:0] = auto_pc_to_s00_couplers_ARPROT;
  assign M_AXI_arvalid = auto_pc_to_s00_couplers_ARVALID;
  assign M_AXI_awaddr[31:0] = auto_pc_to_s00_couplers_AWADDR;
  assign M_AXI_awprot[2:0] = auto_pc_to_s00_couplers_AWPROT;
  assign M_AXI_awvalid = auto_pc_to_s00_couplers_AWVALID;
  assign M_AXI_bready = auto_pc_to_s00_couplers_BREADY;
  assign M_AXI_rready = auto_pc_to_s00_couplers_RREADY;
  assign M_AXI_wdata[31:0] = auto_pc_to_s00_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = auto_pc_to_s00_couplers_WSTRB;
  assign M_AXI_wvalid = auto_pc_to_s00_couplers_WVALID;
  assign S_ACLK_1 = S_ACLK;
  assign S_ARESETN_1 = S_ARESETN[0];
  assign S_AXI_arready = s00_couplers_to_auto_pc_ARREADY;
  assign S_AXI_awready = s00_couplers_to_auto_pc_AWREADY;
  assign S_AXI_bid[11:0] = s00_couplers_to_auto_pc_BID;
  assign S_AXI_bresp[1:0] = s00_couplers_to_auto_pc_BRESP;
  assign S_AXI_bvalid = s00_couplers_to_auto_pc_BVALID;
  assign S_AXI_rdata[31:0] = s00_couplers_to_auto_pc_RDATA;
  assign S_AXI_rid[11:0] = s00_couplers_to_auto_pc_RID;
  assign S_AXI_rlast = s00_couplers_to_auto_pc_RLAST;
  assign S_AXI_rresp[1:0] = s00_couplers_to_auto_pc_RRESP;
  assign S_AXI_rvalid = s00_couplers_to_auto_pc_RVALID;
  assign S_AXI_wready = s00_couplers_to_auto_pc_WREADY;
  assign auto_pc_to_s00_couplers_ARREADY = M_AXI_arready;
  assign auto_pc_to_s00_couplers_AWREADY = M_AXI_awready;
  assign auto_pc_to_s00_couplers_BRESP = M_AXI_bresp[1:0];
  assign auto_pc_to_s00_couplers_BVALID = M_AXI_bvalid;
  assign auto_pc_to_s00_couplers_RDATA = M_AXI_rdata[31:0];
  assign auto_pc_to_s00_couplers_RRESP = M_AXI_rresp[1:0];
  assign auto_pc_to_s00_couplers_RVALID = M_AXI_rvalid;
  assign auto_pc_to_s00_couplers_WREADY = M_AXI_wready;
  assign s00_couplers_to_auto_pc_ARADDR = S_AXI_araddr[31:0];
  assign s00_couplers_to_auto_pc_ARBURST = S_AXI_arburst[1:0];
  assign s00_couplers_to_auto_pc_ARCACHE = S_AXI_arcache[3:0];
  assign s00_couplers_to_auto_pc_ARID = S_AXI_arid[11:0];
  assign s00_couplers_to_auto_pc_ARLEN = S_AXI_arlen[3:0];
  assign s00_couplers_to_auto_pc_ARLOCK = S_AXI_arlock[1:0];
  assign s00_couplers_to_auto_pc_ARPROT = S_AXI_arprot[2:0];
  assign s00_couplers_to_auto_pc_ARQOS = S_AXI_arqos[3:0];
  assign s00_couplers_to_auto_pc_ARSIZE = S_AXI_arsize[2:0];
  assign s00_couplers_to_auto_pc_ARVALID = S_AXI_arvalid;
  assign s00_couplers_to_auto_pc_AWADDR = S_AXI_awaddr[31:0];
  assign s00_couplers_to_auto_pc_AWBURST = S_AXI_awburst[1:0];
  assign s00_couplers_to_auto_pc_AWCACHE = S_AXI_awcache[3:0];
  assign s00_couplers_to_auto_pc_AWID = S_AXI_awid[11:0];
  assign s00_couplers_to_auto_pc_AWLEN = S_AXI_awlen[3:0];
  assign s00_couplers_to_auto_pc_AWLOCK = S_AXI_awlock[1:0];
  assign s00_couplers_to_auto_pc_AWPROT = S_AXI_awprot[2:0];
  assign s00_couplers_to_auto_pc_AWQOS = S_AXI_awqos[3:0];
  assign s00_couplers_to_auto_pc_AWSIZE = S_AXI_awsize[2:0];
  assign s00_couplers_to_auto_pc_AWVALID = S_AXI_awvalid;
  assign s00_couplers_to_auto_pc_BREADY = S_AXI_bready;
  assign s00_couplers_to_auto_pc_RREADY = S_AXI_rready;
  assign s00_couplers_to_auto_pc_WDATA = S_AXI_wdata[31:0];
  assign s00_couplers_to_auto_pc_WID = S_AXI_wid[11:0];
  assign s00_couplers_to_auto_pc_WLAST = S_AXI_wlast;
  assign s00_couplers_to_auto_pc_WSTRB = S_AXI_wstrb[3:0];
  assign s00_couplers_to_auto_pc_WVALID = S_AXI_wvalid;
  system_auto_pc_0 auto_pc
       (.aclk(S_ACLK_1),
        .aresetn(S_ARESETN_1),
        .m_axi_araddr(auto_pc_to_s00_couplers_ARADDR),
        .m_axi_arprot(auto_pc_to_s00_couplers_ARPROT),
        .m_axi_arready(auto_pc_to_s00_couplers_ARREADY),
        .m_axi_arvalid(auto_pc_to_s00_couplers_ARVALID),
        .m_axi_awaddr(auto_pc_to_s00_couplers_AWADDR),
        .m_axi_awprot(auto_pc_to_s00_couplers_AWPROT),
        .m_axi_awready(auto_pc_to_s00_couplers_AWREADY),
        .m_axi_awvalid(auto_pc_to_s00_couplers_AWVALID),
        .m_axi_bready(auto_pc_to_s00_couplers_BREADY),
        .m_axi_bresp(auto_pc_to_s00_couplers_BRESP),
        .m_axi_bvalid(auto_pc_to_s00_couplers_BVALID),
        .m_axi_rdata(auto_pc_to_s00_couplers_RDATA),
        .m_axi_rready(auto_pc_to_s00_couplers_RREADY),
        .m_axi_rresp(auto_pc_to_s00_couplers_RRESP),
        .m_axi_rvalid(auto_pc_to_s00_couplers_RVALID),
        .m_axi_wdata(auto_pc_to_s00_couplers_WDATA),
        .m_axi_wready(auto_pc_to_s00_couplers_WREADY),
        .m_axi_wstrb(auto_pc_to_s00_couplers_WSTRB),
        .m_axi_wvalid(auto_pc_to_s00_couplers_WVALID),
        .s_axi_araddr(s00_couplers_to_auto_pc_ARADDR),
        .s_axi_arburst(s00_couplers_to_auto_pc_ARBURST),
        .s_axi_arcache(s00_couplers_to_auto_pc_ARCACHE),
        .s_axi_arid(s00_couplers_to_auto_pc_ARID),
        .s_axi_arlen(s00_couplers_to_auto_pc_ARLEN),
        .s_axi_arlock(s00_couplers_to_auto_pc_ARLOCK),
        .s_axi_arprot(s00_couplers_to_auto_pc_ARPROT),
        .s_axi_arqos(s00_couplers_to_auto_pc_ARQOS),
        .s_axi_arready(s00_couplers_to_auto_pc_ARREADY),
        .s_axi_arsize(s00_couplers_to_auto_pc_ARSIZE),
        .s_axi_arvalid(s00_couplers_to_auto_pc_ARVALID),
        .s_axi_awaddr(s00_couplers_to_auto_pc_AWADDR),
        .s_axi_awburst(s00_couplers_to_auto_pc_AWBURST),
        .s_axi_awcache(s00_couplers_to_auto_pc_AWCACHE),
        .s_axi_awid(s00_couplers_to_auto_pc_AWID),
        .s_axi_awlen(s00_couplers_to_auto_pc_AWLEN),
        .s_axi_awlock(s00_couplers_to_auto_pc_AWLOCK),
        .s_axi_awprot(s00_couplers_to_auto_pc_AWPROT),
        .s_axi_awqos(s00_couplers_to_auto_pc_AWQOS),
        .s_axi_awready(s00_couplers_to_auto_pc_AWREADY),
        .s_axi_awsize(s00_couplers_to_auto_pc_AWSIZE),
        .s_axi_awvalid(s00_couplers_to_auto_pc_AWVALID),
        .s_axi_bid(s00_couplers_to_auto_pc_BID),
        .s_axi_bready(s00_couplers_to_auto_pc_BREADY),
        .s_axi_bresp(s00_couplers_to_auto_pc_BRESP),
        .s_axi_bvalid(s00_couplers_to_auto_pc_BVALID),
        .s_axi_rdata(s00_couplers_to_auto_pc_RDATA),
        .s_axi_rid(s00_couplers_to_auto_pc_RID),
        .s_axi_rlast(s00_couplers_to_auto_pc_RLAST),
        .s_axi_rready(s00_couplers_to_auto_pc_RREADY),
        .s_axi_rresp(s00_couplers_to_auto_pc_RRESP),
        .s_axi_rvalid(s00_couplers_to_auto_pc_RVALID),
        .s_axi_wdata(s00_couplers_to_auto_pc_WDATA),
        .s_axi_wid(s00_couplers_to_auto_pc_WID),
        .s_axi_wlast(s00_couplers_to_auto_pc_WLAST),
        .s_axi_wready(s00_couplers_to_auto_pc_WREADY),
        .s_axi_wstrb(s00_couplers_to_auto_pc_WSTRB),
        .s_axi_wvalid(s00_couplers_to_auto_pc_WVALID));
endmodule

(* CORE_GENERATION_INFO = "system,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=system,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=31,numReposBlks=22,numNonXlnxBlks=4,numHierBlks=9,maxHierDepth=0,synth_mode=Global}" *) (* HW_HANDOFF = "system.hwdef" *) 
module system
   (DDR_addr,
    DDR_ba,
    DDR_cas_n,
    DDR_ck_n,
    DDR_ck_p,
    DDR_cke,
    DDR_cs_n,
    DDR_dm,
    DDR_dq,
    DDR_dqs_n,
    DDR_dqs_p,
    DDR_odt,
    DDR_ras_n,
    DDR_reset_n,
    DDR_we_n,
    FIXED_IO_ddr_vrn,
    FIXED_IO_ddr_vrp,
    FIXED_IO_mio,
    FIXED_IO_ps_clk,
    FIXED_IO_ps_porb,
    FIXED_IO_ps_srstb,
    btnc,
    config_finished,
    ov7670_data,
    ov7670_href,
    ov7670_pclk,
    ov7670_pwdn,
    ov7670_reset,
    ov7670_sioc,
    ov7670_siod,
    ov7670_vsync,
    ov7670_xclk,
    vga_b,
    vga_g,
    vga_hsync,
    vga_r,
    vga_vsync);
  inout [14:0]DDR_addr;
  inout [2:0]DDR_ba;
  inout DDR_cas_n;
  inout DDR_ck_n;
  inout DDR_ck_p;
  inout DDR_cke;
  inout DDR_cs_n;
  inout [3:0]DDR_dm;
  inout [31:0]DDR_dq;
  inout [3:0]DDR_dqs_n;
  inout [3:0]DDR_dqs_p;
  inout DDR_odt;
  inout DDR_ras_n;
  inout DDR_reset_n;
  inout DDR_we_n;
  inout FIXED_IO_ddr_vrn;
  inout FIXED_IO_ddr_vrp;
  inout [53:0]FIXED_IO_mio;
  inout FIXED_IO_ps_clk;
  inout FIXED_IO_ps_porb;
  inout FIXED_IO_ps_srstb;
  input btnc;
  output config_finished;
  input [7:0]ov7670_data;
  input ov7670_href;
  input ov7670_pclk;
  output [0:0]ov7670_pwdn;
  output [0:0]ov7670_reset;
  output ov7670_sioc;
  inout ov7670_siod;
  input ov7670_vsync;
  output ov7670_xclk;
  output [3:0]vga_b;
  output [3:0]vga_g;
  output vga_hsync;
  output [3:0]vga_r;
  output vga_vsync;

  wire [0:0]M01_ARESETN_1;
  wire Net;
  wire [31:0]axi_mem_intercon_M00_AXI1_ARADDR;
  wire [1:0]axi_mem_intercon_M00_AXI1_ARBURST;
  wire [3:0]axi_mem_intercon_M00_AXI1_ARCACHE;
  wire [3:0]axi_mem_intercon_M00_AXI1_ARLEN;
  wire [1:0]axi_mem_intercon_M00_AXI1_ARLOCK;
  wire [2:0]axi_mem_intercon_M00_AXI1_ARPROT;
  wire [3:0]axi_mem_intercon_M00_AXI1_ARQOS;
  wire axi_mem_intercon_M00_AXI1_ARREADY;
  wire [2:0]axi_mem_intercon_M00_AXI1_ARSIZE;
  wire axi_mem_intercon_M00_AXI1_ARVALID;
  wire [63:0]axi_mem_intercon_M00_AXI1_RDATA;
  wire axi_mem_intercon_M00_AXI1_RLAST;
  wire axi_mem_intercon_M00_AXI1_RREADY;
  wire [1:0]axi_mem_intercon_M00_AXI1_RRESP;
  wire axi_mem_intercon_M00_AXI1_RVALID;
  wire [31:0]axi_mem_intercon_M00_AXI_AWADDR;
  wire [1:0]axi_mem_intercon_M00_AXI_AWBURST;
  wire [3:0]axi_mem_intercon_M00_AXI_AWCACHE;
  wire [3:0]axi_mem_intercon_M00_AXI_AWLEN;
  wire [1:0]axi_mem_intercon_M00_AXI_AWLOCK;
  wire [2:0]axi_mem_intercon_M00_AXI_AWPROT;
  wire [3:0]axi_mem_intercon_M00_AXI_AWQOS;
  wire axi_mem_intercon_M00_AXI_AWREADY;
  wire [2:0]axi_mem_intercon_M00_AXI_AWSIZE;
  wire axi_mem_intercon_M00_AXI_AWVALID;
  wire axi_mem_intercon_M00_AXI_BREADY;
  wire [1:0]axi_mem_intercon_M00_AXI_BRESP;
  wire axi_mem_intercon_M00_AXI_BVALID;
  wire [63:0]axi_mem_intercon_M00_AXI_WDATA;
  wire axi_mem_intercon_M00_AXI_WLAST;
  wire axi_mem_intercon_M00_AXI_WREADY;
  wire [7:0]axi_mem_intercon_M00_AXI_WSTRB;
  wire axi_mem_intercon_M00_AXI_WVALID;
  wire [31:0]axi_vdma_0_M_AXI_S2MM_AWADDR;
  wire [1:0]axi_vdma_0_M_AXI_S2MM_AWBURST;
  wire [3:0]axi_vdma_0_M_AXI_S2MM_AWCACHE;
  wire [7:0]axi_vdma_0_M_AXI_S2MM_AWLEN;
  wire [2:0]axi_vdma_0_M_AXI_S2MM_AWPROT;
  wire axi_vdma_0_M_AXI_S2MM_AWREADY;
  wire [2:0]axi_vdma_0_M_AXI_S2MM_AWSIZE;
  wire axi_vdma_0_M_AXI_S2MM_AWVALID;
  wire axi_vdma_0_M_AXI_S2MM_BREADY;
  wire [1:0]axi_vdma_0_M_AXI_S2MM_BRESP;
  wire axi_vdma_0_M_AXI_S2MM_BVALID;
  wire [31:0]axi_vdma_0_M_AXI_S2MM_WDATA;
  wire axi_vdma_0_M_AXI_S2MM_WLAST;
  wire axi_vdma_0_M_AXI_S2MM_WREADY;
  wire [3:0]axi_vdma_0_M_AXI_S2MM_WSTRB;
  wire axi_vdma_0_M_AXI_S2MM_WVALID;
  wire [15:0]axi_vdma_1_M_AXIS_MM2S_TDATA;
  wire axi_vdma_1_M_AXIS_MM2S_TLAST;
  wire axi_vdma_1_M_AXIS_MM2S_TREADY;
  wire [0:0]axi_vdma_1_M_AXIS_MM2S_TUSER;
  wire axi_vdma_1_M_AXIS_MM2S_TVALID;
  wire [31:0]axi_vdma_1_M_AXI_MM2S_ARADDR;
  wire [1:0]axi_vdma_1_M_AXI_MM2S_ARBURST;
  wire [3:0]axi_vdma_1_M_AXI_MM2S_ARCACHE;
  wire [7:0]axi_vdma_1_M_AXI_MM2S_ARLEN;
  wire [2:0]axi_vdma_1_M_AXI_MM2S_ARPROT;
  wire axi_vdma_1_M_AXI_MM2S_ARREADY;
  wire [2:0]axi_vdma_1_M_AXI_MM2S_ARSIZE;
  wire axi_vdma_1_M_AXI_MM2S_ARVALID;
  wire [63:0]axi_vdma_1_M_AXI_MM2S_RDATA;
  wire axi_vdma_1_M_AXI_MM2S_RLAST;
  wire axi_vdma_1_M_AXI_MM2S_RREADY;
  wire [1:0]axi_vdma_1_M_AXI_MM2S_RRESP;
  wire axi_vdma_1_M_AXI_MM2S_RVALID;
  wire [7:0]d_1;
  wire [15:0]fifo_generator_0_M_AXIS_TDATA;
  wire fifo_generator_0_M_AXIS_TLAST;
  wire fifo_generator_0_M_AXIS_TREADY;
  wire [0:0]fifo_generator_0_M_AXIS_TUSER;
  wire fifo_generator_0_M_AXIS_TVALID;
  wire [15:0]fifo_mm2s_M_AXIS_TDATA;
  wire fifo_mm2s_M_AXIS_TREADY;
  wire fifo_mm2s_M_AXIS_TVALID;
  wire href_1;
  wire i_1;
  wire microblaze_0_Clk;
  wire [31:0]microblaze_0_axi_periph_M00_AXI_ARADDR;
  wire microblaze_0_axi_periph_M00_AXI_ARREADY;
  wire microblaze_0_axi_periph_M00_AXI_ARVALID;
  wire [31:0]microblaze_0_axi_periph_M00_AXI_AWADDR;
  wire microblaze_0_axi_periph_M00_AXI_AWREADY;
  wire microblaze_0_axi_periph_M00_AXI_AWVALID;
  wire microblaze_0_axi_periph_M00_AXI_BREADY;
  wire [1:0]microblaze_0_axi_periph_M00_AXI_BRESP;
  wire microblaze_0_axi_periph_M00_AXI_BVALID;
  wire [31:0]microblaze_0_axi_periph_M00_AXI_RDATA;
  wire microblaze_0_axi_periph_M00_AXI_RREADY;
  wire [1:0]microblaze_0_axi_periph_M00_AXI_RRESP;
  wire microblaze_0_axi_periph_M00_AXI_RVALID;
  wire [31:0]microblaze_0_axi_periph_M00_AXI_WDATA;
  wire microblaze_0_axi_periph_M00_AXI_WREADY;
  wire microblaze_0_axi_periph_M00_AXI_WVALID;
  wire [31:0]microblaze_0_axi_periph_M01_AXI_ARADDR;
  wire [2:0]microblaze_0_axi_periph_M01_AXI_ARPROT;
  wire microblaze_0_axi_periph_M01_AXI_ARREADY;
  wire microblaze_0_axi_periph_M01_AXI_ARVALID;
  wire [31:0]microblaze_0_axi_periph_M01_AXI_AWADDR;
  wire [2:0]microblaze_0_axi_periph_M01_AXI_AWPROT;
  wire microblaze_0_axi_periph_M01_AXI_AWREADY;
  wire microblaze_0_axi_periph_M01_AXI_AWVALID;
  wire microblaze_0_axi_periph_M01_AXI_BREADY;
  wire [1:0]microblaze_0_axi_periph_M01_AXI_BRESP;
  wire microblaze_0_axi_periph_M01_AXI_BVALID;
  wire [31:0]microblaze_0_axi_periph_M01_AXI_RDATA;
  wire microblaze_0_axi_periph_M01_AXI_RREADY;
  wire [1:0]microblaze_0_axi_periph_M01_AXI_RRESP;
  wire microblaze_0_axi_periph_M01_AXI_RVALID;
  wire [31:0]microblaze_0_axi_periph_M01_AXI_WDATA;
  wire microblaze_0_axi_periph_M01_AXI_WREADY;
  wire [3:0]microblaze_0_axi_periph_M01_AXI_WSTRB;
  wire microblaze_0_axi_periph_M01_AXI_WVALID;
  wire [31:0]microblaze_0_axi_periph_M02_AXI_ARADDR;
  wire microblaze_0_axi_periph_M02_AXI_ARREADY;
  wire microblaze_0_axi_periph_M02_AXI_ARVALID;
  wire [31:0]microblaze_0_axi_periph_M02_AXI_AWADDR;
  wire microblaze_0_axi_periph_M02_AXI_AWREADY;
  wire microblaze_0_axi_periph_M02_AXI_AWVALID;
  wire microblaze_0_axi_periph_M02_AXI_BREADY;
  wire [1:0]microblaze_0_axi_periph_M02_AXI_BRESP;
  wire microblaze_0_axi_periph_M02_AXI_BVALID;
  wire [31:0]microblaze_0_axi_periph_M02_AXI_RDATA;
  wire microblaze_0_axi_periph_M02_AXI_RREADY;
  wire [1:0]microblaze_0_axi_periph_M02_AXI_RRESP;
  wire microblaze_0_axi_periph_M02_AXI_RVALID;
  wire [31:0]microblaze_0_axi_periph_M02_AXI_WDATA;
  wire microblaze_0_axi_periph_M02_AXI_WREADY;
  wire microblaze_0_axi_periph_M02_AXI_WVALID;
  wire ov7670_controller_0_config_finished;
  wire ov7670_controller_0_sioc;
  wire ov7670_controller_0_xclk;
  wire ov7670_debounce_0_o;
  wire [15:0]ov7670_decode_stream_0_axis_out_TDATA;
  wire ov7670_decode_stream_0_axis_out_TLAST;
  wire ov7670_decode_stream_0_axis_out_TREADY;
  wire ov7670_decode_stream_0_axis_out_TUSER;
  wire ov7670_decode_stream_0_axis_out_TVALID;
  wire pclk_1;
  wire [14:0]processing_system7_0_DDR_ADDR;
  wire [2:0]processing_system7_0_DDR_BA;
  wire processing_system7_0_DDR_CAS_N;
  wire processing_system7_0_DDR_CKE;
  wire processing_system7_0_DDR_CK_N;
  wire processing_system7_0_DDR_CK_P;
  wire processing_system7_0_DDR_CS_N;
  wire [3:0]processing_system7_0_DDR_DM;
  wire [31:0]processing_system7_0_DDR_DQ;
  wire [3:0]processing_system7_0_DDR_DQS_N;
  wire [3:0]processing_system7_0_DDR_DQS_P;
  wire processing_system7_0_DDR_ODT;
  wire processing_system7_0_DDR_RAS_N;
  wire processing_system7_0_DDR_RESET_N;
  wire processing_system7_0_DDR_WE_N;
  wire processing_system7_0_FCLK_CLK1;
  wire processing_system7_0_FCLK_CLK2;
  wire processing_system7_0_FCLK_RESET0_N;
  wire processing_system7_0_FIXED_IO_DDR_VRN;
  wire processing_system7_0_FIXED_IO_DDR_VRP;
  wire [53:0]processing_system7_0_FIXED_IO_MIO;
  wire processing_system7_0_FIXED_IO_PS_CLK;
  wire processing_system7_0_FIXED_IO_PS_PORB;
  wire processing_system7_0_FIXED_IO_PS_SRSTB;
  wire [31:0]processing_system7_0_M_AXI_GP0_ARADDR;
  wire [1:0]processing_system7_0_M_AXI_GP0_ARBURST;
  wire [3:0]processing_system7_0_M_AXI_GP0_ARCACHE;
  wire [11:0]processing_system7_0_M_AXI_GP0_ARID;
  wire [3:0]processing_system7_0_M_AXI_GP0_ARLEN;
  wire [1:0]processing_system7_0_M_AXI_GP0_ARLOCK;
  wire [2:0]processing_system7_0_M_AXI_GP0_ARPROT;
  wire [3:0]processing_system7_0_M_AXI_GP0_ARQOS;
  wire processing_system7_0_M_AXI_GP0_ARREADY;
  wire [2:0]processing_system7_0_M_AXI_GP0_ARSIZE;
  wire processing_system7_0_M_AXI_GP0_ARVALID;
  wire [31:0]processing_system7_0_M_AXI_GP0_AWADDR;
  wire [1:0]processing_system7_0_M_AXI_GP0_AWBURST;
  wire [3:0]processing_system7_0_M_AXI_GP0_AWCACHE;
  wire [11:0]processing_system7_0_M_AXI_GP0_AWID;
  wire [3:0]processing_system7_0_M_AXI_GP0_AWLEN;
  wire [1:0]processing_system7_0_M_AXI_GP0_AWLOCK;
  wire [2:0]processing_system7_0_M_AXI_GP0_AWPROT;
  wire [3:0]processing_system7_0_M_AXI_GP0_AWQOS;
  wire processing_system7_0_M_AXI_GP0_AWREADY;
  wire [2:0]processing_system7_0_M_AXI_GP0_AWSIZE;
  wire processing_system7_0_M_AXI_GP0_AWVALID;
  wire [11:0]processing_system7_0_M_AXI_GP0_BID;
  wire processing_system7_0_M_AXI_GP0_BREADY;
  wire [1:0]processing_system7_0_M_AXI_GP0_BRESP;
  wire processing_system7_0_M_AXI_GP0_BVALID;
  wire [31:0]processing_system7_0_M_AXI_GP0_RDATA;
  wire [11:0]processing_system7_0_M_AXI_GP0_RID;
  wire processing_system7_0_M_AXI_GP0_RLAST;
  wire processing_system7_0_M_AXI_GP0_RREADY;
  wire [1:0]processing_system7_0_M_AXI_GP0_RRESP;
  wire processing_system7_0_M_AXI_GP0_RVALID;
  wire [31:0]processing_system7_0_M_AXI_GP0_WDATA;
  wire [11:0]processing_system7_0_M_AXI_GP0_WID;
  wire processing_system7_0_M_AXI_GP0_WLAST;
  wire processing_system7_0_M_AXI_GP0_WREADY;
  wire [3:0]processing_system7_0_M_AXI_GP0_WSTRB;
  wire processing_system7_0_M_AXI_GP0_WVALID;
  wire [0:0]pwdn_dout;
  wire [0:0]reset_dout;
  wire [0:0]rst_ov7670_pclk1_peripheral_aresetn;
  wire [0:0]rst_processing_system7_0_100M_interconnect_aresetn;
  wire [0:0]rst_processing_system7_0_100M_peripheral_aresetn;
  wire [3:0]stream_to_vga_0_blue;
  wire stream_to_vga_0_fsync;
  wire [3:0]stream_to_vga_0_green;
  wire stream_to_vga_0_hsync;
  wire [3:0]stream_to_vga_0_red;
  wire stream_to_vga_0_vsync;
  wire vdma_mm2s_mm2s_introut;
  wire vdma_s2mm_s2mm_introut;
  wire vsync_1;
  wire [1:0]xlconcat_0_dout;

  assign config_finished = ov7670_controller_0_config_finished;
  assign d_1 = ov7670_data[7:0];
  assign href_1 = ov7670_href;
  assign i_1 = btnc;
  assign ov7670_pwdn[0] = pwdn_dout;
  assign ov7670_reset[0] = reset_dout;
  assign ov7670_sioc = ov7670_controller_0_sioc;
  assign ov7670_xclk = ov7670_controller_0_xclk;
  assign pclk_1 = ov7670_pclk;
  assign vga_b[3:0] = stream_to_vga_0_blue;
  assign vga_g[3:0] = stream_to_vga_0_green;
  assign vga_hsync = stream_to_vga_0_hsync;
  assign vga_r[3:0] = stream_to_vga_0_red;
  assign vga_vsync = stream_to_vga_0_vsync;
  assign vsync_1 = ov7670_vsync;
  system_axi_periph_0 axi_periph
       (.ACLK(microblaze_0_Clk),
        .ARESETN(rst_processing_system7_0_100M_interconnect_aresetn),
        .M00_ACLK(microblaze_0_Clk),
        .M00_ARESETN(rst_processing_system7_0_100M_peripheral_aresetn),
        .M00_AXI_araddr(microblaze_0_axi_periph_M00_AXI_ARADDR),
        .M00_AXI_arready(microblaze_0_axi_periph_M00_AXI_ARREADY),
        .M00_AXI_arvalid(microblaze_0_axi_periph_M00_AXI_ARVALID),
        .M00_AXI_awaddr(microblaze_0_axi_periph_M00_AXI_AWADDR),
        .M00_AXI_awready(microblaze_0_axi_periph_M00_AXI_AWREADY),
        .M00_AXI_awvalid(microblaze_0_axi_periph_M00_AXI_AWVALID),
        .M00_AXI_bready(microblaze_0_axi_periph_M00_AXI_BREADY),
        .M00_AXI_bresp(microblaze_0_axi_periph_M00_AXI_BRESP),
        .M00_AXI_bvalid(microblaze_0_axi_periph_M00_AXI_BVALID),
        .M00_AXI_rdata(microblaze_0_axi_periph_M00_AXI_RDATA),
        .M00_AXI_rready(microblaze_0_axi_periph_M00_AXI_RREADY),
        .M00_AXI_rresp(microblaze_0_axi_periph_M00_AXI_RRESP),
        .M00_AXI_rvalid(microblaze_0_axi_periph_M00_AXI_RVALID),
        .M00_AXI_wdata(microblaze_0_axi_periph_M00_AXI_WDATA),
        .M00_AXI_wready(microblaze_0_axi_periph_M00_AXI_WREADY),
        .M00_AXI_wvalid(microblaze_0_axi_periph_M00_AXI_WVALID),
        .M01_ACLK(pclk_1),
        .M01_ARESETN(M01_ARESETN_1),
        .M01_AXI_araddr(microblaze_0_axi_periph_M01_AXI_ARADDR),
        .M01_AXI_arprot(microblaze_0_axi_periph_M01_AXI_ARPROT),
        .M01_AXI_arready(microblaze_0_axi_periph_M01_AXI_ARREADY),
        .M01_AXI_arvalid(microblaze_0_axi_periph_M01_AXI_ARVALID),
        .M01_AXI_awaddr(microblaze_0_axi_periph_M01_AXI_AWADDR),
        .M01_AXI_awprot(microblaze_0_axi_periph_M01_AXI_AWPROT),
        .M01_AXI_awready(microblaze_0_axi_periph_M01_AXI_AWREADY),
        .M01_AXI_awvalid(microblaze_0_axi_periph_M01_AXI_AWVALID),
        .M01_AXI_bready(microblaze_0_axi_periph_M01_AXI_BREADY),
        .M01_AXI_bresp(microblaze_0_axi_periph_M01_AXI_BRESP),
        .M01_AXI_bvalid(microblaze_0_axi_periph_M01_AXI_BVALID),
        .M01_AXI_rdata(microblaze_0_axi_periph_M01_AXI_RDATA),
        .M01_AXI_rready(microblaze_0_axi_periph_M01_AXI_RREADY),
        .M01_AXI_rresp(microblaze_0_axi_periph_M01_AXI_RRESP),
        .M01_AXI_rvalid(microblaze_0_axi_periph_M01_AXI_RVALID),
        .M01_AXI_wdata(microblaze_0_axi_periph_M01_AXI_WDATA),
        .M01_AXI_wready(microblaze_0_axi_periph_M01_AXI_WREADY),
        .M01_AXI_wstrb(microblaze_0_axi_periph_M01_AXI_WSTRB),
        .M01_AXI_wvalid(microblaze_0_axi_periph_M01_AXI_WVALID),
        .M02_ACLK(microblaze_0_Clk),
        .M02_ARESETN(rst_processing_system7_0_100M_peripheral_aresetn),
        .M02_AXI_araddr(microblaze_0_axi_periph_M02_AXI_ARADDR),
        .M02_AXI_arready(microblaze_0_axi_periph_M02_AXI_ARREADY),
        .M02_AXI_arvalid(microblaze_0_axi_periph_M02_AXI_ARVALID),
        .M02_AXI_awaddr(microblaze_0_axi_periph_M02_AXI_AWADDR),
        .M02_AXI_awready(microblaze_0_axi_periph_M02_AXI_AWREADY),
        .M02_AXI_awvalid(microblaze_0_axi_periph_M02_AXI_AWVALID),
        .M02_AXI_bready(microblaze_0_axi_periph_M02_AXI_BREADY),
        .M02_AXI_bresp(microblaze_0_axi_periph_M02_AXI_BRESP),
        .M02_AXI_bvalid(microblaze_0_axi_periph_M02_AXI_BVALID),
        .M02_AXI_rdata(microblaze_0_axi_periph_M02_AXI_RDATA),
        .M02_AXI_rready(microblaze_0_axi_periph_M02_AXI_RREADY),
        .M02_AXI_rresp(microblaze_0_axi_periph_M02_AXI_RRESP),
        .M02_AXI_rvalid(microblaze_0_axi_periph_M02_AXI_RVALID),
        .M02_AXI_wdata(microblaze_0_axi_periph_M02_AXI_WDATA),
        .M02_AXI_wready(microblaze_0_axi_periph_M02_AXI_WREADY),
        .M02_AXI_wvalid(microblaze_0_axi_periph_M02_AXI_WVALID),
        .S00_ACLK(microblaze_0_Clk),
        .S00_ARESETN(rst_processing_system7_0_100M_peripheral_aresetn),
        .S00_AXI_araddr(processing_system7_0_M_AXI_GP0_ARADDR),
        .S00_AXI_arburst(processing_system7_0_M_AXI_GP0_ARBURST),
        .S00_AXI_arcache(processing_system7_0_M_AXI_GP0_ARCACHE),
        .S00_AXI_arid(processing_system7_0_M_AXI_GP0_ARID),
        .S00_AXI_arlen(processing_system7_0_M_AXI_GP0_ARLEN),
        .S00_AXI_arlock(processing_system7_0_M_AXI_GP0_ARLOCK),
        .S00_AXI_arprot(processing_system7_0_M_AXI_GP0_ARPROT),
        .S00_AXI_arqos(processing_system7_0_M_AXI_GP0_ARQOS),
        .S00_AXI_arready(processing_system7_0_M_AXI_GP0_ARREADY),
        .S00_AXI_arsize(processing_system7_0_M_AXI_GP0_ARSIZE),
        .S00_AXI_arvalid(processing_system7_0_M_AXI_GP0_ARVALID),
        .S00_AXI_awaddr(processing_system7_0_M_AXI_GP0_AWADDR),
        .S00_AXI_awburst(processing_system7_0_M_AXI_GP0_AWBURST),
        .S00_AXI_awcache(processing_system7_0_M_AXI_GP0_AWCACHE),
        .S00_AXI_awid(processing_system7_0_M_AXI_GP0_AWID),
        .S00_AXI_awlen(processing_system7_0_M_AXI_GP0_AWLEN),
        .S00_AXI_awlock(processing_system7_0_M_AXI_GP0_AWLOCK),
        .S00_AXI_awprot(processing_system7_0_M_AXI_GP0_AWPROT),
        .S00_AXI_awqos(processing_system7_0_M_AXI_GP0_AWQOS),
        .S00_AXI_awready(processing_system7_0_M_AXI_GP0_AWREADY),
        .S00_AXI_awsize(processing_system7_0_M_AXI_GP0_AWSIZE),
        .S00_AXI_awvalid(processing_system7_0_M_AXI_GP0_AWVALID),
        .S00_AXI_bid(processing_system7_0_M_AXI_GP0_BID),
        .S00_AXI_bready(processing_system7_0_M_AXI_GP0_BREADY),
        .S00_AXI_bresp(processing_system7_0_M_AXI_GP0_BRESP),
        .S00_AXI_bvalid(processing_system7_0_M_AXI_GP0_BVALID),
        .S00_AXI_rdata(processing_system7_0_M_AXI_GP0_RDATA),
        .S00_AXI_rid(processing_system7_0_M_AXI_GP0_RID),
        .S00_AXI_rlast(processing_system7_0_M_AXI_GP0_RLAST),
        .S00_AXI_rready(processing_system7_0_M_AXI_GP0_RREADY),
        .S00_AXI_rresp(processing_system7_0_M_AXI_GP0_RRESP),
        .S00_AXI_rvalid(processing_system7_0_M_AXI_GP0_RVALID),
        .S00_AXI_wdata(processing_system7_0_M_AXI_GP0_WDATA),
        .S00_AXI_wid(processing_system7_0_M_AXI_GP0_WID),
        .S00_AXI_wlast(processing_system7_0_M_AXI_GP0_WLAST),
        .S00_AXI_wready(processing_system7_0_M_AXI_GP0_WREADY),
        .S00_AXI_wstrb(processing_system7_0_M_AXI_GP0_WSTRB),
        .S00_AXI_wvalid(processing_system7_0_M_AXI_GP0_WVALID));
  system_fifo_mm2s_0 fifo_mm2s
       (.m_aclk(processing_system7_0_FCLK_CLK2),
        .m_axis_tdata(fifo_mm2s_M_AXIS_TDATA),
        .m_axis_tready(fifo_mm2s_M_AXIS_TREADY),
        .m_axis_tvalid(fifo_mm2s_M_AXIS_TVALID),
        .s_aclk(microblaze_0_Clk),
        .s_aresetn(rst_processing_system7_0_100M_peripheral_aresetn),
        .s_axis_tdata(axi_vdma_1_M_AXIS_MM2S_TDATA),
        .s_axis_tlast(axi_vdma_1_M_AXIS_MM2S_TLAST),
        .s_axis_tready(axi_vdma_1_M_AXIS_MM2S_TREADY),
        .s_axis_tuser(axi_vdma_1_M_AXIS_MM2S_TUSER),
        .s_axis_tvalid(axi_vdma_1_M_AXIS_MM2S_TVALID));
  system_fifo_s2mm_0 fifo_s2mm
       (.m_aclk(microblaze_0_Clk),
        .m_axis_tdata(fifo_generator_0_M_AXIS_TDATA),
        .m_axis_tlast(fifo_generator_0_M_AXIS_TLAST),
        .m_axis_tready(fifo_generator_0_M_AXIS_TREADY),
        .m_axis_tuser(fifo_generator_0_M_AXIS_TUSER),
        .m_axis_tvalid(fifo_generator_0_M_AXIS_TVALID),
        .s_aclk(pclk_1),
        .s_aresetn(M01_ARESETN_1),
        .s_axis_tdata(ov7670_decode_stream_0_axis_out_TDATA),
        .s_axis_tlast(ov7670_decode_stream_0_axis_out_TLAST),
        .s_axis_tready(ov7670_decode_stream_0_axis_out_TREADY),
        .s_axis_tuser(ov7670_decode_stream_0_axis_out_TUSER),
        .s_axis_tvalid(ov7670_decode_stream_0_axis_out_TVALID));
  system_ila_0_1 ila_0
       (.clk(microblaze_0_Clk),
        .probe0(axi_vdma_1_M_AXIS_MM2S_TREADY),
        .probe1(axi_vdma_1_M_AXIS_MM2S_TDATA),
        .probe2({1'b0,1'b0}),
        .probe3(axi_vdma_1_M_AXIS_MM2S_TVALID),
        .probe4(axi_vdma_1_M_AXIS_MM2S_TLAST),
        .probe5(axi_vdma_1_M_AXIS_MM2S_TUSER),
        .probe6({1'b0,1'b0}),
        .probe7(1'b0),
        .probe8(1'b0));
  system_ov7670_controller_0_0 ov7670_controller_0
       (.clk(processing_system7_0_FCLK_CLK1),
        .config_finished(ov7670_controller_0_config_finished),
        .resend(ov7670_debounce_0_o),
        .sioc(ov7670_controller_0_sioc),
        .siod(ov7670_siod),
        .xclk(ov7670_controller_0_xclk));
  system_ov7670_debounce_0_0 ov7670_debounce_0
       (.clk(processing_system7_0_FCLK_CLK1),
        .i(i_1),
        .o(ov7670_debounce_0_o));
  system_ov7670_decode_stream_0_0 ov7670_decode_stream_0
       (.d(d_1),
        .href(href_1),
        .pclk(pclk_1),
        .s00_axi_aclk(pclk_1),
        .s00_axi_araddr(microblaze_0_axi_periph_M01_AXI_ARADDR[3:0]),
        .s00_axi_aresetn(M01_ARESETN_1),
        .s00_axi_arprot(microblaze_0_axi_periph_M01_AXI_ARPROT),
        .s00_axi_arready(microblaze_0_axi_periph_M01_AXI_ARREADY),
        .s00_axi_arvalid(microblaze_0_axi_periph_M01_AXI_ARVALID),
        .s00_axi_awaddr(microblaze_0_axi_periph_M01_AXI_AWADDR[3:0]),
        .s00_axi_awprot(microblaze_0_axi_periph_M01_AXI_AWPROT),
        .s00_axi_awready(microblaze_0_axi_periph_M01_AXI_AWREADY),
        .s00_axi_awvalid(microblaze_0_axi_periph_M01_AXI_AWVALID),
        .s00_axi_bready(microblaze_0_axi_periph_M01_AXI_BREADY),
        .s00_axi_bresp(microblaze_0_axi_periph_M01_AXI_BRESP),
        .s00_axi_bvalid(microblaze_0_axi_periph_M01_AXI_BVALID),
        .s00_axi_rdata(microblaze_0_axi_periph_M01_AXI_RDATA),
        .s00_axi_rready(microblaze_0_axi_periph_M01_AXI_RREADY),
        .s00_axi_rresp(microblaze_0_axi_periph_M01_AXI_RRESP),
        .s00_axi_rvalid(microblaze_0_axi_periph_M01_AXI_RVALID),
        .s00_axi_wdata(microblaze_0_axi_periph_M01_AXI_WDATA),
        .s00_axi_wready(microblaze_0_axi_periph_M01_AXI_WREADY),
        .s00_axi_wstrb(microblaze_0_axi_periph_M01_AXI_WSTRB),
        .s00_axi_wvalid(microblaze_0_axi_periph_M01_AXI_WVALID),
        .tdata(ov7670_decode_stream_0_axis_out_TDATA),
        .tlast(ov7670_decode_stream_0_axis_out_TLAST),
        .tready(ov7670_decode_stream_0_axis_out_TREADY),
        .tuser(ov7670_decode_stream_0_axis_out_TUSER),
        .tvalid(ov7670_decode_stream_0_axis_out_TVALID),
        .vsync(vsync_1));
  system_processing_system7_0_0 processing_system7_0
       (.DDR_Addr(DDR_addr[14:0]),
        .DDR_BankAddr(DDR_ba[2:0]),
        .DDR_CAS_n(DDR_cas_n),
        .DDR_CKE(DDR_cke),
        .DDR_CS_n(DDR_cs_n),
        .DDR_Clk(DDR_ck_p),
        .DDR_Clk_n(DDR_ck_n),
        .DDR_DM(DDR_dm[3:0]),
        .DDR_DQ(DDR_dq[31:0]),
        .DDR_DQS(DDR_dqs_p[3:0]),
        .DDR_DQS_n(DDR_dqs_n[3:0]),
        .DDR_DRSTB(DDR_reset_n),
        .DDR_ODT(DDR_odt),
        .DDR_RAS_n(DDR_ras_n),
        .DDR_VRN(FIXED_IO_ddr_vrn),
        .DDR_VRP(FIXED_IO_ddr_vrp),
        .DDR_WEB(DDR_we_n),
        .FCLK_CLK0(microblaze_0_Clk),
        .FCLK_CLK1(processing_system7_0_FCLK_CLK1),
        .FCLK_CLK2(processing_system7_0_FCLK_CLK2),
        .FCLK_RESET0_N(processing_system7_0_FCLK_RESET0_N),
        .IRQ_F2P(xlconcat_0_dout),
        .MIO(FIXED_IO_mio[53:0]),
        .M_AXI_GP0_ACLK(microblaze_0_Clk),
        .M_AXI_GP0_ARADDR(processing_system7_0_M_AXI_GP0_ARADDR),
        .M_AXI_GP0_ARBURST(processing_system7_0_M_AXI_GP0_ARBURST),
        .M_AXI_GP0_ARCACHE(processing_system7_0_M_AXI_GP0_ARCACHE),
        .M_AXI_GP0_ARID(processing_system7_0_M_AXI_GP0_ARID),
        .M_AXI_GP0_ARLEN(processing_system7_0_M_AXI_GP0_ARLEN),
        .M_AXI_GP0_ARLOCK(processing_system7_0_M_AXI_GP0_ARLOCK),
        .M_AXI_GP0_ARPROT(processing_system7_0_M_AXI_GP0_ARPROT),
        .M_AXI_GP0_ARQOS(processing_system7_0_M_AXI_GP0_ARQOS),
        .M_AXI_GP0_ARREADY(processing_system7_0_M_AXI_GP0_ARREADY),
        .M_AXI_GP0_ARSIZE(processing_system7_0_M_AXI_GP0_ARSIZE),
        .M_AXI_GP0_ARVALID(processing_system7_0_M_AXI_GP0_ARVALID),
        .M_AXI_GP0_AWADDR(processing_system7_0_M_AXI_GP0_AWADDR),
        .M_AXI_GP0_AWBURST(processing_system7_0_M_AXI_GP0_AWBURST),
        .M_AXI_GP0_AWCACHE(processing_system7_0_M_AXI_GP0_AWCACHE),
        .M_AXI_GP0_AWID(processing_system7_0_M_AXI_GP0_AWID),
        .M_AXI_GP0_AWLEN(processing_system7_0_M_AXI_GP0_AWLEN),
        .M_AXI_GP0_AWLOCK(processing_system7_0_M_AXI_GP0_AWLOCK),
        .M_AXI_GP0_AWPROT(processing_system7_0_M_AXI_GP0_AWPROT),
        .M_AXI_GP0_AWQOS(processing_system7_0_M_AXI_GP0_AWQOS),
        .M_AXI_GP0_AWREADY(processing_system7_0_M_AXI_GP0_AWREADY),
        .M_AXI_GP0_AWSIZE(processing_system7_0_M_AXI_GP0_AWSIZE),
        .M_AXI_GP0_AWVALID(processing_system7_0_M_AXI_GP0_AWVALID),
        .M_AXI_GP0_BID(processing_system7_0_M_AXI_GP0_BID),
        .M_AXI_GP0_BREADY(processing_system7_0_M_AXI_GP0_BREADY),
        .M_AXI_GP0_BRESP(processing_system7_0_M_AXI_GP0_BRESP),
        .M_AXI_GP0_BVALID(processing_system7_0_M_AXI_GP0_BVALID),
        .M_AXI_GP0_RDATA(processing_system7_0_M_AXI_GP0_RDATA),
        .M_AXI_GP0_RID(processing_system7_0_M_AXI_GP0_RID),
        .M_AXI_GP0_RLAST(processing_system7_0_M_AXI_GP0_RLAST),
        .M_AXI_GP0_RREADY(processing_system7_0_M_AXI_GP0_RREADY),
        .M_AXI_GP0_RRESP(processing_system7_0_M_AXI_GP0_RRESP),
        .M_AXI_GP0_RVALID(processing_system7_0_M_AXI_GP0_RVALID),
        .M_AXI_GP0_WDATA(processing_system7_0_M_AXI_GP0_WDATA),
        .M_AXI_GP0_WID(processing_system7_0_M_AXI_GP0_WID),
        .M_AXI_GP0_WLAST(processing_system7_0_M_AXI_GP0_WLAST),
        .M_AXI_GP0_WREADY(processing_system7_0_M_AXI_GP0_WREADY),
        .M_AXI_GP0_WSTRB(processing_system7_0_M_AXI_GP0_WSTRB),
        .M_AXI_GP0_WVALID(processing_system7_0_M_AXI_GP0_WVALID),
        .PS_CLK(FIXED_IO_ps_clk),
        .PS_PORB(FIXED_IO_ps_porb),
        .PS_SRSTB(FIXED_IO_ps_srstb),
        .S_AXI_HP0_ACLK(microblaze_0_Clk),
        .S_AXI_HP0_ARADDR({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP0_ARBURST({1'b0,1'b0}),
        .S_AXI_HP0_ARCACHE({1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP0_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP0_ARLEN({1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP0_ARLOCK({1'b0,1'b0}),
        .S_AXI_HP0_ARPROT({1'b0,1'b0,1'b0}),
        .S_AXI_HP0_ARQOS({1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP0_ARSIZE({1'b0,1'b0,1'b0}),
        .S_AXI_HP0_ARVALID(1'b0),
        .S_AXI_HP0_AWADDR(axi_mem_intercon_M00_AXI_AWADDR),
        .S_AXI_HP0_AWBURST(axi_mem_intercon_M00_AXI_AWBURST),
        .S_AXI_HP0_AWCACHE(axi_mem_intercon_M00_AXI_AWCACHE),
        .S_AXI_HP0_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP0_AWLEN(axi_mem_intercon_M00_AXI_AWLEN),
        .S_AXI_HP0_AWLOCK(axi_mem_intercon_M00_AXI_AWLOCK),
        .S_AXI_HP0_AWPROT(axi_mem_intercon_M00_AXI_AWPROT),
        .S_AXI_HP0_AWQOS(axi_mem_intercon_M00_AXI_AWQOS),
        .S_AXI_HP0_AWREADY(axi_mem_intercon_M00_AXI_AWREADY),
        .S_AXI_HP0_AWSIZE(axi_mem_intercon_M00_AXI_AWSIZE),
        .S_AXI_HP0_AWVALID(axi_mem_intercon_M00_AXI_AWVALID),
        .S_AXI_HP0_BREADY(axi_mem_intercon_M00_AXI_BREADY),
        .S_AXI_HP0_BRESP(axi_mem_intercon_M00_AXI_BRESP),
        .S_AXI_HP0_BVALID(axi_mem_intercon_M00_AXI_BVALID),
        .S_AXI_HP0_RDISSUECAP1_EN(1'b0),
        .S_AXI_HP0_RREADY(1'b0),
        .S_AXI_HP0_WDATA(axi_mem_intercon_M00_AXI_WDATA),
        .S_AXI_HP0_WID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP0_WLAST(axi_mem_intercon_M00_AXI_WLAST),
        .S_AXI_HP0_WREADY(axi_mem_intercon_M00_AXI_WREADY),
        .S_AXI_HP0_WRISSUECAP1_EN(1'b0),
        .S_AXI_HP0_WSTRB(axi_mem_intercon_M00_AXI_WSTRB),
        .S_AXI_HP0_WVALID(axi_mem_intercon_M00_AXI_WVALID),
        .S_AXI_HP1_ACLK(microblaze_0_Clk),
        .S_AXI_HP1_ARADDR(axi_mem_intercon_M00_AXI1_ARADDR),
        .S_AXI_HP1_ARBURST(axi_mem_intercon_M00_AXI1_ARBURST),
        .S_AXI_HP1_ARCACHE(axi_mem_intercon_M00_AXI1_ARCACHE),
        .S_AXI_HP1_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_ARLEN(axi_mem_intercon_M00_AXI1_ARLEN),
        .S_AXI_HP1_ARLOCK(axi_mem_intercon_M00_AXI1_ARLOCK),
        .S_AXI_HP1_ARPROT(axi_mem_intercon_M00_AXI1_ARPROT),
        .S_AXI_HP1_ARQOS(axi_mem_intercon_M00_AXI1_ARQOS),
        .S_AXI_HP1_ARREADY(axi_mem_intercon_M00_AXI1_ARREADY),
        .S_AXI_HP1_ARSIZE(axi_mem_intercon_M00_AXI1_ARSIZE),
        .S_AXI_HP1_ARVALID(axi_mem_intercon_M00_AXI1_ARVALID),
        .S_AXI_HP1_AWADDR({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_AWBURST({1'b0,1'b0}),
        .S_AXI_HP1_AWCACHE({1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_AWLEN({1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_AWLOCK({1'b0,1'b0}),
        .S_AXI_HP1_AWPROT({1'b0,1'b0,1'b0}),
        .S_AXI_HP1_AWQOS({1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_AWSIZE({1'b0,1'b0,1'b0}),
        .S_AXI_HP1_AWVALID(1'b0),
        .S_AXI_HP1_BREADY(1'b0),
        .S_AXI_HP1_RDATA(axi_mem_intercon_M00_AXI1_RDATA),
        .S_AXI_HP1_RDISSUECAP1_EN(1'b0),
        .S_AXI_HP1_RLAST(axi_mem_intercon_M00_AXI1_RLAST),
        .S_AXI_HP1_RREADY(axi_mem_intercon_M00_AXI1_RREADY),
        .S_AXI_HP1_RRESP(axi_mem_intercon_M00_AXI1_RRESP),
        .S_AXI_HP1_RVALID(axi_mem_intercon_M00_AXI1_RVALID),
        .S_AXI_HP1_WDATA({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_WID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_WLAST(1'b0),
        .S_AXI_HP1_WRISSUECAP1_EN(1'b0),
        .S_AXI_HP1_WSTRB({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .S_AXI_HP1_WVALID(1'b0),
        .USB0_VBUS_PWRFAULT(1'b0));
  system_pwdn_0 pwdn
       (.dout(pwdn_dout));
  system_reset_0 reset
       (.dout(reset_dout));
  system_rst_ov7670_pclk_0 rst_ov7670_pclk
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(processing_system7_0_FCLK_RESET0_N),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(M01_ARESETN_1),
        .slowest_sync_clk(pclk_1));
  system_rst_processing_system7_0_100M_0 rst_processing_system7_0_100M
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(processing_system7_0_FCLK_RESET0_N),
        .interconnect_aresetn(rst_processing_system7_0_100M_interconnect_aresetn),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(rst_processing_system7_0_100M_peripheral_aresetn),
        .slowest_sync_clk(microblaze_0_Clk));
  system_rst_vga_clk25_0 rst_vga_clk25
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(processing_system7_0_FCLK_RESET0_N),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(rst_ov7670_pclk1_peripheral_aresetn),
        .slowest_sync_clk(processing_system7_0_FCLK_CLK2));
  system_stream_to_vga_0_0 stream_to_vga_0
       (.aresetn(rst_ov7670_pclk1_peripheral_aresetn),
        .blue(stream_to_vga_0_blue),
        .clk25(processing_system7_0_FCLK_CLK2),
        .fsync(stream_to_vga_0_fsync),
        .green(stream_to_vga_0_green),
        .hsync(stream_to_vga_0_hsync),
        .red(stream_to_vga_0_red),
        .tdata(fifo_mm2s_M_AXIS_TDATA),
        .tready(fifo_mm2s_M_AXIS_TREADY),
        .tvalid(fifo_mm2s_M_AXIS_TVALID),
        .vsync(stream_to_vga_0_vsync));
  system_vdma_mm2s_0 vdma_mm2s
       (.axi_resetn(rst_processing_system7_0_100M_peripheral_aresetn),
        .m_axi_mm2s_aclk(microblaze_0_Clk),
        .m_axi_mm2s_araddr(axi_vdma_1_M_AXI_MM2S_ARADDR),
        .m_axi_mm2s_arburst(axi_vdma_1_M_AXI_MM2S_ARBURST),
        .m_axi_mm2s_arcache(axi_vdma_1_M_AXI_MM2S_ARCACHE),
        .m_axi_mm2s_arlen(axi_vdma_1_M_AXI_MM2S_ARLEN),
        .m_axi_mm2s_arprot(axi_vdma_1_M_AXI_MM2S_ARPROT),
        .m_axi_mm2s_arready(axi_vdma_1_M_AXI_MM2S_ARREADY),
        .m_axi_mm2s_arsize(axi_vdma_1_M_AXI_MM2S_ARSIZE),
        .m_axi_mm2s_arvalid(axi_vdma_1_M_AXI_MM2S_ARVALID),
        .m_axi_mm2s_rdata(axi_vdma_1_M_AXI_MM2S_RDATA),
        .m_axi_mm2s_rlast(axi_vdma_1_M_AXI_MM2S_RLAST),
        .m_axi_mm2s_rready(axi_vdma_1_M_AXI_MM2S_RREADY),
        .m_axi_mm2s_rresp(axi_vdma_1_M_AXI_MM2S_RRESP),
        .m_axi_mm2s_rvalid(axi_vdma_1_M_AXI_MM2S_RVALID),
        .m_axis_mm2s_aclk(microblaze_0_Clk),
        .m_axis_mm2s_tdata(axi_vdma_1_M_AXIS_MM2S_TDATA),
        .m_axis_mm2s_tlast(axi_vdma_1_M_AXIS_MM2S_TLAST),
        .m_axis_mm2s_tready(axi_vdma_1_M_AXIS_MM2S_TREADY),
        .m_axis_mm2s_tuser(axi_vdma_1_M_AXIS_MM2S_TUSER),
        .m_axis_mm2s_tvalid(axi_vdma_1_M_AXIS_MM2S_TVALID),
        .mm2s_frame_ptr_in({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .mm2s_fsync(stream_to_vga_0_fsync),
        .mm2s_introut(vdma_mm2s_mm2s_introut),
        .s_axi_lite_aclk(microblaze_0_Clk),
        .s_axi_lite_araddr(microblaze_0_axi_periph_M02_AXI_ARADDR[8:0]),
        .s_axi_lite_arready(microblaze_0_axi_periph_M02_AXI_ARREADY),
        .s_axi_lite_arvalid(microblaze_0_axi_periph_M02_AXI_ARVALID),
        .s_axi_lite_awaddr(microblaze_0_axi_periph_M02_AXI_AWADDR[8:0]),
        .s_axi_lite_awready(microblaze_0_axi_periph_M02_AXI_AWREADY),
        .s_axi_lite_awvalid(microblaze_0_axi_periph_M02_AXI_AWVALID),
        .s_axi_lite_bready(microblaze_0_axi_periph_M02_AXI_BREADY),
        .s_axi_lite_bresp(microblaze_0_axi_periph_M02_AXI_BRESP),
        .s_axi_lite_bvalid(microblaze_0_axi_periph_M02_AXI_BVALID),
        .s_axi_lite_rdata(microblaze_0_axi_periph_M02_AXI_RDATA),
        .s_axi_lite_rready(microblaze_0_axi_periph_M02_AXI_RREADY),
        .s_axi_lite_rresp(microblaze_0_axi_periph_M02_AXI_RRESP),
        .s_axi_lite_rvalid(microblaze_0_axi_periph_M02_AXI_RVALID),
        .s_axi_lite_wdata(microblaze_0_axi_periph_M02_AXI_WDATA),
        .s_axi_lite_wready(microblaze_0_axi_periph_M02_AXI_WREADY),
        .s_axi_lite_wvalid(microblaze_0_axi_periph_M02_AXI_WVALID));
  system_vdma_mm2s_intercon_0 vdma_mm2s_intercon
       (.ACLK(microblaze_0_Clk),
        .ARESETN(rst_processing_system7_0_100M_interconnect_aresetn),
        .M00_ACLK(microblaze_0_Clk),
        .M00_ARESETN(rst_processing_system7_0_100M_peripheral_aresetn),
        .M00_AXI_araddr(axi_mem_intercon_M00_AXI1_ARADDR),
        .M00_AXI_arburst(axi_mem_intercon_M00_AXI1_ARBURST),
        .M00_AXI_arcache(axi_mem_intercon_M00_AXI1_ARCACHE),
        .M00_AXI_arlen(axi_mem_intercon_M00_AXI1_ARLEN),
        .M00_AXI_arlock(axi_mem_intercon_M00_AXI1_ARLOCK),
        .M00_AXI_arprot(axi_mem_intercon_M00_AXI1_ARPROT),
        .M00_AXI_arqos(axi_mem_intercon_M00_AXI1_ARQOS),
        .M00_AXI_arready(axi_mem_intercon_M00_AXI1_ARREADY),
        .M00_AXI_arsize(axi_mem_intercon_M00_AXI1_ARSIZE),
        .M00_AXI_arvalid(axi_mem_intercon_M00_AXI1_ARVALID),
        .M00_AXI_rdata(axi_mem_intercon_M00_AXI1_RDATA),
        .M00_AXI_rlast(axi_mem_intercon_M00_AXI1_RLAST),
        .M00_AXI_rready(axi_mem_intercon_M00_AXI1_RREADY),
        .M00_AXI_rresp(axi_mem_intercon_M00_AXI1_RRESP),
        .M00_AXI_rvalid(axi_mem_intercon_M00_AXI1_RVALID),
        .S00_ACLK(microblaze_0_Clk),
        .S00_ARESETN(rst_processing_system7_0_100M_peripheral_aresetn),
        .S00_AXI_araddr(axi_vdma_1_M_AXI_MM2S_ARADDR),
        .S00_AXI_arburst(axi_vdma_1_M_AXI_MM2S_ARBURST),
        .S00_AXI_arcache(axi_vdma_1_M_AXI_MM2S_ARCACHE),
        .S00_AXI_arlen(axi_vdma_1_M_AXI_MM2S_ARLEN),
        .S00_AXI_arprot(axi_vdma_1_M_AXI_MM2S_ARPROT),
        .S00_AXI_arready(axi_vdma_1_M_AXI_MM2S_ARREADY),
        .S00_AXI_arsize(axi_vdma_1_M_AXI_MM2S_ARSIZE),
        .S00_AXI_arvalid(axi_vdma_1_M_AXI_MM2S_ARVALID),
        .S00_AXI_rdata(axi_vdma_1_M_AXI_MM2S_RDATA),
        .S00_AXI_rlast(axi_vdma_1_M_AXI_MM2S_RLAST),
        .S00_AXI_rready(axi_vdma_1_M_AXI_MM2S_RREADY),
        .S00_AXI_rresp(axi_vdma_1_M_AXI_MM2S_RRESP),
        .S00_AXI_rvalid(axi_vdma_1_M_AXI_MM2S_RVALID));
  system_vdma_s2mm_0 vdma_s2mm
       (.axi_resetn(rst_processing_system7_0_100M_peripheral_aresetn),
        .m_axi_s2mm_aclk(microblaze_0_Clk),
        .m_axi_s2mm_awaddr(axi_vdma_0_M_AXI_S2MM_AWADDR),
        .m_axi_s2mm_awburst(axi_vdma_0_M_AXI_S2MM_AWBURST),
        .m_axi_s2mm_awcache(axi_vdma_0_M_AXI_S2MM_AWCACHE),
        .m_axi_s2mm_awlen(axi_vdma_0_M_AXI_S2MM_AWLEN),
        .m_axi_s2mm_awprot(axi_vdma_0_M_AXI_S2MM_AWPROT),
        .m_axi_s2mm_awready(axi_vdma_0_M_AXI_S2MM_AWREADY),
        .m_axi_s2mm_awsize(axi_vdma_0_M_AXI_S2MM_AWSIZE),
        .m_axi_s2mm_awvalid(axi_vdma_0_M_AXI_S2MM_AWVALID),
        .m_axi_s2mm_bready(axi_vdma_0_M_AXI_S2MM_BREADY),
        .m_axi_s2mm_bresp(axi_vdma_0_M_AXI_S2MM_BRESP),
        .m_axi_s2mm_bvalid(axi_vdma_0_M_AXI_S2MM_BVALID),
        .m_axi_s2mm_wdata(axi_vdma_0_M_AXI_S2MM_WDATA),
        .m_axi_s2mm_wlast(axi_vdma_0_M_AXI_S2MM_WLAST),
        .m_axi_s2mm_wready(axi_vdma_0_M_AXI_S2MM_WREADY),
        .m_axi_s2mm_wstrb(axi_vdma_0_M_AXI_S2MM_WSTRB),
        .m_axi_s2mm_wvalid(axi_vdma_0_M_AXI_S2MM_WVALID),
        .s2mm_frame_ptr_in({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s2mm_introut(vdma_s2mm_s2mm_introut),
        .s_axi_lite_aclk(microblaze_0_Clk),
        .s_axi_lite_araddr(microblaze_0_axi_periph_M00_AXI_ARADDR[8:0]),
        .s_axi_lite_arready(microblaze_0_axi_periph_M00_AXI_ARREADY),
        .s_axi_lite_arvalid(microblaze_0_axi_periph_M00_AXI_ARVALID),
        .s_axi_lite_awaddr(microblaze_0_axi_periph_M00_AXI_AWADDR[8:0]),
        .s_axi_lite_awready(microblaze_0_axi_periph_M00_AXI_AWREADY),
        .s_axi_lite_awvalid(microblaze_0_axi_periph_M00_AXI_AWVALID),
        .s_axi_lite_bready(microblaze_0_axi_periph_M00_AXI_BREADY),
        .s_axi_lite_bresp(microblaze_0_axi_periph_M00_AXI_BRESP),
        .s_axi_lite_bvalid(microblaze_0_axi_periph_M00_AXI_BVALID),
        .s_axi_lite_rdata(microblaze_0_axi_periph_M00_AXI_RDATA),
        .s_axi_lite_rready(microblaze_0_axi_periph_M00_AXI_RREADY),
        .s_axi_lite_rresp(microblaze_0_axi_periph_M00_AXI_RRESP),
        .s_axi_lite_rvalid(microblaze_0_axi_periph_M00_AXI_RVALID),
        .s_axi_lite_wdata(microblaze_0_axi_periph_M00_AXI_WDATA),
        .s_axi_lite_wready(microblaze_0_axi_periph_M00_AXI_WREADY),
        .s_axi_lite_wvalid(microblaze_0_axi_periph_M00_AXI_WVALID),
        .s_axis_s2mm_aclk(microblaze_0_Clk),
        .s_axis_s2mm_tdata(fifo_generator_0_M_AXIS_TDATA),
        .s_axis_s2mm_tkeep({1'b1,1'b1}),
        .s_axis_s2mm_tlast(fifo_generator_0_M_AXIS_TLAST),
        .s_axis_s2mm_tready(fifo_generator_0_M_AXIS_TREADY),
        .s_axis_s2mm_tuser(fifo_generator_0_M_AXIS_TUSER),
        .s_axis_s2mm_tvalid(fifo_generator_0_M_AXIS_TVALID));
  system_vdma_s2mm_intercon_0 vdma_s2mm_intercon
       (.ACLK(microblaze_0_Clk),
        .ARESETN(rst_processing_system7_0_100M_interconnect_aresetn),
        .M00_ACLK(microblaze_0_Clk),
        .M00_ARESETN(rst_processing_system7_0_100M_peripheral_aresetn),
        .M00_AXI_awaddr(axi_mem_intercon_M00_AXI_AWADDR),
        .M00_AXI_awburst(axi_mem_intercon_M00_AXI_AWBURST),
        .M00_AXI_awcache(axi_mem_intercon_M00_AXI_AWCACHE),
        .M00_AXI_awlen(axi_mem_intercon_M00_AXI_AWLEN),
        .M00_AXI_awlock(axi_mem_intercon_M00_AXI_AWLOCK),
        .M00_AXI_awprot(axi_mem_intercon_M00_AXI_AWPROT),
        .M00_AXI_awqos(axi_mem_intercon_M00_AXI_AWQOS),
        .M00_AXI_awready(axi_mem_intercon_M00_AXI_AWREADY),
        .M00_AXI_awsize(axi_mem_intercon_M00_AXI_AWSIZE),
        .M00_AXI_awvalid(axi_mem_intercon_M00_AXI_AWVALID),
        .M00_AXI_bready(axi_mem_intercon_M00_AXI_BREADY),
        .M00_AXI_bresp(axi_mem_intercon_M00_AXI_BRESP),
        .M00_AXI_bvalid(axi_mem_intercon_M00_AXI_BVALID),
        .M00_AXI_wdata(axi_mem_intercon_M00_AXI_WDATA),
        .M00_AXI_wlast(axi_mem_intercon_M00_AXI_WLAST),
        .M00_AXI_wready(axi_mem_intercon_M00_AXI_WREADY),
        .M00_AXI_wstrb(axi_mem_intercon_M00_AXI_WSTRB),
        .M00_AXI_wvalid(axi_mem_intercon_M00_AXI_WVALID),
        .S00_ACLK(microblaze_0_Clk),
        .S00_ARESETN(rst_processing_system7_0_100M_peripheral_aresetn),
        .S00_AXI_awaddr(axi_vdma_0_M_AXI_S2MM_AWADDR),
        .S00_AXI_awburst(axi_vdma_0_M_AXI_S2MM_AWBURST),
        .S00_AXI_awcache(axi_vdma_0_M_AXI_S2MM_AWCACHE),
        .S00_AXI_awlen(axi_vdma_0_M_AXI_S2MM_AWLEN),
        .S00_AXI_awprot(axi_vdma_0_M_AXI_S2MM_AWPROT),
        .S00_AXI_awready(axi_vdma_0_M_AXI_S2MM_AWREADY),
        .S00_AXI_awsize(axi_vdma_0_M_AXI_S2MM_AWSIZE),
        .S00_AXI_awvalid(axi_vdma_0_M_AXI_S2MM_AWVALID),
        .S00_AXI_bready(axi_vdma_0_M_AXI_S2MM_BREADY),
        .S00_AXI_bresp(axi_vdma_0_M_AXI_S2MM_BRESP),
        .S00_AXI_bvalid(axi_vdma_0_M_AXI_S2MM_BVALID),
        .S00_AXI_wdata(axi_vdma_0_M_AXI_S2MM_WDATA),
        .S00_AXI_wlast(axi_vdma_0_M_AXI_S2MM_WLAST),
        .S00_AXI_wready(axi_vdma_0_M_AXI_S2MM_WREADY),
        .S00_AXI_wstrb(axi_vdma_0_M_AXI_S2MM_WSTRB),
        .S00_AXI_wvalid(axi_vdma_0_M_AXI_S2MM_WVALID));
  system_xlconcat_0_0 xlconcat_0
       (.In0(vdma_s2mm_s2mm_introut),
        .In1(vdma_mm2s_mm2s_introut),
        .dout(xlconcat_0_dout));
endmodule

module system_axi_periph_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arready,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awready,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wready,
    M00_AXI_wvalid,
    M01_ACLK,
    M01_ARESETN,
    M01_AXI_araddr,
    M01_AXI_arprot,
    M01_AXI_arready,
    M01_AXI_arvalid,
    M01_AXI_awaddr,
    M01_AXI_awprot,
    M01_AXI_awready,
    M01_AXI_awvalid,
    M01_AXI_bready,
    M01_AXI_bresp,
    M01_AXI_bvalid,
    M01_AXI_rdata,
    M01_AXI_rready,
    M01_AXI_rresp,
    M01_AXI_rvalid,
    M01_AXI_wdata,
    M01_AXI_wready,
    M01_AXI_wstrb,
    M01_AXI_wvalid,
    M02_ACLK,
    M02_ARESETN,
    M02_AXI_araddr,
    M02_AXI_arready,
    M02_AXI_arvalid,
    M02_AXI_awaddr,
    M02_AXI_awready,
    M02_AXI_awvalid,
    M02_AXI_bready,
    M02_AXI_bresp,
    M02_AXI_bvalid,
    M02_AXI_rdata,
    M02_AXI_rready,
    M02_AXI_rresp,
    M02_AXI_rvalid,
    M02_AXI_wdata,
    M02_AXI_wready,
    M02_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arsize,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awsize,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rid,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wid,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input [0:0]ARESETN;
  input M00_ACLK;
  input [0:0]M00_ARESETN;
  output [31:0]M00_AXI_araddr;
  input M00_AXI_arready;
  output M00_AXI_arvalid;
  output [31:0]M00_AXI_awaddr;
  input M00_AXI_awready;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  input [31:0]M00_AXI_rdata;
  output M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input M00_AXI_rvalid;
  output [31:0]M00_AXI_wdata;
  input M00_AXI_wready;
  output M00_AXI_wvalid;
  input M01_ACLK;
  input [0:0]M01_ARESETN;
  output [31:0]M01_AXI_araddr;
  output [2:0]M01_AXI_arprot;
  input M01_AXI_arready;
  output M01_AXI_arvalid;
  output [31:0]M01_AXI_awaddr;
  output [2:0]M01_AXI_awprot;
  input M01_AXI_awready;
  output M01_AXI_awvalid;
  output M01_AXI_bready;
  input [1:0]M01_AXI_bresp;
  input M01_AXI_bvalid;
  input [31:0]M01_AXI_rdata;
  output M01_AXI_rready;
  input [1:0]M01_AXI_rresp;
  input M01_AXI_rvalid;
  output [31:0]M01_AXI_wdata;
  input M01_AXI_wready;
  output [3:0]M01_AXI_wstrb;
  output M01_AXI_wvalid;
  input M02_ACLK;
  input [0:0]M02_ARESETN;
  output [31:0]M02_AXI_araddr;
  input M02_AXI_arready;
  output M02_AXI_arvalid;
  output [31:0]M02_AXI_awaddr;
  input M02_AXI_awready;
  output M02_AXI_awvalid;
  output M02_AXI_bready;
  input [1:0]M02_AXI_bresp;
  input M02_AXI_bvalid;
  input [31:0]M02_AXI_rdata;
  output M02_AXI_rready;
  input [1:0]M02_AXI_rresp;
  input M02_AXI_rvalid;
  output [31:0]M02_AXI_wdata;
  input M02_AXI_wready;
  output M02_AXI_wvalid;
  input S00_ACLK;
  input [0:0]S00_ARESETN;
  input [31:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [11:0]S00_AXI_arid;
  input [3:0]S00_AXI_arlen;
  input [1:0]S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [2:0]S00_AXI_arsize;
  input S00_AXI_arvalid;
  input [31:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [11:0]S00_AXI_awid;
  input [3:0]S00_AXI_awlen;
  input [1:0]S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [2:0]S00_AXI_awsize;
  input S00_AXI_awvalid;
  output [11:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [31:0]S00_AXI_rdata;
  output [11:0]S00_AXI_rid;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [31:0]S00_AXI_wdata;
  input [11:0]S00_AXI_wid;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire M00_ACLK_1;
  wire [0:0]M00_ARESETN_1;
  wire M01_ACLK_1;
  wire [0:0]M01_ARESETN_1;
  wire M02_ACLK_1;
  wire [0:0]M02_ARESETN_1;
  wire S00_ACLK_1;
  wire [0:0]S00_ARESETN_1;
  wire axi_periph_ACLK_net;
  wire [0:0]axi_periph_ARESETN_net;
  wire [31:0]axi_periph_to_s00_couplers_ARADDR;
  wire [1:0]axi_periph_to_s00_couplers_ARBURST;
  wire [3:0]axi_periph_to_s00_couplers_ARCACHE;
  wire [11:0]axi_periph_to_s00_couplers_ARID;
  wire [3:0]axi_periph_to_s00_couplers_ARLEN;
  wire [1:0]axi_periph_to_s00_couplers_ARLOCK;
  wire [2:0]axi_periph_to_s00_couplers_ARPROT;
  wire [3:0]axi_periph_to_s00_couplers_ARQOS;
  wire axi_periph_to_s00_couplers_ARREADY;
  wire [2:0]axi_periph_to_s00_couplers_ARSIZE;
  wire axi_periph_to_s00_couplers_ARVALID;
  wire [31:0]axi_periph_to_s00_couplers_AWADDR;
  wire [1:0]axi_periph_to_s00_couplers_AWBURST;
  wire [3:0]axi_periph_to_s00_couplers_AWCACHE;
  wire [11:0]axi_periph_to_s00_couplers_AWID;
  wire [3:0]axi_periph_to_s00_couplers_AWLEN;
  wire [1:0]axi_periph_to_s00_couplers_AWLOCK;
  wire [2:0]axi_periph_to_s00_couplers_AWPROT;
  wire [3:0]axi_periph_to_s00_couplers_AWQOS;
  wire axi_periph_to_s00_couplers_AWREADY;
  wire [2:0]axi_periph_to_s00_couplers_AWSIZE;
  wire axi_periph_to_s00_couplers_AWVALID;
  wire [11:0]axi_periph_to_s00_couplers_BID;
  wire axi_periph_to_s00_couplers_BREADY;
  wire [1:0]axi_periph_to_s00_couplers_BRESP;
  wire axi_periph_to_s00_couplers_BVALID;
  wire [31:0]axi_periph_to_s00_couplers_RDATA;
  wire [11:0]axi_periph_to_s00_couplers_RID;
  wire axi_periph_to_s00_couplers_RLAST;
  wire axi_periph_to_s00_couplers_RREADY;
  wire [1:0]axi_periph_to_s00_couplers_RRESP;
  wire axi_periph_to_s00_couplers_RVALID;
  wire [31:0]axi_periph_to_s00_couplers_WDATA;
  wire [11:0]axi_periph_to_s00_couplers_WID;
  wire axi_periph_to_s00_couplers_WLAST;
  wire axi_periph_to_s00_couplers_WREADY;
  wire [3:0]axi_periph_to_s00_couplers_WSTRB;
  wire axi_periph_to_s00_couplers_WVALID;
  wire [31:0]m00_couplers_to_axi_periph_ARADDR;
  wire m00_couplers_to_axi_periph_ARREADY;
  wire m00_couplers_to_axi_periph_ARVALID;
  wire [31:0]m00_couplers_to_axi_periph_AWADDR;
  wire m00_couplers_to_axi_periph_AWREADY;
  wire m00_couplers_to_axi_periph_AWVALID;
  wire m00_couplers_to_axi_periph_BREADY;
  wire [1:0]m00_couplers_to_axi_periph_BRESP;
  wire m00_couplers_to_axi_periph_BVALID;
  wire [31:0]m00_couplers_to_axi_periph_RDATA;
  wire m00_couplers_to_axi_periph_RREADY;
  wire [1:0]m00_couplers_to_axi_periph_RRESP;
  wire m00_couplers_to_axi_periph_RVALID;
  wire [31:0]m00_couplers_to_axi_periph_WDATA;
  wire m00_couplers_to_axi_periph_WREADY;
  wire m00_couplers_to_axi_periph_WVALID;
  wire [31:0]m01_couplers_to_axi_periph_ARADDR;
  wire [2:0]m01_couplers_to_axi_periph_ARPROT;
  wire m01_couplers_to_axi_periph_ARREADY;
  wire m01_couplers_to_axi_periph_ARVALID;
  wire [31:0]m01_couplers_to_axi_periph_AWADDR;
  wire [2:0]m01_couplers_to_axi_periph_AWPROT;
  wire m01_couplers_to_axi_periph_AWREADY;
  wire m01_couplers_to_axi_periph_AWVALID;
  wire m01_couplers_to_axi_periph_BREADY;
  wire [1:0]m01_couplers_to_axi_periph_BRESP;
  wire m01_couplers_to_axi_periph_BVALID;
  wire [31:0]m01_couplers_to_axi_periph_RDATA;
  wire m01_couplers_to_axi_periph_RREADY;
  wire [1:0]m01_couplers_to_axi_periph_RRESP;
  wire m01_couplers_to_axi_periph_RVALID;
  wire [31:0]m01_couplers_to_axi_periph_WDATA;
  wire m01_couplers_to_axi_periph_WREADY;
  wire [3:0]m01_couplers_to_axi_periph_WSTRB;
  wire m01_couplers_to_axi_periph_WVALID;
  wire [31:0]m02_couplers_to_axi_periph_ARADDR;
  wire m02_couplers_to_axi_periph_ARREADY;
  wire m02_couplers_to_axi_periph_ARVALID;
  wire [31:0]m02_couplers_to_axi_periph_AWADDR;
  wire m02_couplers_to_axi_periph_AWREADY;
  wire m02_couplers_to_axi_periph_AWVALID;
  wire m02_couplers_to_axi_periph_BREADY;
  wire [1:0]m02_couplers_to_axi_periph_BRESP;
  wire m02_couplers_to_axi_periph_BVALID;
  wire [31:0]m02_couplers_to_axi_periph_RDATA;
  wire m02_couplers_to_axi_periph_RREADY;
  wire [1:0]m02_couplers_to_axi_periph_RRESP;
  wire m02_couplers_to_axi_periph_RVALID;
  wire [31:0]m02_couplers_to_axi_periph_WDATA;
  wire m02_couplers_to_axi_periph_WREADY;
  wire m02_couplers_to_axi_periph_WVALID;
  wire [31:0]s00_couplers_to_xbar_ARADDR;
  wire [2:0]s00_couplers_to_xbar_ARPROT;
  wire [0:0]s00_couplers_to_xbar_ARREADY;
  wire s00_couplers_to_xbar_ARVALID;
  wire [31:0]s00_couplers_to_xbar_AWADDR;
  wire [2:0]s00_couplers_to_xbar_AWPROT;
  wire [0:0]s00_couplers_to_xbar_AWREADY;
  wire s00_couplers_to_xbar_AWVALID;
  wire s00_couplers_to_xbar_BREADY;
  wire [1:0]s00_couplers_to_xbar_BRESP;
  wire [0:0]s00_couplers_to_xbar_BVALID;
  wire [31:0]s00_couplers_to_xbar_RDATA;
  wire s00_couplers_to_xbar_RREADY;
  wire [1:0]s00_couplers_to_xbar_RRESP;
  wire [0:0]s00_couplers_to_xbar_RVALID;
  wire [31:0]s00_couplers_to_xbar_WDATA;
  wire [0:0]s00_couplers_to_xbar_WREADY;
  wire [3:0]s00_couplers_to_xbar_WSTRB;
  wire s00_couplers_to_xbar_WVALID;
  wire [31:0]xbar_to_m00_couplers_ARADDR;
  wire xbar_to_m00_couplers_ARREADY;
  wire [0:0]xbar_to_m00_couplers_ARVALID;
  wire [31:0]xbar_to_m00_couplers_AWADDR;
  wire xbar_to_m00_couplers_AWREADY;
  wire [0:0]xbar_to_m00_couplers_AWVALID;
  wire [0:0]xbar_to_m00_couplers_BREADY;
  wire [1:0]xbar_to_m00_couplers_BRESP;
  wire xbar_to_m00_couplers_BVALID;
  wire [31:0]xbar_to_m00_couplers_RDATA;
  wire [0:0]xbar_to_m00_couplers_RREADY;
  wire [1:0]xbar_to_m00_couplers_RRESP;
  wire xbar_to_m00_couplers_RVALID;
  wire [31:0]xbar_to_m00_couplers_WDATA;
  wire xbar_to_m00_couplers_WREADY;
  wire [0:0]xbar_to_m00_couplers_WVALID;
  wire [63:32]xbar_to_m01_couplers_ARADDR;
  wire [5:3]xbar_to_m01_couplers_ARPROT;
  wire xbar_to_m01_couplers_ARREADY;
  wire [1:1]xbar_to_m01_couplers_ARVALID;
  wire [63:32]xbar_to_m01_couplers_AWADDR;
  wire [5:3]xbar_to_m01_couplers_AWPROT;
  wire xbar_to_m01_couplers_AWREADY;
  wire [1:1]xbar_to_m01_couplers_AWVALID;
  wire [1:1]xbar_to_m01_couplers_BREADY;
  wire [1:0]xbar_to_m01_couplers_BRESP;
  wire xbar_to_m01_couplers_BVALID;
  wire [31:0]xbar_to_m01_couplers_RDATA;
  wire [1:1]xbar_to_m01_couplers_RREADY;
  wire [1:0]xbar_to_m01_couplers_RRESP;
  wire xbar_to_m01_couplers_RVALID;
  wire [63:32]xbar_to_m01_couplers_WDATA;
  wire xbar_to_m01_couplers_WREADY;
  wire [7:4]xbar_to_m01_couplers_WSTRB;
  wire [1:1]xbar_to_m01_couplers_WVALID;
  wire [95:64]xbar_to_m02_couplers_ARADDR;
  wire xbar_to_m02_couplers_ARREADY;
  wire [2:2]xbar_to_m02_couplers_ARVALID;
  wire [95:64]xbar_to_m02_couplers_AWADDR;
  wire xbar_to_m02_couplers_AWREADY;
  wire [2:2]xbar_to_m02_couplers_AWVALID;
  wire [2:2]xbar_to_m02_couplers_BREADY;
  wire [1:0]xbar_to_m02_couplers_BRESP;
  wire xbar_to_m02_couplers_BVALID;
  wire [31:0]xbar_to_m02_couplers_RDATA;
  wire [2:2]xbar_to_m02_couplers_RREADY;
  wire [1:0]xbar_to_m02_couplers_RRESP;
  wire xbar_to_m02_couplers_RVALID;
  wire [95:64]xbar_to_m02_couplers_WDATA;
  wire xbar_to_m02_couplers_WREADY;
  wire [2:2]xbar_to_m02_couplers_WVALID;
  wire [8:0]NLW_xbar_m_axi_arprot_UNCONNECTED;
  wire [8:0]NLW_xbar_m_axi_awprot_UNCONNECTED;
  wire [11:0]NLW_xbar_m_axi_wstrb_UNCONNECTED;

  assign M00_ACLK_1 = M00_ACLK;
  assign M00_ARESETN_1 = M00_ARESETN[0];
  assign M00_AXI_araddr[31:0] = m00_couplers_to_axi_periph_ARADDR;
  assign M00_AXI_arvalid = m00_couplers_to_axi_periph_ARVALID;
  assign M00_AXI_awaddr[31:0] = m00_couplers_to_axi_periph_AWADDR;
  assign M00_AXI_awvalid = m00_couplers_to_axi_periph_AWVALID;
  assign M00_AXI_bready = m00_couplers_to_axi_periph_BREADY;
  assign M00_AXI_rready = m00_couplers_to_axi_periph_RREADY;
  assign M00_AXI_wdata[31:0] = m00_couplers_to_axi_periph_WDATA;
  assign M00_AXI_wvalid = m00_couplers_to_axi_periph_WVALID;
  assign M01_ACLK_1 = M01_ACLK;
  assign M01_ARESETN_1 = M01_ARESETN[0];
  assign M01_AXI_araddr[31:0] = m01_couplers_to_axi_periph_ARADDR;
  assign M01_AXI_arprot[2:0] = m01_couplers_to_axi_periph_ARPROT;
  assign M01_AXI_arvalid = m01_couplers_to_axi_periph_ARVALID;
  assign M01_AXI_awaddr[31:0] = m01_couplers_to_axi_periph_AWADDR;
  assign M01_AXI_awprot[2:0] = m01_couplers_to_axi_periph_AWPROT;
  assign M01_AXI_awvalid = m01_couplers_to_axi_periph_AWVALID;
  assign M01_AXI_bready = m01_couplers_to_axi_periph_BREADY;
  assign M01_AXI_rready = m01_couplers_to_axi_periph_RREADY;
  assign M01_AXI_wdata[31:0] = m01_couplers_to_axi_periph_WDATA;
  assign M01_AXI_wstrb[3:0] = m01_couplers_to_axi_periph_WSTRB;
  assign M01_AXI_wvalid = m01_couplers_to_axi_periph_WVALID;
  assign M02_ACLK_1 = M02_ACLK;
  assign M02_ARESETN_1 = M02_ARESETN[0];
  assign M02_AXI_araddr[31:0] = m02_couplers_to_axi_periph_ARADDR;
  assign M02_AXI_arvalid = m02_couplers_to_axi_periph_ARVALID;
  assign M02_AXI_awaddr[31:0] = m02_couplers_to_axi_periph_AWADDR;
  assign M02_AXI_awvalid = m02_couplers_to_axi_periph_AWVALID;
  assign M02_AXI_bready = m02_couplers_to_axi_periph_BREADY;
  assign M02_AXI_rready = m02_couplers_to_axi_periph_RREADY;
  assign M02_AXI_wdata[31:0] = m02_couplers_to_axi_periph_WDATA;
  assign M02_AXI_wvalid = m02_couplers_to_axi_periph_WVALID;
  assign S00_ACLK_1 = S00_ACLK;
  assign S00_ARESETN_1 = S00_ARESETN[0];
  assign S00_AXI_arready = axi_periph_to_s00_couplers_ARREADY;
  assign S00_AXI_awready = axi_periph_to_s00_couplers_AWREADY;
  assign S00_AXI_bid[11:0] = axi_periph_to_s00_couplers_BID;
  assign S00_AXI_bresp[1:0] = axi_periph_to_s00_couplers_BRESP;
  assign S00_AXI_bvalid = axi_periph_to_s00_couplers_BVALID;
  assign S00_AXI_rdata[31:0] = axi_periph_to_s00_couplers_RDATA;
  assign S00_AXI_rid[11:0] = axi_periph_to_s00_couplers_RID;
  assign S00_AXI_rlast = axi_periph_to_s00_couplers_RLAST;
  assign S00_AXI_rresp[1:0] = axi_periph_to_s00_couplers_RRESP;
  assign S00_AXI_rvalid = axi_periph_to_s00_couplers_RVALID;
  assign S00_AXI_wready = axi_periph_to_s00_couplers_WREADY;
  assign axi_periph_ACLK_net = ACLK;
  assign axi_periph_ARESETN_net = ARESETN[0];
  assign axi_periph_to_s00_couplers_ARADDR = S00_AXI_araddr[31:0];
  assign axi_periph_to_s00_couplers_ARBURST = S00_AXI_arburst[1:0];
  assign axi_periph_to_s00_couplers_ARCACHE = S00_AXI_arcache[3:0];
  assign axi_periph_to_s00_couplers_ARID = S00_AXI_arid[11:0];
  assign axi_periph_to_s00_couplers_ARLEN = S00_AXI_arlen[3:0];
  assign axi_periph_to_s00_couplers_ARLOCK = S00_AXI_arlock[1:0];
  assign axi_periph_to_s00_couplers_ARPROT = S00_AXI_arprot[2:0];
  assign axi_periph_to_s00_couplers_ARQOS = S00_AXI_arqos[3:0];
  assign axi_periph_to_s00_couplers_ARSIZE = S00_AXI_arsize[2:0];
  assign axi_periph_to_s00_couplers_ARVALID = S00_AXI_arvalid;
  assign axi_periph_to_s00_couplers_AWADDR = S00_AXI_awaddr[31:0];
  assign axi_periph_to_s00_couplers_AWBURST = S00_AXI_awburst[1:0];
  assign axi_periph_to_s00_couplers_AWCACHE = S00_AXI_awcache[3:0];
  assign axi_periph_to_s00_couplers_AWID = S00_AXI_awid[11:0];
  assign axi_periph_to_s00_couplers_AWLEN = S00_AXI_awlen[3:0];
  assign axi_periph_to_s00_couplers_AWLOCK = S00_AXI_awlock[1:0];
  assign axi_periph_to_s00_couplers_AWPROT = S00_AXI_awprot[2:0];
  assign axi_periph_to_s00_couplers_AWQOS = S00_AXI_awqos[3:0];
  assign axi_periph_to_s00_couplers_AWSIZE = S00_AXI_awsize[2:0];
  assign axi_periph_to_s00_couplers_AWVALID = S00_AXI_awvalid;
  assign axi_periph_to_s00_couplers_BREADY = S00_AXI_bready;
  assign axi_periph_to_s00_couplers_RREADY = S00_AXI_rready;
  assign axi_periph_to_s00_couplers_WDATA = S00_AXI_wdata[31:0];
  assign axi_periph_to_s00_couplers_WID = S00_AXI_wid[11:0];
  assign axi_periph_to_s00_couplers_WLAST = S00_AXI_wlast;
  assign axi_periph_to_s00_couplers_WSTRB = S00_AXI_wstrb[3:0];
  assign axi_periph_to_s00_couplers_WVALID = S00_AXI_wvalid;
  assign m00_couplers_to_axi_periph_ARREADY = M00_AXI_arready;
  assign m00_couplers_to_axi_periph_AWREADY = M00_AXI_awready;
  assign m00_couplers_to_axi_periph_BRESP = M00_AXI_bresp[1:0];
  assign m00_couplers_to_axi_periph_BVALID = M00_AXI_bvalid;
  assign m00_couplers_to_axi_periph_RDATA = M00_AXI_rdata[31:0];
  assign m00_couplers_to_axi_periph_RRESP = M00_AXI_rresp[1:0];
  assign m00_couplers_to_axi_periph_RVALID = M00_AXI_rvalid;
  assign m00_couplers_to_axi_periph_WREADY = M00_AXI_wready;
  assign m01_couplers_to_axi_periph_ARREADY = M01_AXI_arready;
  assign m01_couplers_to_axi_periph_AWREADY = M01_AXI_awready;
  assign m01_couplers_to_axi_periph_BRESP = M01_AXI_bresp[1:0];
  assign m01_couplers_to_axi_periph_BVALID = M01_AXI_bvalid;
  assign m01_couplers_to_axi_periph_RDATA = M01_AXI_rdata[31:0];
  assign m01_couplers_to_axi_periph_RRESP = M01_AXI_rresp[1:0];
  assign m01_couplers_to_axi_periph_RVALID = M01_AXI_rvalid;
  assign m01_couplers_to_axi_periph_WREADY = M01_AXI_wready;
  assign m02_couplers_to_axi_periph_ARREADY = M02_AXI_arready;
  assign m02_couplers_to_axi_periph_AWREADY = M02_AXI_awready;
  assign m02_couplers_to_axi_periph_BRESP = M02_AXI_bresp[1:0];
  assign m02_couplers_to_axi_periph_BVALID = M02_AXI_bvalid;
  assign m02_couplers_to_axi_periph_RDATA = M02_AXI_rdata[31:0];
  assign m02_couplers_to_axi_periph_RRESP = M02_AXI_rresp[1:0];
  assign m02_couplers_to_axi_periph_RVALID = M02_AXI_rvalid;
  assign m02_couplers_to_axi_periph_WREADY = M02_AXI_wready;
  m00_couplers_imp_9WRM0W m00_couplers
       (.M_ACLK(M00_ACLK_1),
        .M_ARESETN(M00_ARESETN_1),
        .M_AXI_araddr(m00_couplers_to_axi_periph_ARADDR),
        .M_AXI_arready(m00_couplers_to_axi_periph_ARREADY),
        .M_AXI_arvalid(m00_couplers_to_axi_periph_ARVALID),
        .M_AXI_awaddr(m00_couplers_to_axi_periph_AWADDR),
        .M_AXI_awready(m00_couplers_to_axi_periph_AWREADY),
        .M_AXI_awvalid(m00_couplers_to_axi_periph_AWVALID),
        .M_AXI_bready(m00_couplers_to_axi_periph_BREADY),
        .M_AXI_bresp(m00_couplers_to_axi_periph_BRESP),
        .M_AXI_bvalid(m00_couplers_to_axi_periph_BVALID),
        .M_AXI_rdata(m00_couplers_to_axi_periph_RDATA),
        .M_AXI_rready(m00_couplers_to_axi_periph_RREADY),
        .M_AXI_rresp(m00_couplers_to_axi_periph_RRESP),
        .M_AXI_rvalid(m00_couplers_to_axi_periph_RVALID),
        .M_AXI_wdata(m00_couplers_to_axi_periph_WDATA),
        .M_AXI_wready(m00_couplers_to_axi_periph_WREADY),
        .M_AXI_wvalid(m00_couplers_to_axi_periph_WVALID),
        .S_ACLK(axi_periph_ACLK_net),
        .S_ARESETN(axi_periph_ARESETN_net),
        .S_AXI_araddr(xbar_to_m00_couplers_ARADDR),
        .S_AXI_arready(xbar_to_m00_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m00_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m00_couplers_AWADDR),
        .S_AXI_awready(xbar_to_m00_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m00_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m00_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m00_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m00_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m00_couplers_RDATA),
        .S_AXI_rready(xbar_to_m00_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m00_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m00_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m00_couplers_WDATA),
        .S_AXI_wready(xbar_to_m00_couplers_WREADY),
        .S_AXI_wvalid(xbar_to_m00_couplers_WVALID));
  m01_couplers_imp_13D45HT m01_couplers
       (.M_ACLK(M01_ACLK_1),
        .M_ARESETN(M01_ARESETN_1),
        .M_AXI_araddr(m01_couplers_to_axi_periph_ARADDR),
        .M_AXI_arprot(m01_couplers_to_axi_periph_ARPROT),
        .M_AXI_arready(m01_couplers_to_axi_periph_ARREADY),
        .M_AXI_arvalid(m01_couplers_to_axi_periph_ARVALID),
        .M_AXI_awaddr(m01_couplers_to_axi_periph_AWADDR),
        .M_AXI_awprot(m01_couplers_to_axi_periph_AWPROT),
        .M_AXI_awready(m01_couplers_to_axi_periph_AWREADY),
        .M_AXI_awvalid(m01_couplers_to_axi_periph_AWVALID),
        .M_AXI_bready(m01_couplers_to_axi_periph_BREADY),
        .M_AXI_bresp(m01_couplers_to_axi_periph_BRESP),
        .M_AXI_bvalid(m01_couplers_to_axi_periph_BVALID),
        .M_AXI_rdata(m01_couplers_to_axi_periph_RDATA),
        .M_AXI_rready(m01_couplers_to_axi_periph_RREADY),
        .M_AXI_rresp(m01_couplers_to_axi_periph_RRESP),
        .M_AXI_rvalid(m01_couplers_to_axi_periph_RVALID),
        .M_AXI_wdata(m01_couplers_to_axi_periph_WDATA),
        .M_AXI_wready(m01_couplers_to_axi_periph_WREADY),
        .M_AXI_wstrb(m01_couplers_to_axi_periph_WSTRB),
        .M_AXI_wvalid(m01_couplers_to_axi_periph_WVALID),
        .S_ACLK(axi_periph_ACLK_net),
        .S_ARESETN(axi_periph_ARESETN_net),
        .S_AXI_araddr(xbar_to_m01_couplers_ARADDR),
        .S_AXI_arprot(xbar_to_m01_couplers_ARPROT),
        .S_AXI_arready(xbar_to_m01_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m01_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m01_couplers_AWADDR),
        .S_AXI_awprot(xbar_to_m01_couplers_AWPROT),
        .S_AXI_awready(xbar_to_m01_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m01_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m01_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m01_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m01_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m01_couplers_RDATA),
        .S_AXI_rready(xbar_to_m01_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m01_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m01_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m01_couplers_WDATA),
        .S_AXI_wready(xbar_to_m01_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m01_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m01_couplers_WVALID));
  m02_couplers_imp_19J2N8J m02_couplers
       (.M_ACLK(M02_ACLK_1),
        .M_ARESETN(M02_ARESETN_1),
        .M_AXI_araddr(m02_couplers_to_axi_periph_ARADDR),
        .M_AXI_arready(m02_couplers_to_axi_periph_ARREADY),
        .M_AXI_arvalid(m02_couplers_to_axi_periph_ARVALID),
        .M_AXI_awaddr(m02_couplers_to_axi_periph_AWADDR),
        .M_AXI_awready(m02_couplers_to_axi_periph_AWREADY),
        .M_AXI_awvalid(m02_couplers_to_axi_periph_AWVALID),
        .M_AXI_bready(m02_couplers_to_axi_periph_BREADY),
        .M_AXI_bresp(m02_couplers_to_axi_periph_BRESP),
        .M_AXI_bvalid(m02_couplers_to_axi_periph_BVALID),
        .M_AXI_rdata(m02_couplers_to_axi_periph_RDATA),
        .M_AXI_rready(m02_couplers_to_axi_periph_RREADY),
        .M_AXI_rresp(m02_couplers_to_axi_periph_RRESP),
        .M_AXI_rvalid(m02_couplers_to_axi_periph_RVALID),
        .M_AXI_wdata(m02_couplers_to_axi_periph_WDATA),
        .M_AXI_wready(m02_couplers_to_axi_periph_WREADY),
        .M_AXI_wvalid(m02_couplers_to_axi_periph_WVALID),
        .S_ACLK(axi_periph_ACLK_net),
        .S_ARESETN(axi_periph_ARESETN_net),
        .S_AXI_araddr(xbar_to_m02_couplers_ARADDR),
        .S_AXI_arready(xbar_to_m02_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m02_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m02_couplers_AWADDR),
        .S_AXI_awready(xbar_to_m02_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m02_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m02_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m02_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m02_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m02_couplers_RDATA),
        .S_AXI_rready(xbar_to_m02_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m02_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m02_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m02_couplers_WDATA),
        .S_AXI_wready(xbar_to_m02_couplers_WREADY),
        .S_AXI_wvalid(xbar_to_m02_couplers_WVALID));
  s00_couplers_imp_5M10I9 s00_couplers
       (.M_ACLK(axi_periph_ACLK_net),
        .M_ARESETN(axi_periph_ARESETN_net),
        .M_AXI_araddr(s00_couplers_to_xbar_ARADDR),
        .M_AXI_arprot(s00_couplers_to_xbar_ARPROT),
        .M_AXI_arready(s00_couplers_to_xbar_ARREADY),
        .M_AXI_arvalid(s00_couplers_to_xbar_ARVALID),
        .M_AXI_awaddr(s00_couplers_to_xbar_AWADDR),
        .M_AXI_awprot(s00_couplers_to_xbar_AWPROT),
        .M_AXI_awready(s00_couplers_to_xbar_AWREADY),
        .M_AXI_awvalid(s00_couplers_to_xbar_AWVALID),
        .M_AXI_bready(s00_couplers_to_xbar_BREADY),
        .M_AXI_bresp(s00_couplers_to_xbar_BRESP),
        .M_AXI_bvalid(s00_couplers_to_xbar_BVALID),
        .M_AXI_rdata(s00_couplers_to_xbar_RDATA),
        .M_AXI_rready(s00_couplers_to_xbar_RREADY),
        .M_AXI_rresp(s00_couplers_to_xbar_RRESP),
        .M_AXI_rvalid(s00_couplers_to_xbar_RVALID),
        .M_AXI_wdata(s00_couplers_to_xbar_WDATA),
        .M_AXI_wready(s00_couplers_to_xbar_WREADY),
        .M_AXI_wstrb(s00_couplers_to_xbar_WSTRB),
        .M_AXI_wvalid(s00_couplers_to_xbar_WVALID),
        .S_ACLK(S00_ACLK_1),
        .S_ARESETN(S00_ARESETN_1),
        .S_AXI_araddr(axi_periph_to_s00_couplers_ARADDR),
        .S_AXI_arburst(axi_periph_to_s00_couplers_ARBURST),
        .S_AXI_arcache(axi_periph_to_s00_couplers_ARCACHE),
        .S_AXI_arid(axi_periph_to_s00_couplers_ARID),
        .S_AXI_arlen(axi_periph_to_s00_couplers_ARLEN),
        .S_AXI_arlock(axi_periph_to_s00_couplers_ARLOCK),
        .S_AXI_arprot(axi_periph_to_s00_couplers_ARPROT),
        .S_AXI_arqos(axi_periph_to_s00_couplers_ARQOS),
        .S_AXI_arready(axi_periph_to_s00_couplers_ARREADY),
        .S_AXI_arsize(axi_periph_to_s00_couplers_ARSIZE),
        .S_AXI_arvalid(axi_periph_to_s00_couplers_ARVALID),
        .S_AXI_awaddr(axi_periph_to_s00_couplers_AWADDR),
        .S_AXI_awburst(axi_periph_to_s00_couplers_AWBURST),
        .S_AXI_awcache(axi_periph_to_s00_couplers_AWCACHE),
        .S_AXI_awid(axi_periph_to_s00_couplers_AWID),
        .S_AXI_awlen(axi_periph_to_s00_couplers_AWLEN),
        .S_AXI_awlock(axi_periph_to_s00_couplers_AWLOCK),
        .S_AXI_awprot(axi_periph_to_s00_couplers_AWPROT),
        .S_AXI_awqos(axi_periph_to_s00_couplers_AWQOS),
        .S_AXI_awready(axi_periph_to_s00_couplers_AWREADY),
        .S_AXI_awsize(axi_periph_to_s00_couplers_AWSIZE),
        .S_AXI_awvalid(axi_periph_to_s00_couplers_AWVALID),
        .S_AXI_bid(axi_periph_to_s00_couplers_BID),
        .S_AXI_bready(axi_periph_to_s00_couplers_BREADY),
        .S_AXI_bresp(axi_periph_to_s00_couplers_BRESP),
        .S_AXI_bvalid(axi_periph_to_s00_couplers_BVALID),
        .S_AXI_rdata(axi_periph_to_s00_couplers_RDATA),
        .S_AXI_rid(axi_periph_to_s00_couplers_RID),
        .S_AXI_rlast(axi_periph_to_s00_couplers_RLAST),
        .S_AXI_rready(axi_periph_to_s00_couplers_RREADY),
        .S_AXI_rresp(axi_periph_to_s00_couplers_RRESP),
        .S_AXI_rvalid(axi_periph_to_s00_couplers_RVALID),
        .S_AXI_wdata(axi_periph_to_s00_couplers_WDATA),
        .S_AXI_wid(axi_periph_to_s00_couplers_WID),
        .S_AXI_wlast(axi_periph_to_s00_couplers_WLAST),
        .S_AXI_wready(axi_periph_to_s00_couplers_WREADY),
        .S_AXI_wstrb(axi_periph_to_s00_couplers_WSTRB),
        .S_AXI_wvalid(axi_periph_to_s00_couplers_WVALID));
  system_xbar_0 xbar
       (.aclk(axi_periph_ACLK_net),
        .aresetn(axi_periph_ARESETN_net),
        .m_axi_araddr({xbar_to_m02_couplers_ARADDR,xbar_to_m01_couplers_ARADDR,xbar_to_m00_couplers_ARADDR}),
        .m_axi_arprot({xbar_to_m01_couplers_ARPROT,NLW_xbar_m_axi_arprot_UNCONNECTED[2:0]}),
        .m_axi_arready({xbar_to_m02_couplers_ARREADY,xbar_to_m01_couplers_ARREADY,xbar_to_m00_couplers_ARREADY}),
        .m_axi_arvalid({xbar_to_m02_couplers_ARVALID,xbar_to_m01_couplers_ARVALID,xbar_to_m00_couplers_ARVALID}),
        .m_axi_awaddr({xbar_to_m02_couplers_AWADDR,xbar_to_m01_couplers_AWADDR,xbar_to_m00_couplers_AWADDR}),
        .m_axi_awprot({xbar_to_m01_couplers_AWPROT,NLW_xbar_m_axi_awprot_UNCONNECTED[2:0]}),
        .m_axi_awready({xbar_to_m02_couplers_AWREADY,xbar_to_m01_couplers_AWREADY,xbar_to_m00_couplers_AWREADY}),
        .m_axi_awvalid({xbar_to_m02_couplers_AWVALID,xbar_to_m01_couplers_AWVALID,xbar_to_m00_couplers_AWVALID}),
        .m_axi_bready({xbar_to_m02_couplers_BREADY,xbar_to_m01_couplers_BREADY,xbar_to_m00_couplers_BREADY}),
        .m_axi_bresp({xbar_to_m02_couplers_BRESP,xbar_to_m01_couplers_BRESP,xbar_to_m00_couplers_BRESP}),
        .m_axi_bvalid({xbar_to_m02_couplers_BVALID,xbar_to_m01_couplers_BVALID,xbar_to_m00_couplers_BVALID}),
        .m_axi_rdata({xbar_to_m02_couplers_RDATA,xbar_to_m01_couplers_RDATA,xbar_to_m00_couplers_RDATA}),
        .m_axi_rready({xbar_to_m02_couplers_RREADY,xbar_to_m01_couplers_RREADY,xbar_to_m00_couplers_RREADY}),
        .m_axi_rresp({xbar_to_m02_couplers_RRESP,xbar_to_m01_couplers_RRESP,xbar_to_m00_couplers_RRESP}),
        .m_axi_rvalid({xbar_to_m02_couplers_RVALID,xbar_to_m01_couplers_RVALID,xbar_to_m00_couplers_RVALID}),
        .m_axi_wdata({xbar_to_m02_couplers_WDATA,xbar_to_m01_couplers_WDATA,xbar_to_m00_couplers_WDATA}),
        .m_axi_wready({xbar_to_m02_couplers_WREADY,xbar_to_m01_couplers_WREADY,xbar_to_m00_couplers_WREADY}),
        .m_axi_wstrb({xbar_to_m01_couplers_WSTRB,NLW_xbar_m_axi_wstrb_UNCONNECTED[3:0]}),
        .m_axi_wvalid({xbar_to_m02_couplers_WVALID,xbar_to_m01_couplers_WVALID,xbar_to_m00_couplers_WVALID}),
        .s_axi_araddr(s00_couplers_to_xbar_ARADDR),
        .s_axi_arprot(s00_couplers_to_xbar_ARPROT),
        .s_axi_arready(s00_couplers_to_xbar_ARREADY),
        .s_axi_arvalid(s00_couplers_to_xbar_ARVALID),
        .s_axi_awaddr(s00_couplers_to_xbar_AWADDR),
        .s_axi_awprot(s00_couplers_to_xbar_AWPROT),
        .s_axi_awready(s00_couplers_to_xbar_AWREADY),
        .s_axi_awvalid(s00_couplers_to_xbar_AWVALID),
        .s_axi_bready(s00_couplers_to_xbar_BREADY),
        .s_axi_bresp(s00_couplers_to_xbar_BRESP),
        .s_axi_bvalid(s00_couplers_to_xbar_BVALID),
        .s_axi_rdata(s00_couplers_to_xbar_RDATA),
        .s_axi_rready(s00_couplers_to_xbar_RREADY),
        .s_axi_rresp(s00_couplers_to_xbar_RRESP),
        .s_axi_rvalid(s00_couplers_to_xbar_RVALID),
        .s_axi_wdata(s00_couplers_to_xbar_WDATA),
        .s_axi_wready(s00_couplers_to_xbar_WREADY),
        .s_axi_wstrb(s00_couplers_to_xbar_WSTRB),
        .s_axi_wvalid(s00_couplers_to_xbar_WVALID));
endmodule

module system_vdma_mm2s_intercon_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arburst,
    M00_AXI_arcache,
    M00_AXI_arlen,
    M00_AXI_arlock,
    M00_AXI_arprot,
    M00_AXI_arqos,
    M00_AXI_arready,
    M00_AXI_arsize,
    M00_AXI_arvalid,
    M00_AXI_rdata,
    M00_AXI_rlast,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arlen,
    S00_AXI_arprot,
    S00_AXI_arready,
    S00_AXI_arsize,
    S00_AXI_arvalid,
    S00_AXI_rdata,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid);
  input ACLK;
  input [0:0]ARESETN;
  input M00_ACLK;
  input [0:0]M00_ARESETN;
  output [31:0]M00_AXI_araddr;
  output [1:0]M00_AXI_arburst;
  output [3:0]M00_AXI_arcache;
  output [3:0]M00_AXI_arlen;
  output [1:0]M00_AXI_arlock;
  output [2:0]M00_AXI_arprot;
  output [3:0]M00_AXI_arqos;
  input M00_AXI_arready;
  output [2:0]M00_AXI_arsize;
  output M00_AXI_arvalid;
  input [63:0]M00_AXI_rdata;
  input M00_AXI_rlast;
  output M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input M00_AXI_rvalid;
  input S00_ACLK;
  input [0:0]S00_ARESETN;
  input [31:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [7:0]S00_AXI_arlen;
  input [2:0]S00_AXI_arprot;
  output S00_AXI_arready;
  input [2:0]S00_AXI_arsize;
  input S00_AXI_arvalid;
  output [63:0]S00_AXI_rdata;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;

  wire S00_ACLK_1;
  wire [0:0]S00_ARESETN_1;
  wire [31:0]s00_couplers_to_vdma_mm2s_intercon_ARADDR;
  wire [1:0]s00_couplers_to_vdma_mm2s_intercon_ARBURST;
  wire [3:0]s00_couplers_to_vdma_mm2s_intercon_ARCACHE;
  wire [3:0]s00_couplers_to_vdma_mm2s_intercon_ARLEN;
  wire [1:0]s00_couplers_to_vdma_mm2s_intercon_ARLOCK;
  wire [2:0]s00_couplers_to_vdma_mm2s_intercon_ARPROT;
  wire [3:0]s00_couplers_to_vdma_mm2s_intercon_ARQOS;
  wire s00_couplers_to_vdma_mm2s_intercon_ARREADY;
  wire [2:0]s00_couplers_to_vdma_mm2s_intercon_ARSIZE;
  wire s00_couplers_to_vdma_mm2s_intercon_ARVALID;
  wire [63:0]s00_couplers_to_vdma_mm2s_intercon_RDATA;
  wire s00_couplers_to_vdma_mm2s_intercon_RLAST;
  wire s00_couplers_to_vdma_mm2s_intercon_RREADY;
  wire [1:0]s00_couplers_to_vdma_mm2s_intercon_RRESP;
  wire s00_couplers_to_vdma_mm2s_intercon_RVALID;
  wire vdma_mm2s_intercon_ACLK_net;
  wire [0:0]vdma_mm2s_intercon_ARESETN_net;
  wire [31:0]vdma_mm2s_intercon_to_s00_couplers_ARADDR;
  wire [1:0]vdma_mm2s_intercon_to_s00_couplers_ARBURST;
  wire [3:0]vdma_mm2s_intercon_to_s00_couplers_ARCACHE;
  wire [7:0]vdma_mm2s_intercon_to_s00_couplers_ARLEN;
  wire [2:0]vdma_mm2s_intercon_to_s00_couplers_ARPROT;
  wire vdma_mm2s_intercon_to_s00_couplers_ARREADY;
  wire [2:0]vdma_mm2s_intercon_to_s00_couplers_ARSIZE;
  wire vdma_mm2s_intercon_to_s00_couplers_ARVALID;
  wire [63:0]vdma_mm2s_intercon_to_s00_couplers_RDATA;
  wire vdma_mm2s_intercon_to_s00_couplers_RLAST;
  wire vdma_mm2s_intercon_to_s00_couplers_RREADY;
  wire [1:0]vdma_mm2s_intercon_to_s00_couplers_RRESP;
  wire vdma_mm2s_intercon_to_s00_couplers_RVALID;

  assign M00_AXI_araddr[31:0] = s00_couplers_to_vdma_mm2s_intercon_ARADDR;
  assign M00_AXI_arburst[1:0] = s00_couplers_to_vdma_mm2s_intercon_ARBURST;
  assign M00_AXI_arcache[3:0] = s00_couplers_to_vdma_mm2s_intercon_ARCACHE;
  assign M00_AXI_arlen[3:0] = s00_couplers_to_vdma_mm2s_intercon_ARLEN;
  assign M00_AXI_arlock[1:0] = s00_couplers_to_vdma_mm2s_intercon_ARLOCK;
  assign M00_AXI_arprot[2:0] = s00_couplers_to_vdma_mm2s_intercon_ARPROT;
  assign M00_AXI_arqos[3:0] = s00_couplers_to_vdma_mm2s_intercon_ARQOS;
  assign M00_AXI_arsize[2:0] = s00_couplers_to_vdma_mm2s_intercon_ARSIZE;
  assign M00_AXI_arvalid = s00_couplers_to_vdma_mm2s_intercon_ARVALID;
  assign M00_AXI_rready = s00_couplers_to_vdma_mm2s_intercon_RREADY;
  assign S00_ACLK_1 = S00_ACLK;
  assign S00_ARESETN_1 = S00_ARESETN[0];
  assign S00_AXI_arready = vdma_mm2s_intercon_to_s00_couplers_ARREADY;
  assign S00_AXI_rdata[63:0] = vdma_mm2s_intercon_to_s00_couplers_RDATA;
  assign S00_AXI_rlast = vdma_mm2s_intercon_to_s00_couplers_RLAST;
  assign S00_AXI_rresp[1:0] = vdma_mm2s_intercon_to_s00_couplers_RRESP;
  assign S00_AXI_rvalid = vdma_mm2s_intercon_to_s00_couplers_RVALID;
  assign s00_couplers_to_vdma_mm2s_intercon_ARREADY = M00_AXI_arready;
  assign s00_couplers_to_vdma_mm2s_intercon_RDATA = M00_AXI_rdata[63:0];
  assign s00_couplers_to_vdma_mm2s_intercon_RLAST = M00_AXI_rlast;
  assign s00_couplers_to_vdma_mm2s_intercon_RRESP = M00_AXI_rresp[1:0];
  assign s00_couplers_to_vdma_mm2s_intercon_RVALID = M00_AXI_rvalid;
  assign vdma_mm2s_intercon_ACLK_net = M00_ACLK;
  assign vdma_mm2s_intercon_ARESETN_net = M00_ARESETN[0];
  assign vdma_mm2s_intercon_to_s00_couplers_ARADDR = S00_AXI_araddr[31:0];
  assign vdma_mm2s_intercon_to_s00_couplers_ARBURST = S00_AXI_arburst[1:0];
  assign vdma_mm2s_intercon_to_s00_couplers_ARCACHE = S00_AXI_arcache[3:0];
  assign vdma_mm2s_intercon_to_s00_couplers_ARLEN = S00_AXI_arlen[7:0];
  assign vdma_mm2s_intercon_to_s00_couplers_ARPROT = S00_AXI_arprot[2:0];
  assign vdma_mm2s_intercon_to_s00_couplers_ARSIZE = S00_AXI_arsize[2:0];
  assign vdma_mm2s_intercon_to_s00_couplers_ARVALID = S00_AXI_arvalid;
  assign vdma_mm2s_intercon_to_s00_couplers_RREADY = S00_AXI_rready;
  s00_couplers_imp_16HO73N s00_couplers
       (.M_ACLK(vdma_mm2s_intercon_ACLK_net),
        .M_ARESETN(vdma_mm2s_intercon_ARESETN_net),
        .M_AXI_araddr(s00_couplers_to_vdma_mm2s_intercon_ARADDR),
        .M_AXI_arburst(s00_couplers_to_vdma_mm2s_intercon_ARBURST),
        .M_AXI_arcache(s00_couplers_to_vdma_mm2s_intercon_ARCACHE),
        .M_AXI_arlen(s00_couplers_to_vdma_mm2s_intercon_ARLEN),
        .M_AXI_arlock(s00_couplers_to_vdma_mm2s_intercon_ARLOCK),
        .M_AXI_arprot(s00_couplers_to_vdma_mm2s_intercon_ARPROT),
        .M_AXI_arqos(s00_couplers_to_vdma_mm2s_intercon_ARQOS),
        .M_AXI_arready(s00_couplers_to_vdma_mm2s_intercon_ARREADY),
        .M_AXI_arsize(s00_couplers_to_vdma_mm2s_intercon_ARSIZE),
        .M_AXI_arvalid(s00_couplers_to_vdma_mm2s_intercon_ARVALID),
        .M_AXI_rdata(s00_couplers_to_vdma_mm2s_intercon_RDATA),
        .M_AXI_rlast(s00_couplers_to_vdma_mm2s_intercon_RLAST),
        .M_AXI_rready(s00_couplers_to_vdma_mm2s_intercon_RREADY),
        .M_AXI_rresp(s00_couplers_to_vdma_mm2s_intercon_RRESP),
        .M_AXI_rvalid(s00_couplers_to_vdma_mm2s_intercon_RVALID),
        .S_ACLK(S00_ACLK_1),
        .S_ARESETN(S00_ARESETN_1),
        .S_AXI_araddr(vdma_mm2s_intercon_to_s00_couplers_ARADDR),
        .S_AXI_arburst(vdma_mm2s_intercon_to_s00_couplers_ARBURST),
        .S_AXI_arcache(vdma_mm2s_intercon_to_s00_couplers_ARCACHE),
        .S_AXI_arlen(vdma_mm2s_intercon_to_s00_couplers_ARLEN),
        .S_AXI_arprot(vdma_mm2s_intercon_to_s00_couplers_ARPROT),
        .S_AXI_arready(vdma_mm2s_intercon_to_s00_couplers_ARREADY),
        .S_AXI_arsize(vdma_mm2s_intercon_to_s00_couplers_ARSIZE),
        .S_AXI_arvalid(vdma_mm2s_intercon_to_s00_couplers_ARVALID),
        .S_AXI_rdata(vdma_mm2s_intercon_to_s00_couplers_RDATA),
        .S_AXI_rlast(vdma_mm2s_intercon_to_s00_couplers_RLAST),
        .S_AXI_rready(vdma_mm2s_intercon_to_s00_couplers_RREADY),
        .S_AXI_rresp(vdma_mm2s_intercon_to_s00_couplers_RRESP),
        .S_AXI_rvalid(vdma_mm2s_intercon_to_s00_couplers_RVALID));
endmodule

module system_vdma_s2mm_intercon_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_awaddr,
    M00_AXI_awburst,
    M00_AXI_awcache,
    M00_AXI_awlen,
    M00_AXI_awlock,
    M00_AXI_awprot,
    M00_AXI_awqos,
    M00_AXI_awready,
    M00_AXI_awsize,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_wdata,
    M00_AXI_wlast,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awlen,
    S00_AXI_awprot,
    S00_AXI_awready,
    S00_AXI_awsize,
    S00_AXI_awvalid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input [0:0]ARESETN;
  input M00_ACLK;
  input [0:0]M00_ARESETN;
  output [31:0]M00_AXI_awaddr;
  output [1:0]M00_AXI_awburst;
  output [3:0]M00_AXI_awcache;
  output [3:0]M00_AXI_awlen;
  output [1:0]M00_AXI_awlock;
  output [2:0]M00_AXI_awprot;
  output [3:0]M00_AXI_awqos;
  input M00_AXI_awready;
  output [2:0]M00_AXI_awsize;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  output [63:0]M00_AXI_wdata;
  output M00_AXI_wlast;
  input M00_AXI_wready;
  output [7:0]M00_AXI_wstrb;
  output M00_AXI_wvalid;
  input S00_ACLK;
  input [0:0]S00_ARESETN;
  input [31:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [7:0]S00_AXI_awlen;
  input [2:0]S00_AXI_awprot;
  output S00_AXI_awready;
  input [2:0]S00_AXI_awsize;
  input S00_AXI_awvalid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  input [31:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire S00_ACLK_1;
  wire [0:0]S00_ARESETN_1;
  wire [31:0]s00_couplers_to_vdma_s2mm_intercon_AWADDR;
  wire [1:0]s00_couplers_to_vdma_s2mm_intercon_AWBURST;
  wire [3:0]s00_couplers_to_vdma_s2mm_intercon_AWCACHE;
  wire [3:0]s00_couplers_to_vdma_s2mm_intercon_AWLEN;
  wire [1:0]s00_couplers_to_vdma_s2mm_intercon_AWLOCK;
  wire [2:0]s00_couplers_to_vdma_s2mm_intercon_AWPROT;
  wire [3:0]s00_couplers_to_vdma_s2mm_intercon_AWQOS;
  wire s00_couplers_to_vdma_s2mm_intercon_AWREADY;
  wire [2:0]s00_couplers_to_vdma_s2mm_intercon_AWSIZE;
  wire s00_couplers_to_vdma_s2mm_intercon_AWVALID;
  wire s00_couplers_to_vdma_s2mm_intercon_BREADY;
  wire [1:0]s00_couplers_to_vdma_s2mm_intercon_BRESP;
  wire s00_couplers_to_vdma_s2mm_intercon_BVALID;
  wire [63:0]s00_couplers_to_vdma_s2mm_intercon_WDATA;
  wire s00_couplers_to_vdma_s2mm_intercon_WLAST;
  wire s00_couplers_to_vdma_s2mm_intercon_WREADY;
  wire [7:0]s00_couplers_to_vdma_s2mm_intercon_WSTRB;
  wire s00_couplers_to_vdma_s2mm_intercon_WVALID;
  wire vdma_s2mm_intercon_ACLK_net;
  wire [0:0]vdma_s2mm_intercon_ARESETN_net;
  wire [31:0]vdma_s2mm_intercon_to_s00_couplers_AWADDR;
  wire [1:0]vdma_s2mm_intercon_to_s00_couplers_AWBURST;
  wire [3:0]vdma_s2mm_intercon_to_s00_couplers_AWCACHE;
  wire [7:0]vdma_s2mm_intercon_to_s00_couplers_AWLEN;
  wire [2:0]vdma_s2mm_intercon_to_s00_couplers_AWPROT;
  wire vdma_s2mm_intercon_to_s00_couplers_AWREADY;
  wire [2:0]vdma_s2mm_intercon_to_s00_couplers_AWSIZE;
  wire vdma_s2mm_intercon_to_s00_couplers_AWVALID;
  wire vdma_s2mm_intercon_to_s00_couplers_BREADY;
  wire [1:0]vdma_s2mm_intercon_to_s00_couplers_BRESP;
  wire vdma_s2mm_intercon_to_s00_couplers_BVALID;
  wire [31:0]vdma_s2mm_intercon_to_s00_couplers_WDATA;
  wire vdma_s2mm_intercon_to_s00_couplers_WLAST;
  wire vdma_s2mm_intercon_to_s00_couplers_WREADY;
  wire [3:0]vdma_s2mm_intercon_to_s00_couplers_WSTRB;
  wire vdma_s2mm_intercon_to_s00_couplers_WVALID;

  assign M00_AXI_awaddr[31:0] = s00_couplers_to_vdma_s2mm_intercon_AWADDR;
  assign M00_AXI_awburst[1:0] = s00_couplers_to_vdma_s2mm_intercon_AWBURST;
  assign M00_AXI_awcache[3:0] = s00_couplers_to_vdma_s2mm_intercon_AWCACHE;
  assign M00_AXI_awlen[3:0] = s00_couplers_to_vdma_s2mm_intercon_AWLEN;
  assign M00_AXI_awlock[1:0] = s00_couplers_to_vdma_s2mm_intercon_AWLOCK;
  assign M00_AXI_awprot[2:0] = s00_couplers_to_vdma_s2mm_intercon_AWPROT;
  assign M00_AXI_awqos[3:0] = s00_couplers_to_vdma_s2mm_intercon_AWQOS;
  assign M00_AXI_awsize[2:0] = s00_couplers_to_vdma_s2mm_intercon_AWSIZE;
  assign M00_AXI_awvalid = s00_couplers_to_vdma_s2mm_intercon_AWVALID;
  assign M00_AXI_bready = s00_couplers_to_vdma_s2mm_intercon_BREADY;
  assign M00_AXI_wdata[63:0] = s00_couplers_to_vdma_s2mm_intercon_WDATA;
  assign M00_AXI_wlast = s00_couplers_to_vdma_s2mm_intercon_WLAST;
  assign M00_AXI_wstrb[7:0] = s00_couplers_to_vdma_s2mm_intercon_WSTRB;
  assign M00_AXI_wvalid = s00_couplers_to_vdma_s2mm_intercon_WVALID;
  assign S00_ACLK_1 = S00_ACLK;
  assign S00_ARESETN_1 = S00_ARESETN[0];
  assign S00_AXI_awready = vdma_s2mm_intercon_to_s00_couplers_AWREADY;
  assign S00_AXI_bresp[1:0] = vdma_s2mm_intercon_to_s00_couplers_BRESP;
  assign S00_AXI_bvalid = vdma_s2mm_intercon_to_s00_couplers_BVALID;
  assign S00_AXI_wready = vdma_s2mm_intercon_to_s00_couplers_WREADY;
  assign s00_couplers_to_vdma_s2mm_intercon_AWREADY = M00_AXI_awready;
  assign s00_couplers_to_vdma_s2mm_intercon_BRESP = M00_AXI_bresp[1:0];
  assign s00_couplers_to_vdma_s2mm_intercon_BVALID = M00_AXI_bvalid;
  assign s00_couplers_to_vdma_s2mm_intercon_WREADY = M00_AXI_wready;
  assign vdma_s2mm_intercon_ACLK_net = M00_ACLK;
  assign vdma_s2mm_intercon_ARESETN_net = M00_ARESETN[0];
  assign vdma_s2mm_intercon_to_s00_couplers_AWADDR = S00_AXI_awaddr[31:0];
  assign vdma_s2mm_intercon_to_s00_couplers_AWBURST = S00_AXI_awburst[1:0];
  assign vdma_s2mm_intercon_to_s00_couplers_AWCACHE = S00_AXI_awcache[3:0];
  assign vdma_s2mm_intercon_to_s00_couplers_AWLEN = S00_AXI_awlen[7:0];
  assign vdma_s2mm_intercon_to_s00_couplers_AWPROT = S00_AXI_awprot[2:0];
  assign vdma_s2mm_intercon_to_s00_couplers_AWSIZE = S00_AXI_awsize[2:0];
  assign vdma_s2mm_intercon_to_s00_couplers_AWVALID = S00_AXI_awvalid;
  assign vdma_s2mm_intercon_to_s00_couplers_BREADY = S00_AXI_bready;
  assign vdma_s2mm_intercon_to_s00_couplers_WDATA = S00_AXI_wdata[31:0];
  assign vdma_s2mm_intercon_to_s00_couplers_WLAST = S00_AXI_wlast;
  assign vdma_s2mm_intercon_to_s00_couplers_WSTRB = S00_AXI_wstrb[3:0];
  assign vdma_s2mm_intercon_to_s00_couplers_WVALID = S00_AXI_wvalid;
  s00_couplers_imp_1KTB6MO s00_couplers
       (.M_ACLK(vdma_s2mm_intercon_ACLK_net),
        .M_ARESETN(vdma_s2mm_intercon_ARESETN_net),
        .M_AXI_awaddr(s00_couplers_to_vdma_s2mm_intercon_AWADDR),
        .M_AXI_awburst(s00_couplers_to_vdma_s2mm_intercon_AWBURST),
        .M_AXI_awcache(s00_couplers_to_vdma_s2mm_intercon_AWCACHE),
        .M_AXI_awlen(s00_couplers_to_vdma_s2mm_intercon_AWLEN),
        .M_AXI_awlock(s00_couplers_to_vdma_s2mm_intercon_AWLOCK),
        .M_AXI_awprot(s00_couplers_to_vdma_s2mm_intercon_AWPROT),
        .M_AXI_awqos(s00_couplers_to_vdma_s2mm_intercon_AWQOS),
        .M_AXI_awready(s00_couplers_to_vdma_s2mm_intercon_AWREADY),
        .M_AXI_awsize(s00_couplers_to_vdma_s2mm_intercon_AWSIZE),
        .M_AXI_awvalid(s00_couplers_to_vdma_s2mm_intercon_AWVALID),
        .M_AXI_bready(s00_couplers_to_vdma_s2mm_intercon_BREADY),
        .M_AXI_bresp(s00_couplers_to_vdma_s2mm_intercon_BRESP),
        .M_AXI_bvalid(s00_couplers_to_vdma_s2mm_intercon_BVALID),
        .M_AXI_wdata(s00_couplers_to_vdma_s2mm_intercon_WDATA),
        .M_AXI_wlast(s00_couplers_to_vdma_s2mm_intercon_WLAST),
        .M_AXI_wready(s00_couplers_to_vdma_s2mm_intercon_WREADY),
        .M_AXI_wstrb(s00_couplers_to_vdma_s2mm_intercon_WSTRB),
        .M_AXI_wvalid(s00_couplers_to_vdma_s2mm_intercon_WVALID),
        .S_ACLK(S00_ACLK_1),
        .S_ARESETN(S00_ARESETN_1),
        .S_AXI_awaddr(vdma_s2mm_intercon_to_s00_couplers_AWADDR),
        .S_AXI_awburst(vdma_s2mm_intercon_to_s00_couplers_AWBURST),
        .S_AXI_awcache(vdma_s2mm_intercon_to_s00_couplers_AWCACHE),
        .S_AXI_awlen(vdma_s2mm_intercon_to_s00_couplers_AWLEN),
        .S_AXI_awprot(vdma_s2mm_intercon_to_s00_couplers_AWPROT),
        .S_AXI_awready(vdma_s2mm_intercon_to_s00_couplers_AWREADY),
        .S_AXI_awsize(vdma_s2mm_intercon_to_s00_couplers_AWSIZE),
        .S_AXI_awvalid(vdma_s2mm_intercon_to_s00_couplers_AWVALID),
        .S_AXI_bready(vdma_s2mm_intercon_to_s00_couplers_BREADY),
        .S_AXI_bresp(vdma_s2mm_intercon_to_s00_couplers_BRESP),
        .S_AXI_bvalid(vdma_s2mm_intercon_to_s00_couplers_BVALID),
        .S_AXI_wdata(vdma_s2mm_intercon_to_s00_couplers_WDATA),
        .S_AXI_wlast(vdma_s2mm_intercon_to_s00_couplers_WLAST),
        .S_AXI_wready(vdma_s2mm_intercon_to_s00_couplers_WREADY),
        .S_AXI_wstrb(vdma_s2mm_intercon_to_s00_couplers_WSTRB),
        .S_AXI_wvalid(vdma_s2mm_intercon_to_s00_couplers_WVALID));
endmodule
