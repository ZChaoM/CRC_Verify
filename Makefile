all:
	gcc main.c CRC8_Table.c -o CRC-8_table_test.exe
	CRC-8_table_test.exe
# .PHONY clean

clean:
	rm *.exe