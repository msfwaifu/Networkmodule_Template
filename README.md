# Ayria Networkmodule Template

Similar to the [Plugin Template](https://github.com/AyriaPublic/Extension_Template) this repository acts as a template for the modules used with [AyriaNetworking](https://github.com/AyriaPublic/AyriaNetworking). In addition to the plugins general structure, we introduce a new callback `GetServerinstance` which takes a hostname and returns a pointer to a new instance of a `IServer` class. The repository contains example implementations of TCP and UDP servers, for more advanced examples of how to extend the servers; check the [HTTP(s)Module](https://github.com/AyriaPublic/HTTPModule) which as the name suggests implements HTTP(s) server functionality.

## Module loading

As specified by [AyriaNetworking](https://github.com/AyriaPublic/AyriaNetworking), modules should be stored in the `./Plugins/AyriaNetworking/Networkingmodules` directory and an entry added to the `Configuration.csv` file in the same directory. Unlike plugins the module does not need a specific file-extension.
