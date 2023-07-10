# hvqm2lib

Reverse engineering of libhvqm2

## Dependencies

The build process has the following package requirements:

* make
* git
* build-essential
* binutils-mips-linux-gnu
* python3
* pip3

Under Debian / Ubuntu (which we recommend using), you can install them with the following commands:

```bash
sudo apt update
sudo apt install make git build-essential clang binutils-mips-linux-gnu gcc-mips-linux-gnu python3 python3-pip
```

To install the dependencies Python dependencies run:

```bash
python3 -m pip install -U -r requirements.txt
```

## Building

Place your `libhvqm2.a` file in the root of the cloned reposotiry and then run the following:

```bash
make setup
make disasm
make diff-init
```
