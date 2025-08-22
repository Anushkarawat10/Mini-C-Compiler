# Base image
FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

# Install tools
RUN apt-get update && apt-get install -y \
    build-essential \
    flex \
    bison \
    g++ \
    make \
    && rm -rf /var/lib/apt/lists/*

# Create working directory
WORKDIR /compiler

# Copy your files
COPY . .

# Run build script
RUN chmod +x build.sh && ./build.sh

# Start a bash shell by default
CMD ["/bin/bash"]
