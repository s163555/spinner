# Install script for directory: C:/Users/Jeppe/projects/spinner/zephyr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Zephyr-Kernel")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Users/Jeppe/zephyr-sdk-0.15.2/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/arch/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/lib/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/soc/arm/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/boards/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/subsys/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/drivers/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/modules/spinner/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/modules/cmsis/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/modules/stm32/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/kernel/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/cmake/flash/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/cmake/usage/cmake_install.cmake")
  include("C:/Users/Jeppe/projects/spinner/spinner/spinner/build/zephyr/cmake/reports/cmake_install.cmake")

endif()

