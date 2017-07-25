##==============================================================================
## Author : Pierre Estérie
## Year   : 2017
## This is a free software !
##==============================================================================

##==============================================================================
## Process a list of source files to generate corresponding test target
##==============================================================================
function(make_tests root target)

  foreach(file ${root})

    string(REPLACE ".cpp" ".test" base ${file})

    add_executable(${target} ${file})
    set_property( TARGET ${target}
                  PROPERTY RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/test"
                )

  endforeach()

endfunction()