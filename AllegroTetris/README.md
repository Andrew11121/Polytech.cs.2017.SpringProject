# polytech.cs.2017.spring_project
Template for Course Project

## Getting Started
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Directory structure
The source code is organized as follows:

Subdirectory | Description
-------------|-------------------
src/         | source files 
src/tests    | unit tests 
doc/         | documentation 
res/         | static resources

### Build
To build the project, do the following:
````
make
````
To rebuild everything from scratch, do the following:
````
make clean
````
To open the project, in console write 
````
./AllegroTetris
````
Description of tests are included in the file: description_of_tests.txt

To open each test, in Makefile change 

D_SRC    := ./src

to

D_SRC    := ./src/tests/test_№ , where № is a number of test

and PROJECT  := AllegroTetris to 

PROJECT  := test_№ , where № is a number of test

Then, in console write:
````
make 
````
To open the project, in console write:
````
./test_№ 

````
## Authors
* **Ilya Aliev** - aliev.ilia@yandex.ru

* **Andrew Bezborodov** - andrew1000@list.ru


