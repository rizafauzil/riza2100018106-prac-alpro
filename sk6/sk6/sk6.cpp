#include <iostream>
#include <fstream>
#include "in.h"
#include "pros.h"
#include "out.h"

int main(){
	
	Input input;
	input.cetak();
	input.toFile();

	Proses proses;
	proses.getData();
	proses.toFile();

	Output output;
	output.getData();
	output.cetak();

	return 0;
}
