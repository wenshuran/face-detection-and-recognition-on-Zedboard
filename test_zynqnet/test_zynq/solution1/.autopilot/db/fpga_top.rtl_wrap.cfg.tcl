set lang "C++"
set moduleName "fpga_top"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortName5 "WeightsCache::write_addr"
set BitWidth5 "32"
set ArrayOpt5 ""
set Const5 "0"
set Volatile5 "0"
set Pointer5 "0"
set Reference5 "0"
set Initializer5 ""
set External5 0
set Dims5 [list 0]
set Interface5 "wire"
set SpaceName50 "WeightsCache"
set NameSpace5 [list  [list  space $SpaceName50] ]
set DataType5 "[list ap_uint 19 ]"
set Port5 [list $PortName5 $Interface5 $DataType5 $Pointer5 $Dims5 $Const5 $Volatile5 $ArrayOpt5 $Initializer5 $External5 $NameSpace5]
lappend globalVariable $Port5
set PortName6 "WeightsCache::num_weights"
set BitWidth6 "32"
set ArrayOpt6 ""
set Const6 "0"
set Volatile6 "0"
set Pointer6 "0"
set Reference6 "0"
set Initializer6 ""
set External6 0
set Dims6 [list 0]
set Interface6 "wire"
set SpaceName60 "WeightsCache"
set NameSpace6 [list  [list  space $SpaceName60] ]
set DataType6 "[list ap_uint 19 ]"
set Port6 [list $PortName6 $Interface6 $DataType6 $Pointer6 $Dims6 $Const6 $Volatile6 $ArrayOpt6 $Initializer6 $External6 $NameSpace6]
lappend globalVariable $Port6
set PortName7 "WeightsCache::kernel"
set BitWidth7 "8"
set ArrayOpt7 ""
set Const7 "0"
set Volatile7 "0"
set Pointer7 "0"
set Reference7 "0"
set Initializer7 ""
set External7 0
set Dims7 [list 0]
set Interface7 "wire"
set SpaceName70 "WeightsCache"
set NameSpace7 [list  [list  space $SpaceName70] ]
set DataType7 "[list ap_uint 2 ]"
set Port7 [list $PortName7 $Interface7 $DataType7 $Pointer7 $Dims7 $Const7 $Volatile7 $ArrayOpt7 $Initializer7 $External7 $NameSpace7]
lappend globalVariable $Port7
set PortName8 "WeightsCache::ch_out"
set BitWidth8 "16"
set ArrayOpt8 ""
set Const8 "0"
set Volatile8 "0"
set Pointer8 "0"
set Reference8 "0"
set Initializer8 ""
set External8 0
set Dims8 [list 0]
set Interface8 "wire"
set SpaceName80 "WeightsCache"
set NameSpace8 [list  [list  space $SpaceName80] ]
set DataType8 "[list ap_uint 10 ]"
set Port8 [list $PortName8 $Interface8 $DataType8 $Pointer8 $Dims8 $Const8 $Volatile8 $ArrayOpt8 $Initializer8 $External8 $NameSpace8]
lappend globalVariable $Port8
set PortName9 "WeightsCache::ch_in"
set BitWidth9 "16"
set ArrayOpt9 ""
set Const9 "0"
set Volatile9 "0"
set Pointer9 "0"
set Reference9 "0"
set Initializer9 ""
set External9 0
set Dims9 [list 0]
set Interface9 "wire"
set SpaceName90 "WeightsCache"
set NameSpace9 [list  [list  space $SpaceName90] ]
set DataType9 "[list ap_uint 10 ]"
set Port9 [list $PortName9 $Interface9 $DataType9 $Pointer9 $Dims9 $Const9 $Volatile9 $ArrayOpt9 $Initializer9 $External9 $NameSpace9]
lappend globalVariable $Port9
set PortName10 "WeightsCache::WBRAM"
set BitWidth10 "14155776"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Initializer10 ""
set External10 0
set Dims10 [list  16 3 1024 9]
set Interface10 "wire"
set SpaceName100 "WeightsCache"
set NameSpace10 [list  [list  space $SpaceName100] ]
set DataType10 "float"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10 $Initializer10 $External10 $NameSpace10]
lappend globalVariable $Port10
set PortName11 "ProcessingElement::relu"
set BitWidth11 "8"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Initializer11 ""
set External11 0
set Dims11 [list 0]
set Interface11 "wire"
set SpaceName110 "ProcessingElement"
set NameSpace11 [list  [list  space $SpaceName110] ]
set DataType11 "bool"
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11 $Initializer11 $External11 $NameSpace11]
lappend globalVariable $Port11
set PortName12 "ProcessingElement::kernel"
set BitWidth12 "8"
set ArrayOpt12 ""
set Const12 "0"
set Volatile12 "0"
set Pointer12 "0"
set Reference12 "0"
set Initializer12 ""
set External12 0
set Dims12 [list 0]
set Interface12 "wire"
set SpaceName120 "ProcessingElement"
set NameSpace12 [list  [list  space $SpaceName120] ]
set DataType12 "[list ap_uint 2 ]"
set Port12 [list $PortName12 $Interface12 $DataType12 $Pointer12 $Dims12 $Const12 $Volatile12 $ArrayOpt12 $Initializer12 $External12 $NameSpace12]
lappend globalVariable $Port12
set PortName13 "OutputCache::OBRAM"
set BitWidth13 "16384"
set ArrayOpt13 ""
set Const13 "0"
set Volatile13 "0"
set Pointer13 "0"
set Reference13 "0"
set Initializer13 ""
set External13 0
set Dims13 [list  512]
set Interface13 "wire"
set SpaceName130 "OutputCache"
set NameSpace13 [list  [list  space $SpaceName130] ]
set DataType13 "float"
set Port13 [list $PortName13 $Interface13 $DataType13 $Pointer13 $Dims13 $Const13 $Volatile13 $ArrayOpt13 $Initializer13 $External13 $NameSpace13]
lappend globalVariable $Port13
set PortName14 "MemoryController::width_out"
set BitWidth14 "16"
set ArrayOpt14 ""
set Const14 "0"
set Volatile14 "0"
set Pointer14 "0"
set Reference14 "0"
set Initializer14 ""
set External14 0
set Dims14 [list 0]
set Interface14 "wire"
set SpaceName140 "MemoryController"
set NameSpace14 [list  [list  space $SpaceName140] ]
set DataType14 "[list ap_uint 9 ]"
set Port14 [list $PortName14 $Interface14 $DataType14 $Pointer14 $Dims14 $Const14 $Volatile14 $ArrayOpt14 $Initializer14 $External14 $NameSpace14]
lappend globalVariable $Port14
set PortName15 "MemoryController::pixels_per_row"
set BitWidth15 "16"
set ArrayOpt15 ""
set Const15 "0"
set Volatile15 "0"
set Pointer15 "0"
set Reference15 "0"
set Initializer15 ""
set External15 0
set Dims15 [list 0]
set Interface15 "wire"
set SpaceName150 "MemoryController"
set NameSpace15 [list  [list  space $SpaceName150] ]
set DataType15 "[list ap_uint 14 ]"
set Port15 [list $PortName15 $Interface15 $DataType15 $Pointer15 $Dims15 $Const15 $Volatile15 $ArrayOpt15 $Initializer15 $External15 $NameSpace15]
lappend globalVariable $Port15
set PortName16 "MemoryController::pixel_output_offset"
set BitWidth16 "32"
set ArrayOpt16 ""
set Const16 "0"
set Volatile16 "0"
set Pointer16 "0"
set Reference16 "0"
set Initializer16 ""
set External16 0
set Dims16 [list 0]
set Interface16 "wire"
set SpaceName160 "MemoryController"
set NameSpace16 [list  [list  space $SpaceName160] ]
set DataType16 "[list ap_uint 23 ]"
set Port16 [list $PortName16 $Interface16 $DataType16 $Pointer16 $Dims16 $Const16 $Volatile16 $ArrayOpt16 $Initializer16 $External16 $NameSpace16]
lappend globalVariable $Port16
set PortName17 "MemoryController::layer_weights_offset"
set BitWidth17 "32"
set ArrayOpt17 ""
set Const17 "0"
set Volatile17 "0"
set Pointer17 "0"
set Reference17 "0"
set Initializer17 ""
set External17 0
set Dims17 [list 0]
set Interface17 "wire"
set SpaceName170 "MemoryController"
set NameSpace17 [list  [list  space $SpaceName170] ]
set DataType17 "[list ap_uint 23 ]"
set Port17 [list $PortName17 $Interface17 $DataType17 $Pointer17 $Dims17 $Const17 $Volatile17 $ArrayOpt17 $Initializer17 $External17 $NameSpace17]
lappend globalVariable $Port17
set PortName18 "MemoryController::layer_pixel_offset"
set BitWidth18 "32"
set ArrayOpt18 ""
set Const18 "0"
set Volatile18 "0"
set Pointer18 "0"
set Reference18 "0"
set Initializer18 ""
set External18 0
set Dims18 [list 0]
set Interface18 "wire"
set SpaceName180 "MemoryController"
set NameSpace18 [list  [list  space $SpaceName180] ]
set DataType18 "[list ap_uint 23 ]"
set Port18 [list $PortName18 $Interface18 $DataType18 $Pointer18 $Dims18 $Const18 $Volatile18 $ArrayOpt18 $Initializer18 $External18 $NameSpace18]
lappend globalVariable $Port18
set PortName19 "MemoryController::layer_output_offset"
set BitWidth19 "32"
set ArrayOpt19 ""
set Const19 "0"
set Volatile19 "0"
set Pointer19 "0"
set Reference19 "0"
set Initializer19 ""
set External19 0
set Dims19 [list 0]
set Interface19 "wire"
set SpaceName190 "MemoryController"
set NameSpace19 [list  [list  space $SpaceName190] ]
set DataType19 "[list ap_uint 23 ]"
set Port19 [list $PortName19 $Interface19 $DataType19 $Pointer19 $Dims19 $Const19 $Volatile19 $ArrayOpt19 $Initializer19 $External19 $NameSpace19]
lappend globalVariable $Port19
set PortName20 "MemoryController::layer_input_offset"
set BitWidth20 "32"
set ArrayOpt20 ""
set Const20 "0"
set Volatile20 "0"
set Pointer20 "0"
set Reference20 "0"
set Initializer20 ""
set External20 0
set Dims20 [list 0]
set Interface20 "wire"
set SpaceName200 "MemoryController"
set NameSpace20 [list  [list  space $SpaceName200] ]
set DataType20 "[list ap_uint 23 ]"
set Port20 [list $PortName20 $Interface20 $DataType20 $Pointer20 $Dims20 $Const20 $Volatile20 $ArrayOpt20 $Initializer20 $External20 $NameSpace20]
lappend globalVariable $Port20
set PortName21 "MemoryController::is_second_split_layer"
set BitWidth21 "8"
set ArrayOpt21 ""
set Const21 "0"
set Volatile21 "0"
set Pointer21 "0"
set Reference21 "0"
set Initializer21 ""
set External21 0
set Dims21 [list 0]
set Interface21 "wire"
set SpaceName210 "MemoryController"
set NameSpace21 [list  [list  space $SpaceName210] ]
set DataType21 "bool"
set Port21 [list $PortName21 $Interface21 $DataType21 $Pointer21 $Dims21 $Const21 $Volatile21 $ArrayOpt21 $Initializer21 $External21 $NameSpace21]
lappend globalVariable $Port21
set PortName22 "MemoryController::is_first_split_layer"
set BitWidth22 "8"
set ArrayOpt22 ""
set Const22 "0"
set Volatile22 "0"
set Pointer22 "0"
set Reference22 "0"
set Initializer22 ""
set External22 0
set Dims22 [list 0]
set Interface22 "wire"
set SpaceName220 "MemoryController"
set NameSpace22 [list  [list  space $SpaceName220] ]
set DataType22 "bool"
set Port22 [list $PortName22 $Interface22 $DataType22 $Pointer22 $Dims22 $Const22 $Volatile22 $ArrayOpt22 $Initializer22 $External22 $NameSpace22]
lappend globalVariable $Port22
set PortName23 "MemoryController::dram_weights_offset"
set BitWidth23 "32"
set ArrayOpt23 ""
set Const23 "0"
set Volatile23 "0"
set Pointer23 "0"
set Reference23 "0"
set Initializer23 ""
set External23 0
set Dims23 [list 0]
set Interface23 "wire"
set SpaceName230 "MemoryController"
set NameSpace23 [list  [list  space $SpaceName230] ]
set DataType23 "unsigned int"
set Port23 [list $PortName23 $Interface23 $DataType23 $Pointer23 $Dims23 $Const23 $Volatile23 $ArrayOpt23 $Initializer23 $External23 $NameSpace23]
lappend globalVariable $Port23
set PortName24 "MemoryController::dram_data_offset"
set BitWidth24 "32"
set ArrayOpt24 ""
set Const24 "0"
set Volatile24 "0"
set Pointer24 "0"
set Reference24 "0"
set Initializer24 ""
set External24 0
set Dims24 [list 0]
set Interface24 "wire"
set SpaceName240 "MemoryController"
set NameSpace24 [list  [list  space $SpaceName240] ]
set DataType24 "unsigned int"
set Port24 [list $PortName24 $Interface24 $DataType24 $Pointer24 $Dims24 $Const24 $Volatile24 $ArrayOpt24 $Initializer24 $External24 $NameSpace24]
lappend globalVariable $Port24
set PortName25 "MemoryController::ch_out"
set BitWidth25 "16"
set ArrayOpt25 ""
set Const25 "0"
set Volatile25 "0"
set Pointer25 "0"
set Reference25 "0"
set Initializer25 ""
set External25 0
set Dims25 [list 0]
set Interface25 "wire"
set SpaceName250 "MemoryController"
set NameSpace25 [list  [list  space $SpaceName250] ]
set DataType25 "[list ap_uint 10 ]"
set Port25 [list $PortName25 $Interface25 $DataType25 $Pointer25 $Dims25 $Const25 $Volatile25 $ArrayOpt25 $Initializer25 $External25 $NameSpace25]
lappend globalVariable $Port25
set PortName26 "ImageCache::width_in"
set BitWidth26 "16"
set ArrayOpt26 ""
set Const26 "0"
set Volatile26 "0"
set Pointer26 "0"
set Reference26 "0"
set Initializer26 ""
set External26 0
set Dims26 [list 0]
set Interface26 "wire"
set SpaceName260 "ImageCache"
set NameSpace26 [list  [list  space $SpaceName260] ]
set DataType26 "[list ap_uint 9 ]"
set Port26 [list $PortName26 $Interface26 $DataType26 $Pointer26 $Dims26 $Const26 $Volatile26 $ArrayOpt26 $Initializer26 $External26 $NameSpace26]
lappend globalVariable $Port26
set PortName27 "ImageCache::loads_left"
set BitWidth27 "32"
set ArrayOpt27 ""
set Const27 "0"
set Volatile27 "0"
set Pointer27 "0"
set Reference27 "0"
set Initializer27 ""
set External27 0
set Dims27 [list 0]
set Interface27 "wire"
set SpaceName270 "ImageCache"
set NameSpace27 [list  [list  space $SpaceName270] ]
set DataType27 "[list ap_uint 21 ]"
set Port27 [list $PortName27 $Interface27 $DataType27 $Pointer27 $Dims27 $Const27 $Volatile27 $ArrayOpt27 $Initializer27 $External27 $NameSpace27]
lappend globalVariable $Port27
set PortName28 "ImageCache::line_width"
set BitWidth28 "16"
set ArrayOpt28 ""
set Const28 "0"
set Volatile28 "0"
set Pointer28 "0"
set Reference28 "0"
set Initializer28 ""
set External28 0
set Dims28 [list 0]
set Interface28 "wire"
set SpaceName280 "ImageCache"
set NameSpace28 [list  [list  space $SpaceName280] ]
set DataType28 "[list ap_uint 16 ]"
set Port28 [list $PortName28 $Interface28 $DataType28 $Pointer28 $Dims28 $Const28 $Volatile28 $ArrayOpt28 $Initializer28 $External28 $NameSpace28]
lappend globalVariable $Port28
set PortName29 "ImageCache::height_in"
set BitWidth29 "16"
set ArrayOpt29 ""
set Const29 "0"
set Volatile29 "0"
set Pointer29 "0"
set Reference29 "0"
set Initializer29 ""
set External29 0
set Dims29 [list 0]
set Interface29 "wire"
set SpaceName290 "ImageCache"
set NameSpace29 [list  [list  space $SpaceName290] ]
set DataType29 "[list ap_uint 9 ]"
set Port29 [list $PortName29 $Interface29 $DataType29 $Pointer29 $Dims29 $Const29 $Volatile29 $ArrayOpt29 $Initializer29 $External29 $NameSpace29]
lappend globalVariable $Port29
set PortName30 "ImageCache::curr_img_cache_line"
set BitWidth30 "8"
set ArrayOpt30 ""
set Const30 "0"
set Volatile30 "0"
set Pointer30 "0"
set Reference30 "0"
set Initializer30 ""
set External30 0
set Dims30 [list 0]
set Interface30 "wire"
set SpaceName300 "ImageCache"
set NameSpace30 [list  [list  space $SpaceName300] ]
set DataType30 "[list ap_uint 2 ]"
set Port30 [list $PortName30 $Interface30 $DataType30 $Pointer30 $Dims30 $Const30 $Volatile30 $ArrayOpt30 $Initializer30 $External30 $NameSpace30]
lappend globalVariable $Port30
set PortName31 "ImageCache::curr_img_cache_addr"
set BitWidth31 "16"
set ArrayOpt31 ""
set Const31 "0"
set Volatile31 "0"
set Pointer31 "0"
set Reference31 "0"
set Initializer31 ""
set External31 0
set Dims31 [list 0]
set Interface31 "wire"
set SpaceName310 "ImageCache"
set NameSpace31 [list  [list  space $SpaceName310] ]
set DataType31 "[list ap_uint 16 ]"
set Port31 [list $PortName31 $Interface31 $DataType31 $Pointer31 $Dims31 $Const31 $Volatile31 $ArrayOpt31 $Initializer31 $External31 $NameSpace31]
lappend globalVariable $Port31
set PortName32 "ImageCache::ch_in"
set BitWidth32 "16"
set ArrayOpt32 ""
set Const32 "0"
set Volatile32 "0"
set Pointer32 "0"
set Reference32 "0"
set Initializer32 ""
set External32 0
set Dims32 [list 0]
set Interface32 "wire"
set SpaceName320 "ImageCache"
set NameSpace32 [list  [list  space $SpaceName320] ]
set DataType32 "[list ap_uint 10 ]"
set Port32 [list $PortName32 $Interface32 $DataType32 $Pointer32 $Dims32 $Const32 $Volatile32 $ArrayOpt32 $Initializer32 $External32 $NameSpace32]
lappend globalVariable $Port32
set PortName33 "ImageCache::IBRAM"
set BitWidth33 "1048576"
set ArrayOpt33 ""
set Const33 "0"
set Volatile33 "0"
set Pointer33 "0"
set Reference33 "0"
set Initializer33 ""
set External33 0
set Dims33 [list  32768]
set Interface33 "wire"
set SpaceName330 "ImageCache"
set NameSpace33 [list  [list  space $SpaceName330] ]
set DataType33 "float"
set Port33 [list $PortName33 $Interface33 $DataType33 $Pointer33 $Dims33 $Const33 $Volatile33 $ArrayOpt33 $Initializer33 $External33 $NameSpace33]
lappend globalVariable $Port33
set PortName34 "GPoolCache::GBRAM"
set BitWidth34 "16384"
set ArrayOpt34 ""
set Const34 "0"
set Volatile34 "0"
set Pointer34 "0"
set Reference34 "0"
set Initializer34 ""
set External34 0
set Dims34 [list  512]
set Interface34 "wire"
set SpaceName340 "GPoolCache"
set NameSpace34 [list  [list  space $SpaceName340] ]
set DataType34 "float"
set Port34 [list $PortName34 $Interface34 $DataType34 $Pointer34 $Dims34 $Const34 $Volatile34 $ArrayOpt34 $Initializer34 $External34 $NameSpace34]
lappend globalVariable $Port34
set PortList ""
set PortName0 "layer"
set BitWidth0 "288"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "0"
set Reference0 "0"
set Dims0 [list 0]
set Interface0 "wire"
set structMem0 ""
set PortName00 "name"
set BitWidth00 "56"
set ArrayOpt00 ""
set Const00 "0"
set Volatile00 "0"
set Pointer00 "0"
set Reference00 "0"
set Dims00 [list  7]
set Interface00 "wire"
set DataType00 "char"
set Port00 [list $PortName00 $Interface00 $DataType00 $Pointer00 $Dims00 $Const00 $Volatile00 $ArrayOpt00]
lappend structMem0 $Port00
set PortName01 "width"
set BitWidth01 "16"
set ArrayOpt01 ""
set Const01 "0"
set Volatile01 "0"
set Pointer01 "0"
set Reference01 "0"
set Dims01 [list 0]
set Interface01 "wire"
set DataType01 "[list ap_uint 9 ]"
set Port01 [list $PortName01 $Interface01 $DataType01 $Pointer01 $Dims01 $Const01 $Volatile01 $ArrayOpt01]
lappend structMem0 $Port01
set PortName02 "height"
set BitWidth02 "16"
set ArrayOpt02 ""
set Const02 "0"
set Volatile02 "0"
set Pointer02 "0"
set Reference02 "0"
set Dims02 [list 0]
set Interface02 "wire"
set DataType02 "[list ap_uint 9 ]"
set Port02 [list $PortName02 $Interface02 $DataType02 $Pointer02 $Dims02 $Const02 $Volatile02 $ArrayOpt02]
lappend structMem0 $Port02
set PortName03 "channels_in"
set BitWidth03 "16"
set ArrayOpt03 ""
set Const03 "0"
set Volatile03 "0"
set Pointer03 "0"
set Reference03 "0"
set Dims03 [list 0]
set Interface03 "wire"
set DataType03 "[list ap_uint 10 ]"
set Port03 [list $PortName03 $Interface03 $DataType03 $Pointer03 $Dims03 $Const03 $Volatile03 $ArrayOpt03]
lappend structMem0 $Port03
set PortName04 "channels_out"
set BitWidth04 "16"
set ArrayOpt04 ""
set Const04 "0"
set Volatile04 "0"
set Pointer04 "0"
set Reference04 "0"
set Dims04 [list 0]
set Interface04 "wire"
set DataType04 "[list ap_uint 10 ]"
set Port04 [list $PortName04 $Interface04 $DataType04 $Pointer04 $Dims04 $Const04 $Volatile04 $ArrayOpt04]
lappend structMem0 $Port04
set PortName05 "kernel"
set BitWidth05 "8"
set ArrayOpt05 ""
set Const05 "0"
set Volatile05 "0"
set Pointer05 "0"
set Reference05 "0"
set Dims05 [list 0]
set Interface05 "wire"
set DataType05 "[list ap_uint 2 ]"
set Port05 [list $PortName05 $Interface05 $DataType05 $Pointer05 $Dims05 $Const05 $Volatile05 $ArrayOpt05]
lappend structMem0 $Port05
set PortName06 "stride"
set BitWidth06 "8"
set ArrayOpt06 ""
set Const06 "0"
set Volatile06 "0"
set Pointer06 "0"
set Reference06 "0"
set Dims06 [list 0]
set Interface06 "wire"
set DataType06 "[list ap_uint 2 ]"
set Port06 [list $PortName06 $Interface06 $DataType06 $Pointer06 $Dims06 $Const06 $Volatile06 $ArrayOpt06]
lappend structMem0 $Port06
set PortName07 "pad"
set BitWidth07 "8"
set ArrayOpt07 ""
set Const07 "0"
set Volatile07 "0"
set Pointer07 "0"
set Reference07 "0"
set Dims07 [list 0]
set Interface07 "wire"
set DataType07 "bool"
set Port07 [list $PortName07 $Interface07 $DataType07 $Pointer07 $Dims07 $Const07 $Volatile07 $ArrayOpt07]
lappend structMem0 $Port07
set PortName08 "relu"
set BitWidth08 "8"
set ArrayOpt08 ""
set Const08 "0"
set Volatile08 "0"
set Pointer08 "0"
set Reference08 "0"
set Dims08 [list 0]
set Interface08 "wire"
set DataType08 "bool"
set Port08 [list $PortName08 $Interface08 $DataType08 $Pointer08 $Dims08 $Const08 $Volatile08 $ArrayOpt08]
lappend structMem0 $Port08
set PortName09 "is_first_split_layer"
set BitWidth09 "8"
set ArrayOpt09 ""
set Const09 "0"
set Volatile09 "0"
set Pointer09 "0"
set Reference09 "0"
set Dims09 [list 0]
set Interface09 "wire"
set DataType09 "bool"
set Port09 [list $PortName09 $Interface09 $DataType09 $Pointer09 $Dims09 $Const09 $Volatile09 $ArrayOpt09]
lappend structMem0 $Port09
set PortName010 "is_second_split_layer"
set BitWidth010 "8"
set ArrayOpt010 ""
set Const010 "0"
set Volatile010 "0"
set Pointer010 "0"
set Reference010 "0"
set Dims010 [list 0]
set Interface010 "wire"
set DataType010 "bool"
set Port010 [list $PortName010 $Interface010 $DataType010 $Pointer010 $Dims010 $Const010 $Volatile010 $ArrayOpt010]
lappend structMem0 $Port010
set PortName011 "global_pool"
set BitWidth011 "8"
set ArrayOpt011 ""
set Const011 "0"
set Volatile011 "0"
set Pointer011 "0"
set Reference011 "0"
set Dims011 [list 0]
set Interface011 "wire"
set DataType011 "bool"
set Port011 [list $PortName011 $Interface011 $DataType011 $Pointer011 $Dims011 $Const011 $Volatile011 $ArrayOpt011]
lappend structMem0 $Port011
set PortName012 "mem_addr_input"
set BitWidth012 "32"
set ArrayOpt012 ""
set Const012 "0"
set Volatile012 "0"
set Pointer012 "0"
set Reference012 "0"
set Dims012 [list 0]
set Interface012 "wire"
set DataType012 "[list ap_uint 23 ]"
set Port012 [list $PortName012 $Interface012 $DataType012 $Pointer012 $Dims012 $Const012 $Volatile012 $ArrayOpt012]
lappend structMem0 $Port012
set PortName013 "mem_addr_output"
set BitWidth013 "32"
set ArrayOpt013 ""
set Const013 "0"
set Volatile013 "0"
set Pointer013 "0"
set Reference013 "0"
set Dims013 [list 0]
set Interface013 "wire"
set DataType013 "[list ap_uint 23 ]"
set Port013 [list $PortName013 $Interface013 $DataType013 $Pointer013 $Dims013 $Const013 $Volatile013 $ArrayOpt013]
lappend structMem0 $Port013
set PortName014 "mem_addr_weights"
set BitWidth014 "32"
set ArrayOpt014 ""
set Const014 "0"
set Volatile014 "0"
set Pointer014 "0"
set Reference014 "0"
set Dims014 [list 0]
set Interface014 "wire"
set DataType014 "[list ap_uint 23 ]"
set Port014 [list $PortName014 $Interface014 $DataType014 $Pointer014 $Dims014 $Const014 $Volatile014 $ArrayOpt014]
lappend structMem0 $Port014
set structParameter0 [list ]
set structArgument0 [list ]
set NameSpace0 [list ]
set structIsPacked0 "0"
set DataType0 [list "layer_t" "struct layer_t" $structMem0 1 0 $structParameter0 $structArgument0 $NameSpace0 $structIsPacked0]
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "SHARED_DRAM"
set BitWidth1 "64"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "1"
set Reference1 "0"
set Dims1 [list 0]
set Interface1 "wire"
set DataType1 "float"
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set PortName2 "weights_offset"
set BitWidth2 "32"
set ArrayOpt2 ""
set Const2 "0"
set Volatile2 "0"
set Pointer2 "0"
set Reference2 "0"
set Dims2 [list 0]
set Interface2 "wire"
set DataType2 "unsigned int"
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2]
lappend PortList $Port2
set PortName3 "num_weights"
set BitWidth3 "32"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "0"
set Pointer3 "0"
set Reference3 "0"
set Dims3 [list 0]
set Interface3 "wire"
set DataType3 "[list ap_uint 19 ]"
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3]
lappend PortList $Port3
set PortName4 "input_offset"
set BitWidth4 "32"
set ArrayOpt4 ""
set Const4 "0"
set Volatile4 "0"
set Pointer4 "0"
set Reference4 "0"
set Dims4 [list 0]
set Interface4 "wire"
set DataType4 "unsigned int"
set Port4 [list $PortName4 $Interface4 $DataType4 $Pointer4 $Dims4 $Const4 $Volatile4 $ArrayOpt4]
lappend PortList $Port4
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 1 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
