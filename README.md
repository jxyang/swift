<img src="https://swift.org/assets/images/swift.svg" alt="Swift logo" height="70" >
# Swift Programming Language on Windows

**Welcome to Swift on Windows!**

Swift is a high-performance system programming language.  It has a clean
and modern syntax, offers seamless access to existing C and Objective-C code
and frameworks, and is memory safe by default.

This fork is a starting point to port Swift to Windows. The ultimate goals are:

1) Enable development of the Swift compiler itself within a Visual Studio IDE on Windows, and  
2) Enable development of Swift programs on Windows.

 
## Getting Started 


### System Requirements

Windows 7/8/10  
[Visual Studio 2015 (or above) Community Edition](https://www.visualstudio.com/en-us/downloads/download-visual-studio-vs.aspx) with [the latest Clang front end] (http://llvm.org/builds/)  
[python (3.4.4 or above)](https://www.python.org/downloads/windows/)  
[cmake (3.4.3 or above)](https://cmake.org/download)
[git for windows (2.8.0 or above)](https://git-scm.com/download/win)

Make sure these commands are available from a windows prompt: python, cmake. If not, please add their pathes to system environment variable "PATH". 

### Getting Sources for Swift and Related Projects

**Via HTTPS**  For those checking out sources as read-only, HTTPS works best (from a GIT bash, installed as part of git for windows):

    git clone https://github.com/apple/swift.git
    cd swift
    ./utils/update-checkout --clone

**Via SSH**  For those who plan on regularly making direct commits,
cloning over SSH may provide a better experience (which requires
uploading SSH keys to GitHub):

    git clone git@github.com:apple/swift.git
    cd swift
    ./utils/update-checkout --clone-with-ssh

#### CMake
[CMake](http://cmake.org) is the core infrastructure used to configure builds of
Swift and its companion projects. We will use it to generate Visual Studio project files (.vcxproj) and the solution file (.sln), so the 
whole compiler suite can be compiled within Visual Studio.

#### Visual Studio
Visual Studio is the current recommended build system
for building Swift and is the default configuration generated by CMake on Windows.

##### Build from source
**Via scripts from Windows promt**

    cd swift  
	buildCmarkLLVM.bat  
	buildSwift.bat    
	
**Via Visual Studio
    open buildswift/swift.sln (after cmake has generated all relevant project files and solution file)
	right click on "swift" project and click "build" 
	right click on "custom-Swift.obj" project and click on "build"

## Testing Swift

See [docs/Testing.rst](docs/Testing.rst).

In Addition, use "-frontend" as the first command line option while debugging Swift within Visual Studio.

## TODO

Port Swift runtime.   
Get rid of the awkward workarounds 

## Contributing to porting Swift to Windows

Contributions to this project are welcomed and encouraged! 