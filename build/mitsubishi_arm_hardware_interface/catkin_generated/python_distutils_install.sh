#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/yasmeen/MarcoStuff/catkin_ws/src/mitsubishi_arm_hardware_interface"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/yasmeen/MarcoStuff/catkin_ws/install/lib/python2.7/dist-packages:/home/yasmeen/MarcoStuff/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/yasmeen/MarcoStuff/catkin_ws/build" \
    "/usr/bin/python" \
    "/home/yasmeen/MarcoStuff/catkin_ws/src/mitsubishi_arm_hardware_interface/setup.py" \
    build --build-base "/home/yasmeen/MarcoStuff/catkin_ws/build/mitsubishi_arm_hardware_interface" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/yasmeen/MarcoStuff/catkin_ws/install" --install-scripts="/home/yasmeen/MarcoStuff/catkin_ws/install/bin"
