#!/bin/bash
set -e

USER=$(whoami) 
SRC="/home/$USER/.config"

read -rp "Directory to custom .config: " DST


rsync -a "$SRC/" "$DST/