# CMake-vcpkg-project-template project
## About
Project was created as tempalte for projects that are planed to be cmake and vcpkg based. 

CMake is cross-platform build tool, and combined with vcpkg (cross-platform package manager), easy to build on Windows and Linux, 
as well with different IDE, like VS code and Visual Studio.

Motivation behind combining this two technologies comes from fact, that `vcpkg` is cross-platform package manager, that has a rich database of packages,
and can get them fast and clean, and help CMake to locate them easily.

In this template project, `Catch2` library is used to showcase the workflow and provide template example. Most of examples in tests code are taken from `Catch2` examples, 
for testing purposes. 

References used here, as examples, can be found within: https://github.com/catchorg/Catch2 <3

## Requirments
CMake https://cmake.org/

## Step 0
It's advised to run `git submodule init` and `git submodule update` commands to pull `vcpkg` repo. Without this, CMake will not be able to generate build files!

## Using with linux

To run project on Linux, you would only need to run `cmake` and `make` commands. 

Be advised, creating new folder, for example `build`, positioning in that folder and run `cmake ..` and `make` commands, will generate all builds in that folder.

This is a simple and clean way to separate build files from your project.

Otherwise, if you run `cmake` from the root folder, you will have cache generated all over the project, what is hard to manager.


## Using with windows
1. Using Linux shell on windows
- Referet to "Using with Linux section, as it should cover this approach.
2. Using with Visual Studio
- Open folder with visual studio
- Generate CMake cache (usually Visual studio will recognize CMake project, and give you prompt to run generation)
- Build targets through Visual Studio and run selected `.exe`

## Add new packages
To add new package to project, first check wanted package here: https://vcpkg.io/en/packages.html

Webpage should provide info about package that you looking for, and also additional info, like version, features etc. that you can grab through `vcpkg` manager.

To add package to your project, add package name and specifications into `vcpkg.json` file in root of the project. 


More about JSON format for that file on: https://learn.microsoft.com/en-us/vcpkg/reference/vcpkg-json

After that, simply run CMake build, and it will use `vcpkg` tool chaing to grab necessery packages.

Enjoy! ^^
