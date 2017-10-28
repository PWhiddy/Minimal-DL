cmake_minimum_required(VERSION 3.5)
project(mindl)

add_subdirectory(pybind11)
pybind11_add_module(mindl src/PythonBindings.cpp)
