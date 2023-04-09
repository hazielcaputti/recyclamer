#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/haziel/vrx_ws/src/vrx/vrx_gazebo"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/haziel/vrx_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/haziel/vrx_ws/install/lib/python3/dist-packages:/home/haziel/vrx_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/haziel/vrx_ws/build" \
    "/usr/bin/python3" \
    "/home/haziel/vrx_ws/src/vrx/vrx_gazebo/setup.py" \
     \
    build --build-base "/home/haziel/vrx_ws/build/vrx/vrx_gazebo" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/haziel/vrx_ws/install" --install-scripts="/home/haziel/vrx_ws/install/bin"