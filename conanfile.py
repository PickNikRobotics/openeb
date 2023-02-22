# -*- coding: utf-8 -*-
from conans import ConanFile, CMake


class AsensusConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = (
        "gtest/1.12.1",
        "opencv/4.5.5",
        "boost/1.78.0",
        "libusb/1.0.26",        
        "glfw/3.3.8",
        "glew/2.2.0",

    )
    generators = "cmake_find_package", "cmake_paths"

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
