# Sample C/C++ Visual Studio Code Project

This is taken from the [VSC docs page](https://code.visualstudio.com/docs/cpp/config-linux)

It demonstrates
* Using the GIT repository
  * the ``.gitignore`` file
* Setting the ``.vscode/tasks.json`` file to build C and C++ files
* Setting ``.vscode/launch.json`` to run a debug session on the executable
* Using Make to build your program
  * defining a ``Makefile`` to compile and link the program, based on the file extension
  * produce both the program, and the unit tests
* Adding a Unit Test framework
  * [Cgreen](https://github.com/cgreen-devs/cgreen)
  * [Documentation](https://github.com/cgreen-devs/cgreen/releases)
  * DEB package is available from their [GitHub releases page](https://github.com/cgreen-devs/cgreen/releases)

## GIT

[Git is a version control system.](https://git-scm.com)
Use it to tracks changes to files.
* Files need to be added to git's control, then committed to your local repository.
* Optionally, you can push and sync your local repository with one on the internet, such as [GitHub](https://github.com) or [GitLab](https://gitlab.com).
* [A cheatsheet for git commands](https://education.github.com/git-cheat-sheet-education.pdf)

## Microsoft Visual Studio Code

[Visual Studio Code](https://code.visualstudio.com/) is a useful cross-platform IDE (integrated development environment).

## Make

[Make](https://en.wikipedia.org/wiki/Make_(software)) is a build development tool.
It uses a file named ``Makefile`` (which **MUST** use tabs for indentation), to define
* build targets (usually the executable, or other output)
* the source for the targets
* how to make a target from a source
* it also has the idea of PHONY targets (without sources), so you can just run a command

To build a target, run the command ``make <target>``
* the Makefile has a special target called **all** which builds everything
* the "all" target is default if none is specified, so
  * ``make`` by itself will build all targets
* there is a target named **tests** which will build and run the tests
  * ``make tests``

The Makefile format is roughly,
```
<target>: <source1> [<source2>...]
    <some command to transfor source into target>
```
Again, the command must be indented using TABS

On Linux you will usually be using [Gnu Make](https://www.gnu.org/software/make/)

## Cgreen

[Cgreen](https://cgreen-devs.github.io/) is a framework for writing tests for C/C++ systems.
[Follow the installation instructions](https://cgreen-devs.github.io/#_installing_cgreen), and the libraries and include files should end up in the standard places for your compiler.

For the tests, you will want to put the functions to test into their own compilation unit, then link them into the test program and your normal program.
THe test framework provides a nice way to assert that certain conditions are true or not after running your function.
