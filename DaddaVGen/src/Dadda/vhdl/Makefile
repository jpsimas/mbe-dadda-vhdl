default:
	ghdl -a half_adder.vhd
	ghdl -a full_adder.vhd
	ghdl -a Mult_Dadda2.vhd
	ghdl -a Mult_Dadda3.vhd
	ghdl -a Mult_Dadda4.vhd
	ghdl -a Mult_Dadda32.vhd
	ghdl -a mbe_ppg.vhd
	ghdl -a tb2.vhd
	ghdl -a tb3.vhd
	ghdl -a tb4.vhd
	ghdl -a tb32.vhd
	ghdl -a tb_ppg.vhd
	ghdl -e tb2
	./tb2 --vcd=out2.vcd
	ghdl -e tb3
	./tb2 --vcd=out3.vcd
	ghdl -e tb4
	./tb4 --vcd=out4.vcd
	ghdl -e tb_ppg
	ghdl -e tb32
	./tb --vcd=out32.vcd
	./tb_ppg --vcd=out_ppg.vcd
clean:
	rm -rf *.o
	rm -rf work-obj93.cf
