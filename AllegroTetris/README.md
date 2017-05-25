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
To install allegro library
`````
sudo apt-get install liballegro5-dev
`````
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
To build tests, do the following:
````
make D_UNITY=res/Unity check
````

## Authors
* **Ilya Aliev** - aliev.ilia@yandex.ru

* **Andrew Bezborodov** - andrew1000@list.ru


