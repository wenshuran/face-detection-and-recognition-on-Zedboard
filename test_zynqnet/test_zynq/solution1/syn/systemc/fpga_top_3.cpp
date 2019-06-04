#include "fpga_top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fpga_top::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_memorybus_AWVALID\" :  \"" << m_axi_memorybus_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_AWREADY\" :  \"" << m_axi_memorybus_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWADDR\" :  \"" << m_axi_memorybus_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWID\" :  \"" << m_axi_memorybus_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWLEN\" :  \"" << m_axi_memorybus_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWSIZE\" :  \"" << m_axi_memorybus_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWBURST\" :  \"" << m_axi_memorybus_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWLOCK\" :  \"" << m_axi_memorybus_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWCACHE\" :  \"" << m_axi_memorybus_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWPROT\" :  \"" << m_axi_memorybus_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWQOS\" :  \"" << m_axi_memorybus_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWREGION\" :  \"" << m_axi_memorybus_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_AWUSER\" :  \"" << m_axi_memorybus_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_WVALID\" :  \"" << m_axi_memorybus_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_WREADY\" :  \"" << m_axi_memorybus_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_WDATA\" :  \"" << m_axi_memorybus_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_WSTRB\" :  \"" << m_axi_memorybus_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_WLAST\" :  \"" << m_axi_memorybus_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_WID\" :  \"" << m_axi_memorybus_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_WUSER\" :  \"" << m_axi_memorybus_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARVALID\" :  \"" << m_axi_memorybus_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_ARREADY\" :  \"" << m_axi_memorybus_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARADDR\" :  \"" << m_axi_memorybus_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARID\" :  \"" << m_axi_memorybus_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARLEN\" :  \"" << m_axi_memorybus_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARSIZE\" :  \"" << m_axi_memorybus_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARBURST\" :  \"" << m_axi_memorybus_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARLOCK\" :  \"" << m_axi_memorybus_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARCACHE\" :  \"" << m_axi_memorybus_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARPROT\" :  \"" << m_axi_memorybus_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARQOS\" :  \"" << m_axi_memorybus_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARREGION\" :  \"" << m_axi_memorybus_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_ARUSER\" :  \"" << m_axi_memorybus_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_RVALID\" :  \"" << m_axi_memorybus_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_RREADY\" :  \"" << m_axi_memorybus_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_RDATA\" :  \"" << m_axi_memorybus_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_RLAST\" :  \"" << m_axi_memorybus_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_RID\" :  \"" << m_axi_memorybus_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_RUSER\" :  \"" << m_axi_memorybus_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_RRESP\" :  \"" << m_axi_memorybus_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_BVALID\" :  \"" << m_axi_memorybus_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_memorybus_BREADY\" :  \"" << m_axi_memorybus_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_BRESP\" :  \"" << m_axi_memorybus_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_BID\" :  \"" << m_axi_memorybus_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_memorybus_BUSER\" :  \"" << m_axi_memorybus_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_AWVALID\" :  \"" << s_axi_axilite_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_AWREADY\" :  \"" << s_axi_axilite_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_AWADDR\" :  \"" << s_axi_axilite_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_WVALID\" :  \"" << s_axi_axilite_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_WREADY\" :  \"" << s_axi_axilite_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_WDATA\" :  \"" << s_axi_axilite_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_WSTRB\" :  \"" << s_axi_axilite_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_ARVALID\" :  \"" << s_axi_axilite_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_ARREADY\" :  \"" << s_axi_axilite_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_ARADDR\" :  \"" << s_axi_axilite_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_RVALID\" :  \"" << s_axi_axilite_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_RREADY\" :  \"" << s_axi_axilite_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_RDATA\" :  \"" << s_axi_axilite_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_RRESP\" :  \"" << s_axi_axilite_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_BVALID\" :  \"" << s_axi_axilite_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_axilite_BREADY\" :  \"" << s_axi_axilite_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_axilite_BRESP\" :  \"" << s_axi_axilite_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

