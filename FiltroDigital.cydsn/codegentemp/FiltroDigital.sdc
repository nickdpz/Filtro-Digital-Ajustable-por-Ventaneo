# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Nicolas Zamora\Documents\Embepot\Filtro-Digital-Ajustable-por-Ventaneo\FiltroDigital.cydsn\FiltroDigital.cyprj
# Date: Fri, 05 Oct 2018 02:19:05 GMT
#set_units -time ns
create_clock -name {ADC_Ext_CP_Clk(routed)} -period 13.386880856760374 -waveform {0 6.69344042838019} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 13.386880856760374 -waveform {0 6.69344042838019} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyMASTER_CLK} -period 13.386880856760374 -waveform {0 6.69344042838019} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {ADC_Ext_CP_Clk} -period 13.386880856760374 -waveform {0 6.69344042838019} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {ADC_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 155 309} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 37351 74701} [list [get_pins {ClockBlock/dclk_glb_1}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\Nicolas Zamora\Documents\Embepot\Filtro-Digital-Ajustable-por-Ventaneo\FiltroDigital.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Nicolas Zamora\Documents\Embepot\Filtro-Digital-Ajustable-por-Ventaneo\FiltroDigital.cydsn\FiltroDigital.cyprj
# Date: Fri, 05 Oct 2018 02:18:56 GMT
