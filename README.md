# SQLPlugin

SQLPlugin is a plugin for Xcode. This plugin will list all files with database type in your simulator directories.

![Screenshots1](Screenshots/Screenshots1.png)

With SQLPlugin you can easily to get all database type files in your simulator directories. 

## Features

- Load all files with extension of sqlite \ db \ sql in your simulator directories. 
- Quick to view all rows in your database's table.

## Missing Features

- Full SQL operation. This plugin only support view all rows in your database's table.
- Test coverage


## How to use

After installed, You can use *shift + command + v* to open plugin window.

All the files in database type will list out automatically after the plugin window loaded.

You can also add any file in database type by click *Add* button or just drag them into your plugin window.

## Install

Install through [Alcatraz](http://alcatraz.io/), the package manager for Xcode.

Alternatively, clone the project:

1. Build the project to install the plugin. The plugin will be installed in `/Library/Application Support/Developer/Shared/Xcode/Plug-ins/SQLPlugin.xcplugin`.

2. Restart Xcode so the plugin bundle is loaded.


## License
The MIT License (MIT)

Copyright (c) 2016 Alfred Jiang

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.