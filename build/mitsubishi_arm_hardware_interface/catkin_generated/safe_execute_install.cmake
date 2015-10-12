execute_process(COMMAND "/home/yasmeen/MarcoStuff/catkin_ws/build/mitsubishi_arm_hardware_interface/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/yasmeen/MarcoStuff/catkin_ws/build/mitsubishi_arm_hardware_interface/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
