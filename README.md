# 42-minitalk

![42-minitalk](https://socialify.git.ci/julienhouyet/42-minitalk/image?logo=https%3A%2F%2Fgithub.com%2Fayogun%2F42-project-badges%2Fraw%2Fmain%2Fbadges%2Fminitalkm.png&name=1&owner=1&pattern=Circuit%20Board&theme=Auto)

# Introduction

The purpose of this project is to code a small data exchange program using UNIX signals. 

At [42 School](https://github.com/42School), almost every project must be written in accordance to the [Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf), the school's coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.

## :zap: Usage

To use this project, compile the project and :

1) Run the server with :

```shell
$ ./server
```

The terminal return the PID of the server.

2) Run the client with the PID of the server and a message in another shell :

```shell
$ ./client XXXXXX "Hello World"
```

The message is send to the server terminal !

###  :electric_plug: Installation

To install the project, clone this repository :

```shell
$ git@github.com:julienhouyet/42-minitalk.git
```

###  :package: Commands

To compile the project, run :

```shell
$ make
```

To re-compile the project  :

```shell
$ make re
```

To wipes all object files :

```shell
$ make clean
```

To delete the project and all object files

```shell
$ make fclean
```

##  :lock: License

GNU GENERAL PUBLIC LICENSE
Version 3.
