#!/bin/bash

# Clean the trash
pause() {
    read -r -s -n  1 -p "Press any key to exit..."
    eval "rm -rf build/*"
}

build() {
    prjDirectory=$PWD

    # Build the project
    cmakeRun="cmake -H$prjDirectory -B$prjDirectory/build && make -C $prjDirectory/build"
    output="/$prjDirectory/build/source"
    eval "$cmakeRun"
    eval "$output"
    pause
}

printf '%s\n' "Running the build"

# Create build folder
if [ -d "./build" ]; then
    build
else
    echo "Build directory does not exist. Gonna create one"
    mkdir build && build  
fi






