# Install script for directory: /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE STATIC_LIBRARY FILES "/home/ubuntu20/Downloads/VoIP-software-master/build/src/tracy/libTracyClient.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/tracy" TYPE FILE FILES
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/TracyC.h"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/Tracy.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/TracyD3D11.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/TracyD3D12.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/TracyLua.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/TracyOpenCL.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/TracyOpenGL.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/tracy/TracyVulkan.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/client" TYPE FILE FILES
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/tracy_concurrentqueue.h"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/tracy_rpmalloc.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/tracy_SPSCQueue.h"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyArmCpuTable.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyCallstack.h"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyCallstack.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyDebug.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyDxt1.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyFastVector.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyLock.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyProfiler.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyRingBuffer.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyScoped.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyStringHelpers.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracySysTime.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracySysTrace.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/client/TracyThread.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/common" TYPE FILE FILES
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/tracy_lz4.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/tracy_lz4hc.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyAlign.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyAlloc.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyApi.h"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyColor.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyForceInline.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyMutex.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyProtocol.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyQueue.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracySocket.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyStackFrames.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracySystem.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyUwp.hpp"
    "/home/ubuntu20/Downloads/VoIP-software-master/3rdparty/tracy/public/common/TracyYield.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake"
         "/home/ubuntu20/Downloads/VoIP-software-master/build/src/tracy/CMakeFiles/Export/share/Tracy/TracyConfig.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/home/ubuntu20/Downloads/VoIP-software-master/build/src/tracy/CMakeFiles/Export/share/Tracy/TracyConfig.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/home/ubuntu20/Downloads/VoIP-software-master/build/src/tracy/CMakeFiles/Export/share/Tracy/TracyConfig-release.cmake")
  endif()
endif()

