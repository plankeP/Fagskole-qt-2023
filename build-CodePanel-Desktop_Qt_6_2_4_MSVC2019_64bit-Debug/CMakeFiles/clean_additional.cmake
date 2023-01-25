# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CodePanel_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CodePanel_autogen.dir\\ParseCache.txt"
  "CodePanel_autogen"
  )
endif()
