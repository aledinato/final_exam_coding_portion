# Image Randomizer

## Description
This project creates png images with random pixels with settable dimentions.

## Dependancies
### libpng
libpng can be installed by running `sudo apt install libpng-dev`  

clang-format can be installed by running `sudo apt install clang-format`

## Formatting
Run `clang-format --dry-run --Werror --style=Google src/*.cpp src/*.h` to format all files in the src directory.

## Building
```
mkdir build
cd build
cmake ..
make
```
You should now have an executable of the name random_image

## Running
Usage: `./random_image <filename> <width> <height>`  
`<filename>` is the output image filename. It should be a `.png` file    
`<width> <height>` specifies to the width and height in pixels of the output image.


