[![Build Status](https://travis-ci.org/ViBOT-Erasmus/BSCVDemoCpp1718.svg?branch=master)](https://travis-ci.org/ViBOT-Erasmus/BSCVDemoCpp1718) [![codecov](https://codecov.io/gh/ViBOT-Erasmus/BSCVDemoCpp1718/branch/master/graph/badge.svg)](https://codecov.io/gh/ViBOT-Erasmus/BSCVDemoCpp1718)

# Compilation
 Create a build folder:

`mkdir build`

* Move to the created folder:

`cd build`

* Create the `MakeFile` via cmake:

`cmake ../src` 

* Compile the code to generate the executable:

`make` or `make -j n` where `n` is the number of cores to use for the compilation

* A folder bin will be created at the same level as the build directory.
