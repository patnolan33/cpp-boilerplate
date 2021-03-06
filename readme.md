# C++ Boilerplate
[![Build Status](https://travis-ci.org/patnolan33/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/patnolan33/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/patnolan33/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/patnolan33/cpp-boilerplate?branch=master)
---

## Overview

Modification of the cpp-boilerplate repo to implement a PID controller with a partner. Uses the following for build and testing:

- cmake
- googletest

## Installation

- Checkout the repo (and submodules)
```
$ git clone --recursive https://github.com/patnolan33/cpp-boilerplate.git
```
- In the root directory, run the following
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```
To run the program, change into the build directory and run
```
$ ./app/pid-app
```
To run the tests, change into the build directory and run
```
$ ./test/cpp-test
```
