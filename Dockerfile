# syntax=docker/dockerfile:1
FROM ubuntu:latest
RUN apt-get update && \
      apt-get -y install sudo

RUN useradd -m docker && echo "docker:docker" | chpasswd && adduser docker sudo
RUN sudo apt-get update -y

RUN apt-get install -y --fix-missing libsdl2-dev
RUN apt-get install -y libfmt-dev
RUN apt-get install -y make
RUN apt-get install -y gcc
WORKDIR /app
COPY . .
# RUN make

