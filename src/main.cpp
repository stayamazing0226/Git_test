#include <iostream>
#include <ctime>

#include "simulation_config.h"
#include "mesh.h"
#include "matrix_assembler.h"
#include "solver.h"
#include "post_processor.h"

int main(int argc, char* argv[]){

    std::time_t now = std::time(nullptr);
    
    std::cout << std::ctime(&now);

	return 0;
}