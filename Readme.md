# Advanced C++ [Udemy Course](https://www.udemy.com/course/learn-advanced-c-programming/)
- [Advanced C++ Udemy Course](#advanced-c-udemy-course)
  - [Installation](#installation)
  - [Uncrustify Beautifyer](#uncrustify-beautifyer)
  - [Add new executable target](#add-new-executable-target)


## Installation
Install all the good tools, git, gcc, cmake and uncrustify for formatting.

    sudo apt install build-essential gdb git uncrustify gcc cmake -y

## Uncrustify Beautifyer

I hoped that it would do more, but in the default uncrustify.cfg file it really is lame.
But still:
* Install the extension: zachflower.uncrustify
* add the uncrustify.cfg to your project, specify the location in the settings 
* select "Format Document" from the command palette (ctrl + shift + P)
    
 settings.json file additions: 

    "uncrustify.configPath.linux": ".vscode/uncrustify.cfg",
    "editor.defaultFormatter": "zachflower.uncrustify",

If anybody has some good tips on fixing the cfg i would love to get some more ideas.


## Add new executable target
Go to CMake extension in VSCode,
press 3 dots
select Alle Projekte sauber neu konfigurieren.