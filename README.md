
# Mac development environment setup
- install command line tools (xcode-select --install)
- create a project directory like work/ruuvi/
- download SDK from https://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v15.x.x/
- in command line, cd to project directory
- unzip SDK to own directory in project directory (unzip ~/Downloads/nRF5_SDK_15.2.0_9412b96.zip)
- get poc-ruuvitag code from git to another directory in project directory (poc-ruuvitag)
- you now have a common root directory (work/ruuvi/) sdk in (work/ruuvi/nRF5_SDK_15.2.0_9412b96) and project code in (work/ruuvi/poc-ruuvitag) 

Execute command line commands to install helper tools
- brew install gcc make gcc-arm-embedded git arm-linux-gnueabihf-binutils mergepbx nfcutils
- brew tap ArmMbed/homebrew-formulae
- brew install arm-none-eabi-gcc

Configure SDK
- copy example files from work/ruuvi/poc-ruuvitag/sdk_configs
- nRF5_SDK_15.2.0_9412b96/components/toolchain/gcc/Makefile.posix
- nRF5_SDK_15.2.0_9412b96/components/libraries/util/sdk_config.h



# Nothing to see here, move along
This repository is a playground of various proof of concepts based on Ruuvi Firmware, 
chances are that if you're trying to build anything useful on top of this repository
you'll be sorely disappointed
