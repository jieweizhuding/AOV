# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\curriculum_design_code_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\curriculum_design_code_autogen.dir\\ParseCache.txt"
  "curriculum_design_code_autogen"
  )
endif()
