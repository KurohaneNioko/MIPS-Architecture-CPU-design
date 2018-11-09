onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -format Logic -height 30 /testbench/clk
add wave -noupdate -format Logic -height 30 /testbench/reset
#add wave -noupdate -format Logic -height 30 /testbench_miniuart/stb
#add wave -noupdate -format Logic -height 30 /testbench_miniuart/we
add wave -noupdate -format Literal -height 30 -radix unsigned /testbench/writedata
add wave -noupdate -format Literal -height 30 -radix hexadecimal /testbench/data
add wave -noupdate -format Literal -height 30 -radix hexadecimal /testbench/dout
add wave -noupdate -format Literal -height 30 -radix hexadecimal /testbench/memwrite
#add wave -noupdate -format Logic -height 30 /testbench_miniuart/ack
#add wave -noupdate -format Logic -height 30 /testbench_miniuart/rxd
#add wave -noupdate -format Logic -height 30 /testbench_miniuart/txd
add wave -noupdate -color Red -format Literal -height 30 -label IM -radix unsigned /testbench/Top/IM
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1015000 ns} 0} {{Cursor 3} {72939 ns} 0}
configure wave -namecolwidth 189
configure wave -valuecolwidth 63
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1000
configure wave -griddelta 40
configure wave -timeline 1
update
WaveRestoreZoom {0 ns} {1168996 ns}

